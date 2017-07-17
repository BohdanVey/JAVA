// Example program
#include <iostream>
#include <string>
using namespace std;
int rotate(int num[],int k,int n){
if(k>n){
 k=k%n;   
}
int res[100];
for(int i=0;i<k;i++){
    res[i]=num[n-k+i];
}
int j=0;
for(int i=k;i<n;i++){
    res[i]=num[j];
    j++;
}
for(int i=0;i<n;i++){
   num[i]=res[i]; 
  }
}
int main()
{
  int n,k,a[100];
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>a[i];   
  }
  cin>>k;
  rotate(a,k,n);
  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";   
  }
}
