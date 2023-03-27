#include <iostream>
#include <map>
#include <string>
#include "contact.h"

class Phone{
    std::map<std::string, Contact> phoneBook; //имф - номер телефона
    //std::map<Contact, std::ctring> r_phoneBook; // номер телефона - имя
    
    
public:
    Phone();
    ~Phone();
    bool is_phone_number(std::string phone_number_str);
    void add(std::string name, std::string number);
    void call(std::string abonent);
    void Phone::call(Contact& number);
    void sms(std::string abonent, std::string msg);
    void Phone::sms(Contact& number, std::string msg);
};