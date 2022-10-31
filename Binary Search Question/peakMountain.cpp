//Program to find the peak index in an array using binary search
#include "iostream"
using namespace std;

int peakMountain(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout << peakMountain(arr, n);
    return 0;
}