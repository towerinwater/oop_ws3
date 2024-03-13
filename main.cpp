#include <iostream>
#include "workshop.h"

int main(){
    double arr[10] = {1,2,3,4,5,6,7,8,9,10};
    double max = arrayMax(arr, 10);
    std::cout << max <<std::endl;

    double num = 99.99;
    changeValue(&num);

    printArray(arr, 10);

    double* pArr = dynamicArray(10, 99.99);
    for(int i = 0; i < 10; i++){
        std::cout << pArr[i];
    }
    std::cout << std::endl;

    return 0;
}