#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 3, 1, 8, 2};

    int maxN = 0;
    int minN = 100;

    for (int i = 0; i < 5; i++)
    {
        if (maxN < arr[i])
        {
            maxN = arr[i];
        }
        if (minN > arr[i])
        {
            minN = arr[i];
        }
    }

    cout << "Max: " << maxN << endl;
    cout << "Min: " << minN << endl;
}