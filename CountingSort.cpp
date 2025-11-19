#include <iostream>
#include <stdlib.h>
using namespace std;
void countingSort(int arr[], int k, int n){
    int c[k+1]={0};
    int b[n];
    for(int i=0; i<n; i++)
     c[arr[i]]++;
    for(int i=1; i<=k; i++)
     c[i]=c[i]+c[i-1];
    for(int j=n-1; j>=0; j--){
        b[c[arr[j]]-1]=arr[j];
        c[arr[j]]=c[arr[j]]-1;
    }
    for(int i=0; i<n; i++){
        cout << b[i]<< " ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    int k=9;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   countingSort(arr,k,n);
}