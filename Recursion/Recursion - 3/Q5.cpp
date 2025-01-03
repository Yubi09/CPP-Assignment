#include<bits/stdc++.h>
using namespace std;

void DupSubsets(int index, vector<int> &arr, vector<int> &s, vector<vector<int>> &ans) {
  ans.push_back(s);
  for(int i = index; i < arr.size(); i++) {
    if(i != index && arr[i] == arr[i-1]) {
      continue;
    }
    s.push_back(arr[i]);
    DupSubsets(i+1, arr, s, ans);
    s.pop_back();
  }
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<vector<int>> ans;
  vector<int> s;
  sort(arr.begin(), arr.end());
  DupSubsets(0, arr, s, ans);
  for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}