#include <iostream>
#include <string>

class PhoneNumber{
    std::string number;
public:
    PhoneNumber();
    PhoneNumber(std::string inNum):number(inNum){};
    void setPhoneNumber(std::string inNum);
    std::string getPhoneNumber();
};