#include <iostream>

int main(){
    const int size = 7;
    int array[size] = {61, 11, 0, -9, 56, 1, 28};
    int minimum = array[0];
    int minimum2 = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] < minimum)
            minimum = array[i];
    }
    for (int i = 0; i < size; i++){
        if (array[i] == minimum)
            continue;
        if (array[i] < minimum2)
            minimum2 = array[i];
    }
    std::cout << "Second minimum is " << minimum2 << std::endl;
    return 0;
}