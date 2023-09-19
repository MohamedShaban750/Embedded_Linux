// # create a function to search to the number in the array which number is taken from user

#include <iostream>

bool search_number(int arr [], int size, int search_num);

int main(void){
    int n, s;

    std::cout<<"Enter number of elements : ";
    std::cin>> n;
    
    int arr[n];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
   
    for(int i = 0; i < n; i++)
        std::cin>>arr[i];

    std::cout<<"Enter number to search: ";
    std::cin>> s;
    bool result = search_number(arr, n, s);

    std::cout<<(result?"number found":"number not found");

    return 0;
}

bool search_number(int arr [], int size, int search_num){
    bool result;
    for(int i=0; i<size; i++){
        if(search_num == arr[i]){
            return true;
            break;
        }
    }
    return false;
}