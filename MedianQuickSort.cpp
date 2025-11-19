#include <iostream>
#include <algorithm>
using namespace std;
int Partition(int arr[], int low, int high){
   int mid=(low+high)/2;
   swap(arr[low],arr[mid]);
   int pivot=arr[low];
   int i=low;
   int j=high+1;
    do{
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
         swap(arr[i],arr[j]);
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}
void MedianQuickSort(int arr[], int low, int high){
    if(low<high){
        int j=Partition(arr,low,high);
        MedianQuickSort(arr,low,j-1);
        MedianQuickSort(arr,j+1,high);
    }
}
int main(){
   int arr[10]={1,-4,8,9,32,-65,12,89,35};
   arr[9]=INT32_MAX;
   int low=0;
   int high=8;
   MedianQuickSort(arr,low,high);
   for(int i=0; i<9; i++)
    cout << arr[i] << " ";
}
