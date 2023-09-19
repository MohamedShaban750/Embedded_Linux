// summation the digits of integer entered by user
#include <iostream>


int main(void){
    int num=0, tmp=0, sum=0;
    std::cout << "Enter an integer number: ";
    std::cin >> num;

    tmp = num;
    while(tmp){
        sum += tmp%10;
        tmp = tmp/10;
    }
    std::cout<< "sum of digits of " << num << " is==> " << sum << std::endl;
    
    return 0;
}

// #include <iostream>

// int main() {
//     int num=0, sum=0;
//     std::cout << "Enter an integer number: ";
//     std::cin >> num;

//     std::string num_str = std::to_string(num);

//     for(char digit_char : num_str){
//         int digit = digit_char - '0';
//         sum += digit;
//     }

//     std::cout<< "sum of digits of " << num << " is==> " << sum << std::endl;
    
// }