// Example program
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int searchinsert(int a[],int n,int t){
    if (t>a[n-1]){
    return n;
    }
    int i=0;
    int j=n;
    while(i<j){
     int s=(i+j)/2;
     if(t>a[s]){
      i=s+1;
     }
    else{
     j=s;   
    }
    }
    return j;
}
int main()
{
  int n,a[100],t;
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>a[i];   
  }
  sort(a,a+n);
  cin>>t;
  int j=searchinsert(a,n,t);
  cout<<j;
}
