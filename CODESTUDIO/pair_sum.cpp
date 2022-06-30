#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> v;
   for(int i = 0; i < arr.size(); i++){
       for(int j = i + 1; j < arr.size(); j++){
           vector <int> temp;
           if(arr[i]+arr[j] == s){
               temp.push_back(min(arr[i],arr[j]));
               temp.push_back(max(arr[i],arr[j]));
               v.push_back(temp);
           }
           
       }
   }
    sort(v.begin(),v.end());
    return v;
}
