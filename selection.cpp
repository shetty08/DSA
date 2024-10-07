#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;  //find the minimum element in the remaining unsorted part of the
        for(int j =i ; j<=n-1;j++){
            if(arr[j] < arr[mini])   //if we find a smaller element
            mini = j ;           //we update the index of the smallest element
        }

//Now, we swap the found minimum element with the first element of the unsorted part
         int temp = arr[mini];
          arr[mini] = arr[i];
           arr[i] = temp;
}
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
        }
        selection_sort(arr,n);
        for(int i =0 ; i<n;i++){
            cout << arr[i]<<" ";
        }
    return 0;
}