#include <iostream>
#include <string>
#include <phoneNumber.h>

PhoneNumber::PhoneNumber(){
    number = "";
}

void PhoneNumber::setPhoneNumber(std::string inNum){
    number = inNum;
}

std::string PhoneNumber::getPhoneNumber(){
    return number;
}
