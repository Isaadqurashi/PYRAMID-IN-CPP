#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer Number for rows Of Pyramid: "; // n are number of rows
    cin >> n;

    // number of spaces
    int k = 2 * n - 2;

    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++)
    {

        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < k; j++)
            cout << " ";

        // Decrementing k after each loop
        k = k - 1;

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
        {
            // Printing stars
            cout << "* ";
        }

        // Ending line after each row
        cout << endl;
    }
}
