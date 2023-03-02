#include "abonent.h"

void Abonent::setName(std::string inName){
    name = inName;
}

std::string Abonent::getName(){
    return name;
}

PhoneNumber Abonent::getPhoneNumber(){
    return phoneNum;
}