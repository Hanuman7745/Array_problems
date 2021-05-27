//deleting a number in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){ 
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int index;
     for(int i = 0; i < n; i++){ 
        if(arr[i] == x) {
            index = i;
            break;
        }
    }
    for(int i = index; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
     for(int i = 0; i < n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}