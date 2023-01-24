#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] , n ,elem;
    cout << "Enter the size of the array:-\n";
    cin >> n;
    cout <<"Enter the Elements :-\n";
    for(int i =1 ;i<= n; i++){
        cin >> arr[i];

    }
    cout <<"Enter the Element you want to insert :-\n";
    cin >> elem;
    n = n + 1;
    arr[n - 1] = elem;

    cout <<"The new array is :-\n";
    for(int i = 1; i < n; i++){
        cout << arr[i]<<" ";
    }


}