#include <iostream>
#include <stdlib.h>
using namespace std;
int BinarySearch(int arr[], int n, int low, int high){
 int mid;
 while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==n)
     return mid;
    else{
     if (n<arr[mid])
      high=mid-1;
    else
     low=mid+1;
    }
 }
   return -1;
}

int main(){
    int arr[]={15, 18, 20, 45, 67, 89, 91, 113, 115, 145, 167, 180, 183, 194, 200};
    int low=0, high=15;
    cout << "Enter the key you want to find in array." <<"\n";
    int key;
    cin >> key;
    int found= BinarySearch(arr, key, low, high);
    cout << "Key found at: " << found;
}