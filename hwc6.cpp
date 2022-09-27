#include <iostream> 

int main(){
    const int size = 5;
    int array[size] = {0, 5, 15, 36, 192};
    int maximum = array[0];
    int maximum2 = array[0];
    int maximum3 = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] > maximum)
            maximum = array[i];
    }
    for (int i = 0; i < size; i++){
        if (array[i] == maximum)
            continue;
        if (array[i] > maximum2)
            maximum2 = array[i];
    }
    for (int i = 0; i < size; i++){
        if (array[i] == maximum || array[i] == maximum2)
            continue;
        if (array[i] > maximum3)
            maximum3 = array[i];
    }
    
    std::cout << "Third Maximum is " << maximum3 << std::endl;

    return 0;
}