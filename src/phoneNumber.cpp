#include <iostream>
#include <algorithm>
#include <phoneNumber.h>

bool PhoneNumber::is_phoneNumber(std::string &phoneNumber){
    if(phoneNumber.empty()) return false;

    auto is_symbol_for_erase = [](unsigned char c){return (c == ' ' || c == '-' || c == '(' || c == ')');};
    phoneNumber.erase(std::remove_if(phoneNumber.begin(), phoneNumber.end(), is_symbol_for_erase), phoneNumber.end());

    if(phoneNumber.length() != 12 || phoneNumber[0] != '+' || phoneNumber[1] != '7'){
        return false;
    }

    for(int i = 1; i < phoneNumber.length(); i++){
        if(phoneNumber[i] < '0' || phoneNumber[i] > '9') {
            return false;
        }
    }
    return true;
}

PhoneNumber::PhoneNumber(){
    _number = "";
}

bool PhoneNumber::setPhoneNumber(std::string &number){
   if(is_phoneNumber(number)){
        _number = number;
        return true;
    } else {
        std::cout << "Invalid phone number format. Try again." << std::endl;
        return false;
    }
}

std::string PhoneNumber::getPhoneNumber(){
    return _number;
}

bool PhoneNumber::equal(PhoneNumber* num1, PhoneNumber* num2){
    if(num1->getPhoneNumber() == num2->getPhoneNumber()) return true;
    return false;
}
