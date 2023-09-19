//delete number in array

#include <iostream>

bool delete_number(int arr [], int *size, int del_num);

int main(void){
    int n, s;

    std::cout<<"Enter number of elements : ";
    std::cin>> n;
    
    int arr[n];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
   
    for(int i = 0; i < n; i++)
        std::cin>>arr[i];

    std::cout<<"Enter number to delete: ";
    std::cin>> s;

    bool result = delete_number(arr, &n, s);

    std::cout<<(result?"number deleted":"number not found")<<std::endl;

    for(int i = 0; i < n; i++)
        std::cout<<arr[i]<<std::endl;

    return 0;
}

bool delete_number(int arr [], int *size, int del_num){
    bool result = false;
    for(int i=0; i<(*size); i++){
        if(del_num == arr[i]){
            for (int j = i; j < (*size)-1; j++) {
                arr[j] = arr[j + 1];
            }
            result = true;
            (*size)--;
            i--;
        }
    }   
    return result;
}