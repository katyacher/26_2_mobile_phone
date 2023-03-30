#include "phone.h"

Phone::Phone(){};

Phone::~Phone(){
    for(auto it:phoneBook){
        delete it.second;
    }
};

void Phone::add(){
    clear();
    printPhoneBook();
    
    std::cout << "Enter the name of new abonent: ";
    std::string name;
    std::getchar();
    std::getline(std::cin, name);

    auto it = phoneBook.find(name);
    if (it != phoneBook.end()){
        std::cout << "Such a contact already exists ";
        std::cout << it->second->getName() << " " << it->second->getNumber() << std::endl;
        std::cout << "Try again" << std::endl;
    } else {
        std::cout << "Enter phone number +7<10>: ";
        std::string number;
        std::getline(std::cin, number);

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
            }
        } else {
            delete contact;
        }
    }
}
 

bool Phone::call(){
    clear();
    if(phoneBook.empty()) {
        std::cout << "PhoneBook is empty. Please, add a contacts" << std::endl;
        return false;
    } 

    printPhoneBook();
    std::cout << "Who will we call?" << std::endl;
    std::string abonent;
    std::getchar();
    std::getline(std::cin, abonent);

    if(abonent.front() == '+'){
        auto it = r_phoneBook.find(abonent);
        if (it != r_phoneBook.end()){
            std::cout << "Call to " << it->second->getName() << " " << it->second->getNumber() << "..."<<  std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            std::cout << "Call to " << it->second->getName() << " " << it->second->getNumber() << "..." <<  std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    }
    return true;
}    


bool Phone::sms(){
    clear();
    if(phoneBook.empty()) {
        std::cout << "PhoneBook is empty. Please, add a contacts" << std::endl;
        return false;

    } 
    
    printPhoneBook();
    std::cout << "Who will you send SMS to?" << std::endl;
    std::string abonent;
    std::getchar();
    std::getline(std::cin, abonent);
    std::cout << "Enter your message: " << std::endl;
    std::string msg;
    std::getchar();
    std::getline(std::cin, msg);
    
    if(abonent.front() == '+'){
        auto it = r_phoneBook.find(abonent);
        if (it != r_phoneBook.end()){
            std::cout << "Sms to " << it->second->getName() << " " << it->second->getNumber() <<  ": ";
            std::cout << "\" " << msg << "\"" << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            clear();
            std::cout <<  "Sms to " << it->second->getName() << " " << it->second->getNumber() <<  ": ";
            std::cout << "\" " << msg << "\"" << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    }
    return true;
}

void Phone::printPhoneBook(){
    std::cout << "-----PhoneBook------" << std::endl;
    for(auto it: phoneBook){
        it.second->getInfo();
    }
    std::cout << std::endl;
}

void Phone::clear(){
    system("clear");
    //system("cls");
}