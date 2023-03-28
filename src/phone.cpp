#include "phone.h"

Phone::Phone(){};
Phone::~Phone(){};


void Phone::add(std::string name, std::string number){
    Contact* contact = new Contact();
    if(contact->setContact(number)){
        auto it = phoneBook.find(name);
        auto r_it = r_phoneBook.find(contact);
        if (it != phoneBook.end() || r_it != r_phoneBook.end()){
            std::cout << "Such a contact already exists" << std::endl;
        } else {
            phoneBook.emplace(name, contact);
            r_phoneBook.emplace(contact, name);
            printPhoneBook();  
        }
    } else {
        delete contact;
    };
}
    
void Phone::printPhoneBook(){
    std::cout << "-----PhoneBook------" << std::endl;
    for(auto it: phoneBook){
        std::cout << it.first << ": " << it.second << std::endl;
    }
}

void Phone::call(std::string abonent){    
    std::cout << "Call to " <<  std::endl;
}


void Phone::sms(std::string name, std::string msg){
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