#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

int main() {

 ull x;
 cin>>x;
 ull a[1000];
 bool dp[1000];
 ull t=0,t1;

 for(int i=1;i<=x;i++) {
     cin >> a[i];
     t+=a[i];
 }
 t1=t;
 t/=2;
 dp[1]=true;

 for(ull i=1;i<=x;i++)
     for(ull j=t;j>=a[i];j--)
         if(!dp[j] && dp[j - a[i]])
             dp[j]=true;
         ull p;
 for(ull i=t;i>=1;i--)
     if(dp[i])
     {
         p=i;
         break;
     }
 cout<<p<<" "<<t1-p;










}
