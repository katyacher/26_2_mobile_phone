#include "phone.h"

Phone::Phone(){};

Phone::~Phone(){
    for(auto it:phoneBook){
        delete it.second;
    }
};

void Phone::add(){
    std::cout << "Enter the name of new abonent: ";
    std::string name;
    std::cin  >> name;

    auto it = phoneBook.find(name);
    if (it != phoneBook.end()){
        std::cout << "Such a contact already exists ";
        std::cout << it->second->getName() << " " << it->second->getNumber() << std::endl;
        std::cout << "Try again" << std::endl;
    } else {
        std::cout << "Enter phone number +7<10>: ";
        std::string number;
        std::cin >> number;

        Contact* contact = new Contact();
        if(contact->setContact(name, number)){
            auto it = r_phoneBook.find(number);
            if(it != r_phoneBook.end()) {
                std::cout << "Such contact already exists ";
                std::cout << it->second->getName() << " " << it->second->getNumber() << std::endl;
            } else {
                phoneBook.emplace(name, contact);
                r_phoneBook.emplace(number, contact);
                std::cout << "New abonent successfully added" << std::endl;
                std::cout << std::endl;
                printPhoneBook();  
            }
        } else {
            delete contact;
        }
    }
}
 

void Phone::call(const std::string &abonent){
    if(abonent.front() == '+'){
        auto it = r_phoneBook.find(abonent);
        if (it != r_phoneBook.end()){
            std::cout << "Call to " << it->second->getName() << " " << it->second->getNumber() <<  std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            std::cout << "Call to " << it->second->getName() << " " << it->second->getNumber() <<  std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    }
}    


void Phone::sms(const std::string &abonent, const std::string &msg){
    if(abonent.front() == '+'){
        auto it = r_phoneBook.find(abonent);
        if (it != r_phoneBook.end()){
            std::cout << "Sms to " << it->second->getName() << " " << it->second->getNumber() <<  std::endl;
            std::cout << "Message" << msg << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            std::cout <<  "Sms to " << it->second->getName() << " " << it->second->getNumber() <<  std::endl;
            std::cout << "Message: " << msg << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    }
}

void Phone::printPhoneBook(){
    std::cout << "-----PhoneBook------" << std::endl;
    for(auto it: phoneBook){
        it.second->getInfo();
    }
}