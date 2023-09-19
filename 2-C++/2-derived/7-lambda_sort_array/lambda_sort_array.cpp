// Use lambda functions to sort an array of integers in ascending and descending order

#include <iostream>
#include <algorithm>
#include<array>
int main(void){

    int size;
    std::cout<<"Enter number of elements : ";
    std::cin>> size;
    
    int arr[size];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
    
    for(int i = 0; i < size; i++)
        std::cin>>arr[i];

    std::sort(arr, (arr+size), [](int a, int b){return a>b;});

    std::cout<< "The array after descending sorting ==>" <<std::endl;
    for(auto num : arr){
        std::cout<< num <<" ";
    }

    std::sort(arr, (arr+size), [](int a, int b){return a<b;});

    std::cout<< std::endl <<"The array after ascending sorting ==>" <<std::endl;
    for(auto num : arr){
        std::cout<< num <<" ";
    }

    return 0;
}
