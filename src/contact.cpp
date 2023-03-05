#include <iostream>
#include <string>
#include <contact.h>

Contact::Contact(){
    number = "";
}

void Contact::setContact(std::string n){
    number = n;
}

std::string Contact::getContact(){
    return number;
}
