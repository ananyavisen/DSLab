#include <iostream>
#include <stdlib.h>
using namespace std;
void LinearSearch(int arr[], int n){
 bool found=false;
 for(int i=0; i<15; i++){
    if(n==arr[i])
    {
        found= true;
    }
 }
 if(found)
  cout << "Key Found!" << "\n";
 else
  cout << "Key Not Found" << "\n";
}

int main(){
    int arr[]={23, 56, 17, 18, 20, 74, 153, 29, 167, 709, 123, 483, 834, 62, 100};
    cout << "Enter the key you want to find in array." <<"\n";
    int n;
    cin >> n;
    LinearSearch(arr, n);
}