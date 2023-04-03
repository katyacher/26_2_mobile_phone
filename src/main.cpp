#include <iostream>
#include "phone.h"


int main(){
    Phone phone;
    phone.clear();

    std::cout << "26.2 Mobile phone" << std::endl;
    
    std::string command;
    while(true){
        std::cout << std::endl;
        std::cout << "Enter a command (add/call/sms/exit): " << std::endl;
        std::cin >> command;

        if(command =="add"){
            phone.add();
        } else if(command == "call"){
            phone.call();
        } else if(command == "sms") {
            phone.sms();
        } else if(command == "exit"){
            break;
        } else {
            phone.clear();
            std::cout << "Uncknown command. Try again." << std::endl;
        }
    }
    return 0;
}