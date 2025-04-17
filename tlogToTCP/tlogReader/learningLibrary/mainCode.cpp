#include <iostream>
#include "mathexp.h"


using namespace std;

int main()
{
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"The sum of a and b are : "<<sum(a,b);
    cin>>a;
    return 0; 
}