#include<iostream>
#include<limits.h>
using namespace std;

//FIND MAX USING LINEAR SEARCH
int findMax(int arr[], int size){
    int maxAns= INT_MIN;
    for(int i=0; i<size; i++){
        //OR WE CAN USE THE INBUILT MAX FUNCTION INSTEAD OF USING THE IF STATEMENT 
        maxAns=max(maxAns, arr[i]);
       // if(arr[i]>maxAns){
       //     maxAns=arr[i];
        //}
    }
    return maxAns;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[50];
    for(int i=0; i<size; i++){
        cout<<"Enter the input value of index: "<<i <<endl;
        cin>>arr[i];
    }

    cout<<"Maximum number is: "<<findMax(arr, size) << endl;
    
    return 0;
}