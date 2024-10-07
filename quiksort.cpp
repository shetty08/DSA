#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low,int high){
    // choose the leftmost element as pivot
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while(arr[i]<= pivot && i <= high -1){
            i++;
        }
        while (arr[j] > pivot  && j >= low + 1) {
            j--;
        }
         if (i < j)
         swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;

   
}
void qs(vector<int> &arr,int low,int high){
    if(low <high){
        int pi = partition(arr,low,high);
        qs(arr, low , pi-1);
        qs(arr, pi+1 , high);

    }
}
vector<int> quickSort(vector<int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main(){
    vector<int> arr = {5,4,3,8,7};
    int n = arr.size(); 
    cout<<"Given array is \n";
    for(int i = 0;i<n;i++)
    {
        cout<< arr[i]<<" ";

    }
    cout << endl;
    arr = quickSort(arr);
    cout << "The sorted array is: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<"\n";
    return 0;

}