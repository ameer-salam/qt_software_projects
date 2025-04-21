#include "tlogPacker.h"
//#include "C:\Users\Ameer\Downloads\c_library_v2-master\c_library_v2-master\ualberta\mavlink.h"
#include <fstream>
#include <istream>
#include <iostream>

using namespace std;

void TlogPacker::getTlogFileLocation(string IPFileAddress)
{
    ifstream InputFile(IPFileAddress, ios::binary); //opens the file as binary
    if(InputFile.is_open())
    {
        cout<<"The file : " <<IPFileAddress<<"\t is open"<<endl;
        cout<<"Starting the parsing operation!"<<endl;
    }
    else
    {
        cout<<"The File Failed to open!"<<endl;
        return;
    }
}