#include<iostream>
#include<vector>
using namespace std;

int twoS(vector<int> vec,int target){
    int idx = 0;
    for(int i : vec){
        if(i==target){
            return idx;
        }
        idx++;
        
    }
    return -1;
}

int main() {
    vector<int> vec = {3,7,2,1,4};
    int target = 7;
    cout << twoS(vec,target);
    return 0;
}