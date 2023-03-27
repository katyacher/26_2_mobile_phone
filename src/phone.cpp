#include "phone.h"
#include <algorithm>


//Конструктор, деструктор
Phone::Phone(){};
Phone::~Phone(){};

//перенести проверку в класс Contact
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

void Phone::add(std::string name, std::string number){
    auto it = phoneBook.find(name);
    if (it != phoneBook.end()){
        std::cout << "Such a contact already exists" << std::endl;
    }else{
        Contact* contact  = new Contact();
        contact->setContact(number); 
        //проверить наличие номера телефона в книге
        //если есть, то вывести на экран сообщение
        //если нет - добавить пару в phoneBook, и созданную обратную по номеру телнфона
    }
    
}

void Phone::call(std::string abonent){    
    
         //ищем в адресной книге абонента с таким именем
         //если не найден - значит абонента с таким именем нет

    std::cout << "Call to " <<  std::endl;
}
/*
void Phone::call(Contact& number){
    //ищем в адресной книге абонента с таким номером
    //если не найден - значит абонента с таким именем нет

}*/

void Phone::sms(std::string name, std::string msg){
    std::cout << "Sms to " << name << " " << std::endl;
    std::cout << msg << std::endl;
}

void Phone::sms(Contact& number, std::string msg){
    std::cout << "Sms to " << number.getContact() << " " << std::endl;
    std::cout << msg << std::endl;
}
