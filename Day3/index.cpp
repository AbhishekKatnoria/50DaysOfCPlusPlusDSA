#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Print ABCD base up number of n input

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    // Print 1234 base up number of n input

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    char ch ='A';

       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Triangle Pattern like * ** *** ****

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Triangle Pattern with number like 1 22 333 4444

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Triangle Pattern with number like 1 12 123 1234

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}