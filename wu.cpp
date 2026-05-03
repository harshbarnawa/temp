#include<iostream>
using namespace std;

void rec(int n){
    if(n == 1){
        cout <<1<<endl;
        return;
    }
    cout << n << " ";
    rec(n - 1);
}

int main() {
    int n = 5;
    rec(n);
    return 0;
}