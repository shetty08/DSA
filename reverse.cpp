#include<bits/stdc++.h>
using namespace std;
void f(int i , int arr[],int n)
{
    if(i >=n/2)
    return;
    swap(arr[i], arr[n-i-1]);
f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {
        /* code */
    }
    
}
