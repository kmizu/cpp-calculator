#include <iostream>
#include <Poco/RegularExpression.h>
 
int main() {
    Poco::RegularExpression regexp("^[0-9]+");
 
    std::string buf;
    regexp.extract("12345", buf);
    std::cout << buf << std::endl;
 
    return 0;
}
