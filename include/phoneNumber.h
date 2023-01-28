#include <iostream>
#include <string>

class PhoneNumber{
    std::string code;
    int num;
    
    PhoneNumber(int n);

    void setPhoneNumber(int num_);

    std::string getPhoneNumber();
};