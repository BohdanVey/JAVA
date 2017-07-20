#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int no_dublicate(int a[],int n){
    int i=1;
    int j=0;
    while(i!=n){
     if (a[i]==a[j]){
        i++;
     }
     else{
      j++;
      a[j]=a[i];
      i++;
     }
    }
    n=j+1;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return n;
}
int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>a[i];   
  }
  sort(a,a+n);
  n=no_dublicate(a,n);
}
