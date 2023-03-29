#include <iostream>
#include <phone.h>


int main(){
    std::cout << "26.2 Mobile phone" << std::endl;

    Phone phone;

    std::string command;
    while(true){
        std::cout << "Enter a command (add/call/sms/exit): " << std::endl;
        std::cin >> command;

        if(command =="add"){
            phone.add();
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