#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    for (i=0; i<n-i-1; i++) {
        int x = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = x;
    }  
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
