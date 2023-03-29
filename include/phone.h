#include <iostream>
#include <map>
#include <string>
#include "contact.h"

class Phone{
    std::map<std::string, Contact*> phoneBook; //имф - номер телефона
    std::map<Contact*, std::string> r_phoneBook; // номер телефона - имя
public:
    Phone();
    ~Phone();
    void printPhoneBook();
    void add();
    void call(const std::string &abonent);
    void sms(const std::string &name, const std::string &msg);
};