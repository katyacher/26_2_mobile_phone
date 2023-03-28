#include <iostream>
#include <string>

class Contact{
    std::string _number;
    bool is_phoneNumber(std::string phoneNumber);
public:
    Contact();
    bool setContact(std::string n);
    std::string getContact();
};