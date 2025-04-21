#include <iostream>
#include <string>
#include "tlogPacker.h"

using namespace std;

int main(int argc, char* argv[])
{
    TlogPacker tpack;
    if(argc > 2)
        return 0;
    string address = argv[1];
    //cout<<"The entered address is : "<<address<<endl;
    tpack.getTlogFileLocation(address);
    return 0;
}