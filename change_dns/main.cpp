#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string file_path="/etc/resolv.conf";

    ifstream ifs(file_path.c_str());

    string line;

    cout << "Previous Content : " << endl;

    while (getline(ifs,line))
    {
        cout << line << endl;
    }

    ifs.close();

    ofstream ofs(file_path.c_str(),ios::out | ios::trunc);
    string line1="nameserver 8.8.8.8\n";
    string line2="nameserver 8.8.4.4\n";

    ofs.write(line1.c_str(),line1.length());
    ofs.write(line2.c_str(),line2.length());

    ofs.close();


    ifstream ifs2(file_path.c_str());

    line="";

    cout << "Current Content : " << endl;

    while (getline(ifs2,line))
    {
        cout << line << endl;
    }

    ifs2.close();


    return 0;
}