#include<bits/stdc++.h>
using namespace std;
void print4(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< i << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print4(n);
}