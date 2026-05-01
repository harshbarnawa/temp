#include <iostream>
using namespace std;

void sort(int arr[],int n){
    bool isSwap = false;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap = true;
        }
    }
    if(!isSwap){
        return;
    }
    }
}

int main() {
    int n = 6;
    int arr[n] = {4,3,6,1,5,2};

    sort(arr, n);
    
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}