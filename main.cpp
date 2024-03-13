#include <iostream>
#include "workshop.h"

int main(){
    double num = 10.11;
    std::cout << num << std::endl;
    changeValue(&num);
    std::cout << num << std::endl;
    return 0;
}