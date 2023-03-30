#include <string>

/*! 
    \brief класс для хранения и валидации номера телефона
 
*/
class PhoneNumber{
    std::string _number;

    /*! 
      \brief Приватный метод для валидации номера телефона. 
      
        Преобразует входящую строку, удаляя знаки пробела, тире и скобок.
        Выполняет проверку номера телефона на соответстве формату +7<10>.
        
      @param Принимает номер телефона в виде неконстантной строки. 
      @return Возвращает true, если номер соответствует формату +7<10>
    */
    bool is_phoneNumber(std::string &phoneNumber);
public:
    PhoneNumber();
    bool setPhoneNumber(std::string &number);
    std::string getPhoneNumber();
    bool equal(PhoneNumber* num1, PhoneNumber* num2);
};