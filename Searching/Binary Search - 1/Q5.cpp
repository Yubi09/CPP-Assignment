#include <iostream>

using namespace std;

bool isPerfectSquare(int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n == 0 || n == 1)
    {
        return true;
    }
    int low = 1, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid == n / mid && n % mid == 0)
        {
            return true;
        }
        if (mid < n / mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPerfectSquare(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}