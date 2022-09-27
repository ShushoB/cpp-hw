#include <iostream>

int main(){
    const int size = 6;
    int array[size] = {1, 2, 3, 4, 5, 6};
    std::cout << "Even elements are: ";
    for (int i = 0; i < size; i++){
        if (array[i] % 2 == 0)
            std::cout << array[i] << "; ";
    }

    return 0;
}
