#include<iostream>
#include "exampleClass.h"

using namespace std;

int main()
{
    ExampleClass exampleClass;
    cout<<"in the main code!"<<endl;
    exampleClass.ExampleClass_Function();
    cout<<"The number from the headerclass is : "<<exampleClass.ExampleClass_Function_number();
    return 0;
}