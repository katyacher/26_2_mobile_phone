#include <iostream>
#include <map>
#include <string>
#include "contact.h"

class Phone{
    std::map<std::string, Contact> abonents;
    bool is_phone_number(std::string phone_number_str);
    
public:
// Конструктор?
    void add(std::string name, std::string number);
    void call(std::string abonent);
    void sms(std::string abonent, std::string msg);
};