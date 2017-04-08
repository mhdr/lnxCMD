#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void print_lines(string file_path){

    ifstream ifs(file_path.c_str());

    string line;

    while (getline(ifs,line))
    {
        cout << line << endl;
    }

    ifs.close();
}

void write_to_file(string file_path,string line)
{
    ofstream ofs(file_path.c_str(),ios::out | ios::trunc);

    ofs.write(line.c_str(),line.length());

    ofs.close();
}