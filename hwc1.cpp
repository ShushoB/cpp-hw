/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main(){
    int x = 5;
    char letter = 'a';
    float pi = 3.14;
    int* ptr1 = &x;
    char* ptr2 = &letter;
    float* ptr3 = &pi;
    std::cout << "Address of x->" << ptr1 << "; x = " << *ptr1 << std::endl;
    std::cout << "Address of letter->" << ptr2 << "; letter = " << *ptr2 << std::endl;
    std::cout << "Address of pi->" << ptr3 << "; pi = " << *ptr3 << std::endl;

    return 0;
}

