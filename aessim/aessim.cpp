#include <cstdlib>
#include <fstream>
#include <iostream>

int strtoi(std::string str) {
    bool alphanumeric;
    for (char c : str) {
        alphanumeric = (c < 48 || c > 57);
        if (alphanumeric)
            break;
    }
    if (!alphanumeric)
        return std::stoi(str) % 256;
    return str[str.length() - 1];
}

int main(int argc, char *argv[]) {
    /*checking argument sanity*/
    if (argc < 17) {
        std::cerr << "Usage: aessim-<file/all/lm/sm/dm> <key bytes>\nExample #1: aessim-file 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4\n";
        return 1;
    }

    /*preparing aes.c source file*/
    std::ofstream keys_file;
    std::string key_filename = "./data/key.csv";
    keys_file.open(key_filename, std::ios::out);
    keys_file << std::to_string(strtoi(argv[1]));
    for (int i = 2; i < 17; i++)
        keys_file << "," << std::to_string(strtoi(argv[i]));
    keys_file.close();
    system("cat ./data/aes.c.prefix ./data/key.csv ./data/aes.c.suffix > ./data/aes.c");

    /*cross compiling aes.c*/
    system("cp ./data/aes.c ./cde-package/cde-root/src");
    system("./cde-package/sslittle-na-sstrix-gcc.cde -o aes.o src/aes.c");
    system("mv -f ./cde-package/cde-root/aes.o ./data");

    /*getting cache miss outputs*/
    system("./simplescalar/sim-outorder -config ./simplescalar/processor.config ./data/aes.o > ./data/sim-outorder.log 2>&1");
#if defined FILES
	system("grep \'data accesses\' ./data/sim-outorder.log | cut -d\" \" -f10 > ./data/da.log");
	system("grep \'load misses\' ./data/sim-outorder.log | cut -d\" \" -f12 > ./data/lm.log");
	system("grep \'store misses\' ./data/sim-outorder.log | cut -d\" \" -f11 > ./data/sm.log");
	system("grep \'dcache misses\' ./data/sim-outorder.log | cut -d\" \" -f10 > ./data/dm.log");
	system("sed 's/,/'\\\\t'/g' ./data/key.csv > ./data/keys.txt");
	system("paste ./data/keys.txt ./data/da.log ./data/lm.log ./data/sm.log ./data/dm.log >> aessim-results.log");
#elif defined ALL
	system("grep \'data accesses\' ./data/sim-outorder.log | cut -d\" \" -f10 > ./data/da.log");
	system("grep \'load misses\' ./data/sim-outorder.log | cut -d\" \" -f12 > ./data/lm.log");
	system("grep \'store misses\' ./data/sim-outorder.log | cut -d\" \" -f11 > ./data/sm.log");
	system("grep \'dcache misses\' ./data/sim-outorder.log | cut -d\" \" -f10 > ./data/dm.log");
    system("paste ./data/da.log ./data/lm.log ./data/sm.log ./data/dm.log");
#elif defined DM
	system("grep \'dcache misses\' ./data/sim-outorder.log | cut -d\" \" -f10");
#elif defined LM
	system("grep \'load misses\' ./data/sim-outorder.log | cut -d\" \" -f12");
#elif defined SM
	system("grep \'store misses\' ./data/sim-outorder.log | cut -d\" \" -f11");
#endif
	system("rm ./data/sim-outorder.log");
    return 0;
}
