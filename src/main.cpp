#include <iostream>
#include <phone.h>


int main(){
    std::cout << "26.2 Mobile phone" << std::endl;

    Phone* phone = new Phone();

    std::string command;
    while (command != "exit"){
        std::cout << "Enter a command (add/call/sms/exit): " << std::endl;
        
        if(command =="add"){
            std::cout << "Enter the name of new abonent: ";
            std::string name;
            std::cin  >> name;
            std::cout << "Enter phone number +7<10>: ";
            std::string number;
            std::cin >> number;
            phone->add(name, number);
        }
        if(command == "call"){
            std::cout << "Who will we call?" << std::endl;
            std::string abonent;
            std::cin >> abonent;
            phone->call(abonent);
        }
            
        if(command == "sms") {
            std::cout << "Who will you send SMS to?" << std::endl;
            std::string abonent;
            std::cin >> abonent;
            std::cout << "Enter your message: " << std::endl;
            std::string msg;
            std::cin >> msg;

            phone->sms(abonent, msg);
        }

        if(command == "exit")
            break;
    }

    delete phone;

    return 0;
}