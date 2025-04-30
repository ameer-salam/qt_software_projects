#ifndef TLOGPACKER_H
#define TLOGPACEKR_H

#include<string>
#include<vector>

class TlogPacker{
    public:
        void getTlogFileLocation(std::string IPfile_addree);
        void printPacket(const std::vector<uint8_t> &packet);
};

#endif