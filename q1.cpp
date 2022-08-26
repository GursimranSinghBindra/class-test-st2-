//Name Gursimran Singh Roll no 2010990252 Set 1
// non repeated numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
// array params input //
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
// using sort func from STL //
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}