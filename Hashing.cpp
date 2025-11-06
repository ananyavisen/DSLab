#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int digit(int n){
    int c=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    return c;
}
int MidSquareHash(int key, int tablesize){
 int m=digit(tablesize-1);
 long long M=pow(10,m);
 long long y=key*key;
 int n=digit(key);
 int x=(2*n-m)/2;
 int d=pow(10,x);
 y=y/d;
 int L=y%M;
 return L;
}

int main(){
   cout << "Enter the key & tablesize: " << "\n";
   int key, tablesize;
   cin >> key >> tablesize;
   int res=MidSquareHash(key, tablesize);
   cout << res;
}