#include "phone.h"

Phone::Phone(){};

Phone::~Phone(){
    for(auto it:phoneBook){
        delete it.second;
    }
    for(auto it:r_phoneBook){
        delete it.first;
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
            auto r_it = r_phoneBook.emplace(contact, name);
            if(!r_it.second) {
                std::cout << "Such contact already exists: " << r_phoneBook[contact] << " " << contact->getContact() << std::endl;
            } else {
                phoneBook.emplace(name, contact);
                r_phoneBook.emplace(contact, name);
                std::cout << "new abonent added" << std::endl;
                printPhoneBook();  
            }
        } else {
           // delete contact;
        }
    }
}
    
void Phone::printPhoneBook(){
    std::cout << "-----PhoneBook------" << std::endl;
    for(auto it: phoneBook){
        std::cout << it.first << ": " << it.second->getContact() << std::endl;
    }
}

void Phone::call(const std::string &abonent){    
    std::cout << "Call to " <<  std::endl;
}


void Phone::sms(const std::string &name, const std::string &msg){
    std::cout << "Sms to " << name << " " << std::endl;
    std::cout << msg << std::endl;
}

/*
void Phone::call(Contact& number){
}*/
/*
void Phone::sms(Contact& number, std::string msg){
    std::cout << "Sms to " << number.getContact() << " " << std::endl;
    std::cout << msg << std::endl;
}
*/