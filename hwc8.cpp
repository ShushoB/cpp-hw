#include <iostream>

int main(){
    const int size = 6;
    int array[size] = {1, 2, 3, 4, 5, 6};
    int count = 0;
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0)
            count ++;
            std::cout << "The number of even elements is: " << count;

    return 0;
}
