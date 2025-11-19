#include <iostream>
#include <vector>
using namespace std;
int C[13];
void Merge(int arr[], int low, int mid,int high){
  int i=low;
  int j=mid+1;
  int k=low;
  while(i<=mid && j<=high){
    if(arr[i]<arr[j]){
        C[k]=arr[i];
        i++;
        k++;
    }
    else{
        C[k]=arr[j];
        j++;
        k++;
    }
  }
  while(i<=mid){
    C[k]=arr[i];
    i++;
    k++;
  }
  while(j<=high){
     C[k]=arr[j];
    j++;
    k++;
  }
  for(int i=low; i<=high; i++){
    arr[i]=C[i];
  }
}
void MergeSort(int arr[], int low, int high){
 if(low<high){
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid, high);
 }
}
int main(){
 int arr[13]={15, 9, 12, 8, 1, 6, 5, -2, 7, 10, 4, 20, 2};
 int low=0;
 int high=12;
 MergeSort(arr,low,high);
  for(int i=low; i<=high; i++){
    cout << arr[i] << " ";
  }

}