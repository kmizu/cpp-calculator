#include <iostream>
#include <Poco/RegularExpression.h>
#include <tao/pegtl.hpp>

using namespace tao::pegtl;

int main() {
    Poco::RegularExpression regexp("^[0-9]+");
 
    std::string buf;
    regexp.extract("12345", buf);
    std::cout << buf << std::endl;
 
    return 0;
}
