#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int l = 0, h = m * n - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (matrix[mid / n][mid % n] == target)
        {
            return true;
        }
        else if (matrix[mid / n][mid % n] < target)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return false;
}

int main()
{
    int m, n;
    int key;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the key to be searched: ";
    cin >> key;
     bool ans = searchMatrix(arr, key);
    if (!ans)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found" << endl;
    }
}