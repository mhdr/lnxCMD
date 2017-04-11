//
// Created by mahmood on 4/11/17.
//

#ifndef CHANGE_DNS_FILEUTILS_H
#define CHANGE_DNS_FILEUTILS_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class FileUtils {
public:
    static void printContent(string file_path);
    static void writeToFile(string file_path,string line);
};


#endif //CHANGE_DNS_FILEUTILS_H
