#include <iostream>
using namespace std;

inline int printPatin(int n)
{
    int i, j, mid;
    if (n % 2 == 1)
    { // when n is odd, increase it by 1 to make it even
        n++;
    }
    mid = (n / 2);
    for (i = 1; i <= mid; i++)
    {
        for (j = 1; j <= (mid - i); j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (i = mid + 1; i < n; i++)
    {
        for (j = 1; j <= i - mid; j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == n - 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * (n - i) - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int printPat(char c){
    int n = c-'0', i, j, mid; 
    if (n % 2 == 1)
    { // when n is odd, increase it by 1 to make it even
        n++;
    }
    mid = (n / 2);
    for (i = 1; i <= mid; i++)
    {
        for (j = 1; j <= (mid - i); j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (i = mid + 1; i < n; i++)
    {
        for (j = 1; j <= i - mid; j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == n - 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * (n - i) - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int printPatRef(int &n){
    int i, j, mid;
    if (n % 2 == 1)
    { // when n is odd, increase it by 1 to make it even
        n++;
    }
    mid = (n / 2);
    for (i = 1; i <= mid; i++)
    {
        for (j = 1; j <= (mid - i); j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (i = mid + 1; i < n; i++)
    {
        for (j = 1; j <= i - mid; j++)
        { // print the blank spaces before star
            cout << " ";
        }
        if (i == n - 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*"; // in each line star at start and end position
            for (j = 1; j <= 2 * (n - i) - 3; j++)
            { // print space to make hollow
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int main()
{
    int n = 7;
    // cout << "Enter number of lines: ";
    // cin >> n;
    printPatin(7);
    printPat(7);
    printPat('7');
    printPat(n);
    return 0;
}