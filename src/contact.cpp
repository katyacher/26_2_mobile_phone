#include "contact.h"

Contact::Contact(){
    _name = "";
    _number = new PhoneNumber();
}

bool Contact::setContact(const std::string &name, std::string &number){
    if(_number->setPhoneNumber(number)){
        _name = name;
        return true;
    } 
    return false;
}

std::string Contact::getName(){
    return _name;
}

std::string Contact::getNumber(){
    return _number->getPhoneNumber();
}

void Contact::getInfo(){
    std::cout << "Name: " << _name << " " << "tel: " << this->getNumber() << std::endl;
}

Contact::~Contact(){
    delete _number;
}


