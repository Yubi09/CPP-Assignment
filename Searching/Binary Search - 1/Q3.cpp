#include <iostream>
#include <vector>

using namespace std;

int maxOnes(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int result = -1;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[i][mid] == 1)
            {
                if (mid == 0 || arr[i][mid - 1] == 0)
                {
                    if (m - mid > maxCount)
                    {
                        maxCount = m - mid;
                        result = i;
                    }
                    break;
                }
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return result;
}

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns in the matrix: ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the elements of the matrix in sorted order" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxOnes(arr) << endl;
    return 0;
}