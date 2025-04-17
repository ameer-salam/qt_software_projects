#ifndef TLOGTOTCP_H
#define TLOGTOTCP_H

/*
This is me learnign to write the libraries for Cpp language

1. Types of libraries are - Static and dynamic 
    1. Static library 
        - linked during the compilation,
        - increases the size of the code in binary,
        - and runs with whatever version of code it is compiled with meaning it might be good for consistancy but, updates on the library would not show up until the code is recompiled
    2. Dynamic library
        - linked in runtime
        - any updates on the library code can be reflected on the linked code (they are versioned seperately)
        - loaded only when called once and then can be shared among other componets 
*/

class tlogToTCP{

    public:
    void helloWords()
    {
        std::cout<<"Hello World";
    }
};

#endif