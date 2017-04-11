#include <iostream>
#include <fstream>
#include <string>
#include "FileUtils.h"

using namespace std;

int main() {

    string file_path="/etc/resolv.conf";
    //string file_path="/home/mahmood/resolv.txt";

    cout << "Previous Content : " << endl;
    FileUtils::printContent(file_path);

    string line1="nameserver 8.8.8.8\n";
    string line2="nameserver 8.8.4.4\n";

    string line=line1+line2;
    FileUtils::writeToFile(file_path,line);


    cout << "Current Content : " << endl;
    FileUtils::printContent(file_path);

    return 0;
}