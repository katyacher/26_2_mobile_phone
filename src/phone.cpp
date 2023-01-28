#include <iostream>
#include <map>
#include <vector>
#include "phoneNumber.h"

class Phone{
    std::multimap<std::string, std::vector<PhoneNumber*>> phonebook;

    Phone(std::string name, PhoneNumber* num){
        phonebook.emplace(std::make_pair(name, num)); 
    }

    void add(){
        std::cout << "Enter a phone number number: +7";
        int num;
        std::cin >> num;
        std::cout << "Enter a name: ";
        std::string name;
        std::cin >> name;

        phonebook.emplace(std::make_pair(name, num));

    }

    void call(std::string name){
        
        std::cout << "Call to " << name << phonebook[name].getPhoneNumber() << std::endl;
    }

    void sms(){
        std::cout << "Sms"
    }
}