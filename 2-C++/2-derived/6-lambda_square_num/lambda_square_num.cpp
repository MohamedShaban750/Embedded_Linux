//Write a lambda function to calculate the square of a given number.

#include <iostream>

int main(void){
    auto square_fn = [](int num){
        return num * num;
    };

    int number;
    std::cout<<"Enter number to get square : ";
    std::cin>> number;
    
    std::cout<<"The square of " << number << " is " << square_fn(number);
   
    

    return 0;
}
