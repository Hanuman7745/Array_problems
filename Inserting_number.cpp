#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m];
    if(m > n){
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
    }
    else {
        cout<<"Value of 'n' must be greater than m"<<endl;
    }
    int x,pos;
    cin>>x>>pos;
    int idx = pos-1;
    for(int i = n-1; i>=idx; i--){
        arr[i+1] = arr[i];
    }
    n++;
    arr[idx] =x;
     for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
     }
    return 0; 
}