#include <string>

class PhoneNumber{
    std::string _number;
    bool is_phoneNumber(std::string &phoneNumber);
public:
    PhoneNumber();
    bool setPhoneNumber(std::string &number);
    std::string getPhoneNumber();
    bool equal(PhoneNumber* num1, PhoneNumber* num2);
};