#include <iostream>

int main(){
    const int size = 6;
    int array1[size] = {12, 10, 1, 9, 9, 3};
    int array2[size] = {12, 10, 1, 9, 9, 3};
    bool b;
    for (int i = 0, j =0; i < size, j < size; i++, j++){
        if ( i == j && array1[i] == array2[j] ){
            b = true;
        std::cout << "Arays are same " << std::endl;
        }
        else 
        std::cout << "Arays are not the same " << std::endl;

    }
   
}