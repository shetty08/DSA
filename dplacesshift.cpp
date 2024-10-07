#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int n,k;
  int arr[n];
  cout << "Enter the number of elements in array: ";
  cin>>n;
  cout<<"Enter the value to rotate by: ";
  cin>>k;

  for (int i = 0; i < n; i++) { 
        cout << "Enter a number: "; 
        cin >> arr[i]; 
}
}