#include <iostream>
#include <phone.h>


int main(){
    std::cout << "26.2 Mobile phone" << std::endl;

    Phone phone = Phone();

    std::string command;
    while (true){
        std::cout << "Enter a command (add/call/sms/exit): " << std::endl;
        
        if(command =="add"){
            std::cout << "Enter the name of new abonent: ";
            std::string name;
            std::cin  >> name;
            std::cout << "Enter phone number +7<10>: ";
            std::string number;
            std::cin >> number;
            phone.add(name, number);
        }
        if(command == "call"){
            std::cout << "Who will we call?" << std::endl;
            std::string contact;
            std::cin >> contact;
            phone.call(contact);
        }
            
        if(command == "sms") {
            std::cout << "Who will you send SMS to?" << std::endl;
            std::string contact;
            std::cin >> contact;
            std::cout << "Enter your message: " << std::endl;
            std::string msg;
            std::cin >> msg;

            phone.sms(contact, msg);
        }

        if(command == "exit")
            break;
    }

    return 0;
}