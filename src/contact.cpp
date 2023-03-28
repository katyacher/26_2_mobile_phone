#include <iostream>
#include <string>
#include <algorithm>
#include <contact.h>

bool Contact::is_phoneNumber(std::string phoneNumber){
    if(phoneNumber.empty()) return false;

    auto is_symbol_for_erase = [](unsigned char c){return (c == ' ' || c == '-');};
    phoneNumber.erase(std::remove_if(phoneNumber.begin(), phoneNumber.end(), is_symbol_for_erase), phoneNumber.end());

    if(phoneNumber.length() != 12 || phoneNumber[0] != '+'){
        return false;
    }

    for(int i = 1; i < phoneNumber.length(); i++){
        if(phoneNumber[i] < '0' || phoneNumber[i] > '9') {
            return false;
        }
    }
    return true;
}

Contact::Contact(){
    _number = "";
}

bool Contact::setContact(std::string number){
   if(is_phoneNumber(number)){
        _number = number;
        return true;
    } else {
        std::cout << "This is not phone number in format +7<10>. Try again" << std::endl;
        return false;
    }
}

std::string Contact::getContact(){
    return _number;
}
/*
void Contact::call(){
    std::cout << "Call to " << this->getContact() << std::endl;
}
*/