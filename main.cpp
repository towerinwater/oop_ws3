#include <iostream>
#include "workshop.h"

int main(){
    double arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int max = arrayMax(arr, 10);

    double num = 99.99;
    changeValue(&num);

    printArray(arr, 10);

    double* pArr = dynamicArray(10, 99.99);

    
    return 0;
}