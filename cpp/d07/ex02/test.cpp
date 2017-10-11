

#include <iostream>

int main (void){
    std::string *str = new std::string();
    std::cout << "---" << std::endl;
    delete str;
    return 0;
}