#include <bits/stdc++.h>
using namespace std;

int sumCounts(int arr[], int n){
     int sum = 0;

     for(int i =0; i<n; i++){
          unordered_set<int> s;

          for( int j = i; j<n; j++){
               s.insert(arr[j]);
               sum += s.size() * s.size();
          }
          
     }
     return sum;
}

int main(){
     int t = 0;
     cout<< "Enter the number of test cases: ";
     cin>>t;

     while(t--){
          int n = 0;
          cout<< "Enter the number of elements in the array: ";
          cin>>n;

          int arr[n];
          for(int i = 0; i<n;i++){
               cin>>arr[i];
          }

          int ans = sumCounts(arr, n);
          cout<< ans << endl;
     }
     return 0;
}