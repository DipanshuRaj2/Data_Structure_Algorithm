#include<bits/stdc++.h>
using namespace std;

    
bool linear_search(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}
int main(){
 
 int size;

cout<<"Enter the size of array:-\n";

cin >>size;

int arr[100];  

cout<<"enter the elements in array:-";

 for(int i=0; i<size; i++){

        cin >> arr[i];
        
    }
int key;

cout <<"Enter the elements you wants to search:-" ;   

cin >>key;    

bool found = linear_search( arr , 100, key );

if (found){

    cout<<"elements are present:-"<<endl;
}

else{
    cout<<"elements are absent:-"<<endl;
}




}
