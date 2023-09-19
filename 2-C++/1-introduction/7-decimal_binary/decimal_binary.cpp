// change from decimal to binary and vice versa 
#include <iostream>
#include <bitset>
#include <string>

int main(void){
   int dec_num;
   std::cout << "Enter a decimal number to get binary: ";
   std::cin >> dec_num;
   std::bitset<8> dec_to_bin(dec_num);
   std::cout<<"The binary representation of "<< dec_num << " is "<< dec_to_bin<<std::endl;

   std::string bin_num;
   std::cout << "Enter a binary number to get decimal number: ";
   std::cin >> bin_num;
   std::bitset<8> bin_to_dec(bin_num);
   std::cout<<"The decimal representation of "<< bin_num << " is "<< bin_to_dec.to_ulong() <<std::endl;

    return 0;
}