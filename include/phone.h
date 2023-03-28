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
    void add(std::string name, std::string number);
    void call(std::string abonent);
    void sms(std::string abonent, std::string msg);
};