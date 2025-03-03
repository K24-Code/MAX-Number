#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[], int size){
    int maxAns= arr[0];
    for(int i=0; i<size; i++){
         maxAns= max(maxAns, arr[i]);
    }
    return maxAns;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[90];
    for(int i=0; i<size; i++){
        cout<<"Enter the input values of index: "<<i<<endl;
        cin>>arr[i];
    }

    cout<<"Maximum number is: "<<findMax(arr, size) <<endl;

    return 0;
}