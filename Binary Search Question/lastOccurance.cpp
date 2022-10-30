#include "iostream"
// #include "algorithm"
using namespace std;

int lastOccurance(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        int midElement = arr[mid];
        if(key == midElement){
            ans = mid;
            start = mid + 1;
        }
        else if(key < midElement){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
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
    // cout<<binary_search(arr,arr+n,key);
    cout<<lastOccurance(arr,n,key)<<endl;
    return 0;
}