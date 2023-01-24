#include<bits/stdc++.h>
using namespace std;

void seletionSort(int arr[] , int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;

        for(int j = i+1; j<size; j++ ){
            if(arr[j] < arr[minIndex]) // arr[min index] se bhi koi chota hain arr[j] wale se isliye (arr[j] < arr[minIndex])
               minIndex =j;
            
        }
    
    swap(arr[minIndex], arr[i]);
    // int temp;
        
    }
    cout<<"your "<<size<<" sorted array by selection sort :";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    

    int sorting[15], n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin >>sorting[i];
    }

    

    seletionSort(sorting, n);
}