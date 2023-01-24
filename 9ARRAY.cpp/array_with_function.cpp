#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size){
     cout << "\nPrinting the array " <<endl;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " " ;
    }
     cout << "Printing  done" << endl;

}
int main(){
  
    int first[15] = {2 ,7};
    printArray(first ,15);

    int second[23] ={0};
    printArray(second,23);

    int third[12] ={1};
    printArray(third ,12);

    int fourth[5]={2};
    printArray(fourth ,3);

    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<< "Size of forth is" << fourthsize  <<endl;
}