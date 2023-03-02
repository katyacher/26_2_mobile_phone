#include <iostream>
#include <vector>
#include <string>
#include "phoneNumber.h"
#include "abonent.h"

class Phone{
    std::vector<Abonent*> phonebook;
    std::vector<PhoneNumber*> numbers;
    bool is_phone_number(std::string phone_number_str);
    
public:
    void add(std::string name, std::string number);
    void call(std::string abonent);
    void sms(std::string abonent, std::string msg);
};