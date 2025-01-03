#include<bits/stdc++.h>
using namespace std;

void revMerge(vector<int> &arr, int l, int mid, int r)
{
  int n1 = mid - l + 1;
  int n2 = r - mid;
  vector<int> L(n1), R(n2);
  for(int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for(int i = 0; i < n2; i++)
    R[i] = arr[mid + 1 + i];
  
  int i = 0, j = 0, k = l;
  while(i < n1 && j < n2) {
    if(L[i] >= R[j])
      arr[k++] = L[i++];
    else
      arr[k++] = R[j++];
  }
  while(i < n1)
    arr[k++] = L[i++];
  while(j < n2)
    arr[k++] = R[j++];
}

void revMergeSort(vector<int> &arr, int l, int r)
{
  if(l < r) {
    int mid = (l + r) / 2;
    revMergeSort(arr, l, mid);
    revMergeSort(arr, mid+1, r);
    revMerge(arr, l, mid, r);
  }
}

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements: ";
  for(int i = 0; i < n; i++)
    cin >> arr[i];
  
  revMergeSort(arr, 0, n-1);

  cout << "After sorting: ";
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
  
  return 0;
}