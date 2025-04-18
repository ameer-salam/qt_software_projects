#include <iostream>
#include <string>
#include "mavlinkParser.h"

using namespace std;

int main(int argc, char* argv[])
{
    MavlinkParser mavParser;
    if(argc > 2)
        return 0;
    string address = argv[1];
    //cout<<"The entered address is : "<<address<<endl;
    mavParser.getTlogFileLocation(address);
    return 0;
}