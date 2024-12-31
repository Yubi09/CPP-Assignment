#include <iostream>

using namespace std;

int arrangeCoins(int n)
{
    long long low = 0, high = n;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long sum = mid * (mid + 1) / 2;
        if (sum == n)
        {
            return mid;
        }
        if (sum < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    cout << arrangeCoins(n) << endl;
    return 0;
}