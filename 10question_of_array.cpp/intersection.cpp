/*Intersection Elements means the same elements which is present in the 2 array
array m={1,2,3,3,4,8}
array n={3,4,5,6,7}
ans=3,4
 WARNING !This code not run because it is the question of code studio plateform.
*/
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
    
    for(int i=0; i<n; i++){
        int element = arr1[i];
        
        for(int j=0; j<m; i++){
            
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -1;
                break;
                
            }
        }
    }
    return ans;
}
