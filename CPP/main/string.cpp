#include <iostream>
#include <string>

int main() {
    //CONCATENATION
    //char nome[50] = {"Alex Se Yoon Koo"};
    //std::cout << nome;
    std::string firstName = "Alex";
    std::string lastName = " Se Yoon Koo";
    //std::string greeting = firstName + " " + lastName;
    std::string greeting = firstName.append(lastName);
    std::cout << greeting;
    //STRING LENGTH
    std::string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "the length is " << text.length(); //or text.size()
    //ACCESS A STRING
    std::string myString = "Hello";
    myString[1] = 'J';
    std::cout << myString[1];
    //USER INPUT STRING
    std::string fullName;
    std::cout << "Please tell me your full name: ";
    std::getline (std::cin, fullName);
    std::cout << "your name is " << fullName;
}