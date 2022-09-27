#include <iostream>

int main(){
    const int size1 = 3;
    const int size2 = 4;
    int arr1[size1] = {1, 2, 3};
    int arr2[size2] = {4, 5, 6, 7};
    int arr[size1 + size2] = {};
    for(int i = 0; i < size1; i++){
        arr[i] = arr1[i];
    }
    for(int i = 0, k = size1; i < size2, k < size1+size2; i++, k++){
        arr[k] = arr2[i];
    }
    for(int i = 0; i < size1 + size2; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}