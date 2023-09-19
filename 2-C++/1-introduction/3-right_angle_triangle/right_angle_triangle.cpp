// RIGHT angle triangle //
//raw triangle by height
#include <iostream>

int main(void){
    int hight;
    std::cout << "Enter the hight of triangle ";
    std::cin >> hight;
    for (int i = 0; i < hight; i++){
        for (int j = 0; j <i + 1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}



// // chech triangle right angle or not by his sides

// #include <iostream>
// #include <cmath>

// int main() {
//     int a, b, c;

//     std::cout << "Enter three sides of a triangle sperated by space: " << std::endl;
//     std::cin >> a >> b >> c;

//     int max_power = std::max(std::max(pow(a, 2), pow(b, 2)), std::max(pow(a, 2), pow(c, 2)));
//   // get the largest side as hypotenuse
  
//   // check if it is a right angled triangle


//   if (max_power == pow(a, 2)+pow(b, 2) or max_power == pow(a, 2)+pow(c, 2) or max_power == pow(b, 2)+pow(c, 2))
//     std::cout << "This is a right angled triangle." << std::endl;
//   else 
//     std::cout << "This is not a right angled triangle." << std::endl;

//   return 0;
// }



