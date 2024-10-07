#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int sum = 0;
    while(n>0){
        int d = n % 10;
        sum = sum + (d*d*d);
        n = n / 10;
    }
    if ( sum == temp){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}