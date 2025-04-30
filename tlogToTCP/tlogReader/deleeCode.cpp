#include <iostream>
#include <string>
//#include <fstream>
#include <ifstream>

using namespace std;

int main(int argc, char *argv[])
{
    std::string address = argv[1];
    std::cout<<"The entered address is : "<<address;
    ifstream file;

    return 0;
}