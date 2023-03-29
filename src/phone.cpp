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
        std::cout << "Such a contact already exists: " << name << " " << phoneBook[name]->getContact() << std::endl;
        std::cout << "Try again" << std::endl;
    } else {
        std::cout << "Enter phone number +7<10>: ";
        std::string number;
        std::cin >> number;

        Contact* contact = new Contact();
        if(contact->setContact(number)){
            auto it = r_phoneBook.find(contact);
            if(it != r_phoneBook.end()) {
                std::cout << "Such contact already exists: " << r_phoneBook[contact] << " " << contact->getContact() << std::endl;
            } else {
                phoneBook.emplace(name, contact);
                r_phoneBook.emplace(contact, name);
                std::cout << "new abonent added" << std::endl;
                printPhoneBook();  
            }
        } else {
            delete contact;
        }
    }
}
 

void Phone::call(const std::string &abonent){
    Contact* contact = new Contact();
    if(contact->setContact(abonent)){
        auto it = r_phoneBook.find(contact);
        if (it != r_phoneBook.end()){
            std::cout << "Call to " << it->second << " " << it->first->getContact() <<  std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    //}
    //if(abonent.front() == '+'){
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            std::cout << "Call to " << abonent << " " << phoneBook[abonent]->getContact() <<  std::endl;
        }
        else
        {
            std::cout << "Contact not found" << std::endl;
        }
    }
    delete contact;
}    


void Phone::sms(const std::string &abonent, const std::string &msg){
    /*
    if(abonent.front() == '+'){
        auto it = r_phoneBook.find(abonent);
        if (it != r_phoneBook.end()){
            std::cout << "Sms to " << it->second << " " << it->first->getNumber() <<  std::endl;
            std::cout << "Message" << msg << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        auto it = phoneBook.find(abonent);
        if (it != phoneBook.end()){
            std::cout << "Sms to " << it->first << " " << it->second->getContact() <<  std::endl;
            std::cout << "Message" << msg << std::endl;
        }
        else
        {
            std::cout << "Contact not found" << std::endl;
        }
    }*/
}

void Phone::printPhoneBook(){
    std::cout << "-----PhoneBook------" << std::endl;
    for(auto it: phoneBook){
        std::cout << it.first << ": " << it.second->getContact() << std::endl;
    }
}