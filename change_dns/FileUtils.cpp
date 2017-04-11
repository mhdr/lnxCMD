//
// Created by mahmood on 4/11/17.
//

#include "FileUtils.h"

void FileUtils::printContent(string file_path) {
    ifstream ifs(file_path.c_str());

    string line;

    while (getline(ifs,line))
    {
        cout << line << endl;
    }

    ifs.close();
}

void FileUtils::writeToFile(string file_path,string line) {
    ofstream ofs(file_path.c_str(),ios::out | ios::trunc);

    ofs.write(line.c_str(),line.length());

    ofs.close();
}
