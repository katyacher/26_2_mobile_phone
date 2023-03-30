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
    void add();
    bool call();
    bool sms();
    void printPhoneBook();
    void clear();
};