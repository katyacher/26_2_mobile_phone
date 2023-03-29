#include <iostream>
#include <map>
#include <string>
#include "contact.h"

class Phone{
    std::map<std::string, Contact*> phoneBook; //имя - контакт
    std::map<std::string, Contact*> r_phoneBook; // номер телефона - контакт
public:
    Phone();
    ~Phone();
    void printPhoneBook();
    void add();
    void call(const std::string &abonent);
    void sms(const std::string &abonent, const std::string &msg);
};