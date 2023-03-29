#include <iostream>
#include <string>
#include <phoneNumber.h>

class Contact{
    std::string _name;
    PhoneNumber* _number;
public:
    Contact();
    bool setContact(const std::string &name, std::string &number);
    std::string getName();
    std::string getNumber();
    void getInfo();
    ~Contact();
};