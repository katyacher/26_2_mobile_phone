#include "phone.h"
#include <algorithm>

bool Phone::is_phone_number(std::string phone_number_str){
    auto is_symbol_for_erase = [](unsigned char c){return (c == ' ' || c == '-');};
    phone_number_str.erase(std::remove_if(phone_number_str.begin(), phone_number_str.end(), is_symbol_for_erase), phone_number_str.end());

    if(phone_number_str.length() != 12 || phone_number_str[0] != '+'){
        return false;
    }

    for(int i = 1; i < phone_number_str.length(); i++){
        if(phone_number_str[i] < '0' || phone_number_str[i] > '9') {
            return false;
        }
    }
    return true;
}

//Конструктор?

void Phone::add(std::string name, std::string number){
    if(is_phone_number(number)){
       
    } else if(is_phone_number(name)){
        
    } else {
        std::cout << "Invalid format. Try again" << std::endl;
    }
}

void Phone::call(std::string abonent){    
    if(is_phone_number(abonent)){
       
       

    } else {
         //ищем в адресной книге абонента с таким именем
         //если не найден - значит абонента с таким именем нет

    }
    std::cout << "Call to " <<  std::endl;
}

void Phone::sms(std::string abonent, std::string msg){
    std::cout << "Sms to " << abonent << " " << std::endl;
    std::cout << msg << std::endl;
}
