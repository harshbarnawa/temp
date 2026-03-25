#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) // lines
    {
        for (int j = 5; j > i; j--) // value
        {
            cout << "* ";
        }
        cout << endl;
    }
}