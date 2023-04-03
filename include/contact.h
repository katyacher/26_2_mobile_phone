#include <iostream>
#include <string>
#include "phoneNumber.h"

/*!
    \brief класс для хранения данныx об абонентах.
  
*/

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