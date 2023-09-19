//find the even and odd numbers in the array

#include <iostream>

void find_even_odd(int arr[], int size, std::string arr1[]);

int main(void){
    int size;

    std::cout<<"Enter number of elements : ";
    std::cin>> size;
    
    int arr[size];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
   
    for(int i = 0; i < size; i++)
        std::cin>>arr[i];

   
    std::string arr1[size] ;
    find_even_odd(arr, size, arr1);

    for(int i = 0; i<size; i++)
        std::cout<<arr1[i]<<", ";

    return 0;
}

void find_even_odd(int arr[], int size, std::string arr1[]){
    for(int i=0; i<size; i++){
        if((arr[i] % 2) == 0 ){
            arr1[i] = "even";
        }
        else{
            arr1[i] = "odd";
        }
    }
    
}