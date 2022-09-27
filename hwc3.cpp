#include <iostream>

int main()
{
char ch[] = "CheeseBurger";
char min = 'z';
for (int i=0; i<11; i++)   
    if (ch[i] < min)
        min = ch[i];
     std::cout << min << std::endl;
     
char max = 'A';
for (int j=0; j<11; j++)   
    if (ch[j] > max)
        max = ch[j];
     std::cout << max << std::endl;

char vowels[] = {'A','a','E','e','U','u','O','o','I','i'};
int count = 0;
for (int i=0; i<11; i++)
    for (int m=0; m<10 ; m++)
        if (ch[i] == vowels[m]) 
        count++;
    std::cout << count << std::endl; 

return 0;
}
