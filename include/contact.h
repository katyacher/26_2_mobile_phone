#include <iostream>
#include <string>

class Contact{
    std::string number;
public:
    Contact();
    Contact(std::string n):number(n){};
    void setContact(std::string n);
    std::string getContact();
};