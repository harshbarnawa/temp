#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, 2, 8};
    int sum = 0, prd = 1;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        prd *= arr[i];
    }
    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << prd << endl;

    return 0;
}