#include <bits/stdc++.h>
using namespace std;


string maxSumOfSquare(int num, int sum){
     string str="";
     while(num > 0 && sum > 0){
          int minVal = min(9, sum);
          sum-=minVal;
          str.push_back('0'+minVal);
          num--;
     }

     while(num != 0) str.push_back('0'); num--;

     if(sum >0) return "";

     return str;
}

int main(){
     int num, sum;

     cout<<"sum: ";
     cin>>sum;

     cout<<"num: ";
     cin>>num;
     

     string ans = maxSumOfSquare(num, sum);
     cout<<"ans: "<<ans;

     return 0;

}