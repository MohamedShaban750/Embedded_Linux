// create a function to ﬁnd the maximum number of array
#include <iostream>
//#include <algorithm>

int max_number_array(int arr [], int size);

int main(void){
    int n ;
    std::cout<<"Enter number of elements : ";
    std::cin>> n;
    
    int arr[n];
    std::cout<<"Enter your elements : ";
    std::cout<<std::endl;
    for(int i = 0; i < n; i++)
        std::cin>>arr[i];

    // sort(arr,arr+n);
    std::cout<<"Maximum number is "<<max_number_array(arr, n);

    return 0;
}

int max_number_array(int arr[], int size){
    int max_num = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max_num){
            max_num = arr[i];
        }
        //max_num = (arr[i] > max_num)? arr[i]:max_num;
    }
    return max_num;
}