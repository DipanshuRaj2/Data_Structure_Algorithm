#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){ //make function 

    for(int i=0; i<n; i++){ //for round 1 to n-1 

        for(int j = 0; j<n-i; j++ ){
            if(arr[j]>arr[j+1]){  //process element till (n-i) th index tak
                                // check element greater than other element than just  doing swap 
                swap(arr[j],arr[j+1]);
                    //swap is the inbuilt  function 
            }
        }
        
    }
    cout<<"your " <<n <<" size of sorted array: ";
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" "; //print  sorted array elements
        }
}
int main(){
    int bubble[100], n; 
    cout<<"Enter the Size of array: ";
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>bubble[i]; // take input from the user
        }
    bubblesort(bubble,n); //call the function

}