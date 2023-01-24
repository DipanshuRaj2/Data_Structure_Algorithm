#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate (int arr[] ,int n){
    for(int i=0; i<n; i=i+2){
        if(i+1 < n){
            
            swap(arr[i] , arr[i+1]);
        }

    }
}


int main(){
    int even[6] ={12,25,14,7,6,4};

    int odd[5] ={14,2,10,5,9};
    
    swapAlternate(even,6);
    printArray(even ,6); 

    cout<<endl;

    swapAlternate(odd,6);
    printArray(odd ,6); 

}