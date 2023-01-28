#include <iostream>
#include <string>
#include <phoneNumber.h>


PhoneNumber::PhoneNumber(int n): num(n){
    code = "+7";
}

void PhoneNumber::setPhoneNumber( int num_){
    num = num_;
}

std::string PhoneNumber::getPhoneNumber(){
    return code + std::to_string(num);
}
