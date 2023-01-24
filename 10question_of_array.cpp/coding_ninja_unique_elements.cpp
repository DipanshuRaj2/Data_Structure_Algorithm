/*You have given an integer array/list(ARR) of size N .
Where N is equal to [2M +1].
Now, in the given array/list, 'M' numbers are twice and one number is present only once.
You need to find and return that number which is unique in the array/list.*/

#include<bits/stdc++.h>
using namespace std;

// make function
int findUnique(int arr[], int size){

    int ans =0;

    for(int i=0; i<size; i++){
        
        ans=ans^arr[i];
        
    }
    cout<< ans;
    return ans;
}


int main(){
    int arr[11]={2,3,4,5,6,2,3,4,5,6,8};

    for(int i=0; i<11; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    findUnique( arr, 11);
}
 