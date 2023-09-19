//letter is vowel or not

#include <iostream>
#include <string>

int main (){
    char letter = '0';
    std::string vowel = "aeiou";
    std::cout << "Enter the letter to check vowel or not: " << std::endl;
    std::cin >> letter;
    letter = tolower(letter);
    if (vowel.find(letter) != -1){
        std::cout << "it's a vowel" << std::endl;
    }else
    {
        std::cout << "it's not a vowel" << std::endl;
    }
    return 0;
}