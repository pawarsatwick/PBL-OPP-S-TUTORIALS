#include <iostream>
#include <iomanip>
using namespace std;

int ncr(int n, int r)
{
    int res = 1;

    if (r > n - r)
        r = n - r;

    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

void Pascal(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
            cout << setw(4) << ncr(i, j);

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    Pascal(n);

    return 0;
}



 B. using long long

 #include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate factorial
long long fact(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

// Function to calculate nCr
long long ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Function to print Pascal's Triangle
void Pascal(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << "   ";
        }

        // Print Pascal Triangle values
        for (int j = 0; j <= i; j++)
        {
            cout << setw(6) << ncr(i, j);
        }

        cout << endl;
    }
}

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    Pascal(rows);

    return 0;
}
