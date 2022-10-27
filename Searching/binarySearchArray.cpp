#include "iostream"
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        int midElement = arr[mid];
        if(key == midElement){
            return mid;
        }
        else if(key < midElement){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}