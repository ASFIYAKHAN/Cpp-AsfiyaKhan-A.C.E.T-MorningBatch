#include<iostream>
using namespace std;
int main(){
    int nterms,n,t1,t2;
    t1 = 0;
    t2 = 1;
    nterms = t1 + t2;
     cout<<"enter the number"<<endl;
     cin>>n;
     cout<<"fibonacci series are :"<<t1<<"\n"<<t2<<endl;
    for(int i=3; i<=n ;++i){
      cout<<nterms<<endl;
      t1 = t2;
      t2 = nterms;
      nterms = t1 + t2;
    } 
}
/*#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
*/