#include <string>
#include "phoneNumber.h"

class Abonent{
    std::string name = "";
    PhoneNumber phoneNum;

public:
    Abonent(std::string inName, PhoneNumber inPhoneNum): name(inName), phoneNum(inPhoneNum){};
    void setName(std::string inName);
    std::string getName();
    PhoneNumber getPhoneNumber();
};