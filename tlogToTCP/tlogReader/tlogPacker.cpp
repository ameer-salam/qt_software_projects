#include "tlogPacker.h"
//#include "C:\Users\Ameer\Downloads\c_library_v2-master\c_library_v2-master\ualberta\mavlink.h"
#include <fstream>
#include <istream>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void TlogPacker::printPacket(const vector<uint8_t>& packet) {
    for (uint8_t byte : packet) {
        cout << hex << setw(2) << setfill('0') << (int)byte << " ";
    }
    cout << "\n\n";  // Two line gaps
}

void TlogPacker::getTlogFileLocation(string IPFileAddress)
{
    ifstream InputFile(IPFileAddress, ios::binary); //opens the file as binary
    if(InputFile.is_open())
    {
        cout<<"The file : " <<IPFileAddress<<"\t is open"<<endl;
        cout<<"Starting the parsing operation!"<<endl;

        uint8_t start_byte;

        while(!InputFile.eof())
        {
            InputFile.read(reinterpret_cast<char*>(&start_byte), 1);
            if(start_byte == 0XFE)
            {
                uint8_t payloadLength;
                InputFile.read(reinterpret_cast<char*>(&payloadLength), 1);

                vector<uint8_t> packet = {start_byte, payloadLength};

                for(int i=0; i<9; ++i)
                {
                    uint8_t byte;
                    InputFile.read(reinterpret_cast<char*>(&byte), 1);
                    packet.push_back(byte);
                }

                for(int i=0; i<payloadLength; ++i)
                {
                    uint8_t byte;
                    InputFile.read(reinterpret_cast<char*>(&byte), 1);
                    packet.push_back(byte);
                }

                for(int i=0; i<2; ++i)
                {
                    uint8_t byte;
                    InputFile.read(reinterpret_cast<char*>(&byte), 1);
                    packet.push_back(byte);
                }
                printPacket(packet);
            }
        }
    }
    else
    {
        cout<<"The File Failed to open!"<<endl;
        return;
    }
}