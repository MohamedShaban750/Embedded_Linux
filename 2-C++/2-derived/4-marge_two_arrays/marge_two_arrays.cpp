//marge two arrays

#include <iostream>

void merge_2_arrays(int arr1 [], int arr2[], int size1, int size2, int arr[]);

int main(void){
    int size1, size2 ;

    //array1
    std::cout<<"Enter number of elements for array1 : ";
    std::cin>> size1;
    
    int arr1[size1];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
   
    for(int i = 0; i < size1; i++)
        std::cin>>arr1[i];

    //array2
    std::cout<<"Enter number of elements for array2 : ";
    std::cin>> size2;
    
    int arr2[size2];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
   
    for(int i = 0; i < size2; i++)
        std::cin>>arr2[i];

    
    
    int arr[size1+size2] ;
    merge_2_arrays(arr1, arr2, size1, size2, arr);

    for(int i = 0; i < (size1+size2); i++)
        std::cout<<arr[i]<<" ";

    return 0;
}

void merge_2_arrays(int arr1 [], int arr2[], int size1, int size2, int arr[]){
    for(int i=0; i<size1; i++){
        arr[i] = arr1[i];
    }
    for(int i=0; i<size2; i++){
        arr[size1+i] = arr2[i];
    }
}