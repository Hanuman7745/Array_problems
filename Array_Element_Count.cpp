//to find maximum repeated number in a given array using map
#include<bits/stdc++.h>
using namespace std;
int  main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = 0;
    int id;
    map<int,int>dict;
    for(int i=0; i<n; i++){
        dict[arr[i]]++;
    }
    for(auto it : dict) {
        if(it.second > temp) {
            temp = it.second;
            id = it.first;
        }
    }
    cout<<"Customer with Id:"<<id<<" will get discount since their count is "<<temp;
    return 0;
 }



//to find the  maximum repeated element in array by Using Frequency array
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int *maxi = max_element(a,a+n);
    int b[*maxi+1] = {0};//frequency array
    int temp = 0;
    int id;
    for(int i = 0; i < n; i++){
        b[a[i]]++;
    }
    for(int i = 1; i <= *maxi; i++){
        if(b[i] > temp) {
            temp = b[i];
            id = i;
        }
    }
    cout<<"Customer with ID:"<<id<<" will get discount since their count is "<<temp;
} 