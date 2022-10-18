////ուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։
#include <iostream>
int main() {
	int num1, num2, num3, num4, min, sum;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;
	min = num1;
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}
	if (num4 < min) {
		min = num4;
	}
	sum = num1 + num2 + num3 + num4;
	if (sum == 0) {
		std::cout << min << std::endl;
	}
}


//Մուտքագրել օգտագործողի անունն ու տարիքը։ Տպել էկրանին ողջույնի հաղորդագրություն

struct users {
        std::string name;
        int age;
    };

int main() {

    users user1;
    user1.name = "Jane";
    user1.age = 31;
    std::cout << "Hello, " << user1.name << "!";

}


//Մուտքագրել օգտագործողի անունը, փոխակերպել անունը մեծատառերի, եթե անունը մուտքագրված է փոքրատառերով։

#include <iostream>
#include <cstring>

void capsLock(std::string& str)
{
	int length = str.length();
	for (int i = 0; i < length; i++) {
		int c = str[i];
		if (islower(c))
			str[i] = toupper(c);
		else if (isupper(c))
			str[i] = c;	
	}
}

int main()
{
	std::string str;
	std::cout << "Enter your name: " << std::endl;
	std::cin >> str;
	capsLock(str);
	std::cout << str;
	return 0;
}

//Մուտքագրել տող, տպել տողը էկրանին հակառակ կարգով։ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>

void reverseStr(std::string& str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
}
 
int main()
{
    std::string str;
    std::cout << "Enter a word :" << std::endl;
    std::cin >> str;
    reverseStr(str);
    std::cout << str;
    return 0;
}

//Տպել 0-100 թվերը ըստ աճման (օգտագործելով ցիկլ)։

#include <iostream>

int main()
{
    for (int i = 0; i <= 100; ++i) {
        std::cout << i << " ";
    }
    
}


// Տպել 100-0 թվերը ըստ նվազման։
#include <iostream>

int main()
{
    for (int i = 100; i >= 0; --i) {
        std::cout << i << " ";
    }
    
}


//Տպել 0-100 միջակայքի միայն զույգ թվերը։

#include <iostream>

int main() {
    for (int i = 0; i <= 100; i+=2) {
        std::cout << i << " ";
    }
    
}

//Տպել 0-100 միջակայքի միայն կենտ թվերը։

#include <iostream>

int main() {
	for (int i = 1; i < 100; i += 2) {
		std::cout << i << " ";
	}
}

//Հայտարարել բուլյան փոփոխականներ տարբեր արժեքներով։ Տպել էկրանին AND եւ OR գործողությունների արդյունքները։

#include <iostream>

int main() {
    int x = 10;
    int y = 2;
    if (x != y and x % 2 == 0 and y % 2 == 0) {
        std::cout << "Not equal and even ints" << std::endl;
    }
    if (x * y % 5 == 0 or x / y % 5 == 0) {
        std::cout << "Product or division are divided by 5 without reminder";
    }
}

//Հայտարարել եւ մուտքագրել երկու փոփոխականներ։ Փոխել փոփոխականների արժեքները տեղերով եւ տպել էկրանին։


#include <iostream>
int main() { 
    int a, b, temp;
    std::cout << "Enter 2 numbers: ";
    std::cin >> a >> b;
    temp = a;
    a =  b;
    b = temp;
    std::cout << "Here they are swapped!" << a << " "<< b;
    return 0;
}


//Մուտքագրել թիվ, ստուգել արդյոք թիվը զույգ է, թե ոչ։ Տպել էկրանին ստուգման արդյունքը
#include <iostream>
int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    if (num % 2 == 0){
        std::cout << "The number you entered is even";
    }
    else {
        std::cout << "The number you entered is odd";
    }
}



//Մուտքագրել թիվ։ Եթե թիվը զույգ է, տպել 0-100 թվերն ըստ աճման, հակառակ դեպքում՝ ըստ նվազման։
#include <iostream>
int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    if (num % 2 == 0){
        for (int i = 0; i <= 100; ++i) {
        std::cout << i << " ";
        }
    }
    else {
        for (int i = 100; i >= 0; --i) {
        std::cout << i << " ";
        }
        
    }
}






//Մուտքագրել num փոփոխականը որպես int եւ օգտագործողի անունը։ Տպել անունը էկրանին num անգամ։


#include <iostream>
int main() { 
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;
    for (int i = 0; i < num; i++){
        std::cout << name;
        }
    return 0;
}




//Տպել 0-100 թվերի քառակուսիների արժեքները էկրանին։


#include <iostream>
int main() {
    for (int i = 0; i <= 100; i++){
        std::cout << i*i << " ";
        }
    return 0;
}

//Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։

#include <iostream>

int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    std::string st = std::to_string(num);
    for (int i = 0; i < st.length(); ++i){
        std::cout << st[i] << " ";
    }
}


//Մուտքագրել թիվ, տպել թվի թվանշանները հակառակ հերթականությամբ։

#include <iostream>

int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    while (num > 0) {
        std::cout << num % 10 << " ";
        num /= 10;
    }
}



//Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետեւ 5+4+7+9=25)։

#include <iostream>

int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout << sum ;
}


// Մուտքագրել թիվ, տպել էկրանին թվի թվանշանների արտադրյալը։

#include <iostream>

int main () {
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    int prod = 1;
    while (num > 0) {
        prod *= num % 10;
        num /= 10;
    }
    std::cout << prod ;
}


// Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր եւ գործողության սիմվոլը։ Օրինակ՝ 4, 5 եւ ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի եւ տպել արդյունքը էկրանին։


#include <iostream>

int main () {
    int num1, num2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    char symbol;
    std::cout << "Enter an arithmetic operation symbol: " << std::endl;
    std::cin >> symbol;
    if (symbol == '+') {
        std::cout << num1 + num2;
    }
    else if (symbol == '-') {
        std::cout << num1 - num2;
    }
    else if (symbol == '*') {
        std::cout << num1 * num2;
    }
    else if (symbol == '/') {
        std::cout << num1 / num2;
    }

}



//Մուտքագրել օգտագործողի անունը եւ տպել էկրանին հակառակ հերթականությամբ։


#include <iostream>

int main()
{
    std::string str;
    std::cout << "Enter a name :" << std::endl;
    std::cin >> str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++){
        std::swap(str[i], str[n-i-1]);
    }
    std::cout << str;
    return 0;
}

//Մուտքագրել տող։ Տողի բոլոր սիմվոլները դարձնել մեծատառ։ Արդյունքը տպել էկրանին։!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


#include <iostream>
 void CAPS(std::string& str) {
     int length = str.length();
     for (int i = 0; i < length; i++) {
         if (str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 32;
         }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i];
        }
        else if (str[i] == ' ') {
            str[i] = str[i];
        }
     }
 }
 
 int main() {
    std::cout << "Enter a sentence: " << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << "Here it is all in CAPS: " << std::endl;
    CAPS(str);
    std::cout << str;
    return 0;
    
 }


//Մուտքագրել տող։ Տողի ամեն երկրորդ սիմվոլը դարձնել մեծատառ։ Արդյունքը տպել էկրանին։
#include <iostream>

void Ondnoklassniki_onvert(std::string& str)
{
    int ln = str.length();
 
    for (int i = 1; i < ln; i+=2) {
        str[i] -= 32;
    }
}
 
int main()
{
    std::string str;
    std::cout << "Enter a word; " << std::endl;
    std::cin >> str;
    Ondnoklassniki_onvert(str);
 
    std::cout << str;
    return 0;
}




//Մուտքագրել թիվ, որը ներկայացնում է հեռավորությունը՝ չափված մետրերով։ Վերածել եւ տպել արժեքը կիլոմետրերով։ Օրինակ՝ մուտքագրված 1400 թվի դեպքում տպել “1.4 km”։

#include <iostream>

int main() {
    float meter, km;
    std::cout << "Enter the distance in meters: " << std::endl;
    std::cin >> meter;
    km = meter / 1000;
    std::cout << "The distance in km is: " << km << std::endl;
}

//Մուտքագրել թիվ, տպել թվի թվանշանների առավելագույն եւ նվազագույն արժեքները։

#include<iostream>

void Digits(int n)
{
    int largest = 0;
    int smallest = 9;
 
    while (n) {
        int r = n % 10;
        largest = std::max(r, largest);
 
        smallest = std::min(r, smallest);
 
        n = n / 10;
    }
    std::cout << largest << " " << smallest;
}
 
int main()
{
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    Digits(n);
 
    return 0;
}











