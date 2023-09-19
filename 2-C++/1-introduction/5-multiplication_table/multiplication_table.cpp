// multiplication table of number
#include <iostream>
#include <iomanip>

int main (){
    int number = 0;
    std::cout << "Enter the number" << std::endl;
    std::cin >> number;
    for (int i =0; i<=12; i++){
        std::cout<<std::setw(2) << i <<" * " << number << " = " << (i*number) << std::endl;
    }
    
    return 0;
}

// //multiplication table
// #include <iomanip>
// #include <iostream>

// int main() {
//   for (int i = 1; i <= 10; i++) {
//     for (int j = 1; j <= 10; j++) {
//       std::cout << std::right << std::setw(5) << (i * j);
//     }
//     std::cout << std::endl;
//   }

//   return 0;
// }