/*Insertion Sort = Array elments are arrange in increasing or decresing 
order.
1.we pick up 1 element of array and compare the all the elements presents
  in array.
2.In Insertion Sort use 'shift technique'
  but Selection Sort and Bubble Sort use 'swap technique'.  */

#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[] , int size){
    int i =1; //0th index has already been assumed as sorted and
            // first loop initialization
    
    while(i<size){ //first loop for Round ke liye
 
           int j = i-1; // second loop initialization .
                         //ith index compare karenge i - 1 index se
           int temp  = arr[i];
        //store the second  element because index start with 1 above condtion             
           while(j>=0){ //second loop last elements se compare karte aa rhn
             if (arr[j] > temp)  {
                //temp less than arr[j] then shift kar denge
                arr[j+1] =arr[j]; // aage badha rahe hain
             }   
             else{ // if temp greater than arr[j] then nothing is doing
                break; //break statement is use
             }  
            j--;//for second loop ke kiye

           }
           i++; //for first loop ke liye
           arr[j+1] =temp; // shift karne ke baad empty space main temp ko rakhenge
    }

    
    cout<<"Sorted Array are: ";
    for(int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n , arr[50];
    cout<<"Enter the size of array: ";
    cin >> n;
    
    cout<<"Enter "<<n<<" Elements ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertionsort(arr , n );
}
