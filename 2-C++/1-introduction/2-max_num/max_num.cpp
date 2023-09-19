// maximum number between three values //

#include <iostream>

int main(void){
    int num1=0, num2=0, num3=0;
    std::cout<< "Enter three numbers separeted by space : ";
    std::cin >> num1 >> num2 >> num3 ;
    int max_num = std::max(std::max(num1, num2), std::max(num1, num3));
    std::cout<< "Maximum number is " << max_num <<std::endl;
    return 0;
}