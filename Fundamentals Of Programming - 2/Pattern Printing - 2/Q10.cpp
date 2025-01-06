#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int space = n + 1;
  int star = 1;
  for(int i = 1; i <= n; i++ ){
    if (star == n)
    {
      for(int j = 1; j <= 2 * n - 1; j++){
        cout << "*";
      }
      cout << endl;
      break;
    }
    for(int j = 1; j <= star; j++){
      cout << "*";
    }
    for(int k = 1; k <= space; k++){
      cout << " ";
    }
    for(int l = 1; l <= star; l++){
      cout << "*";
    }
    cout << endl;
    space -= 2;
    star++;
  }

  for (int j = 1; j <= 2 * n - 1; j++)
  {
    cout << "*";
  }
  cout << endl;

  space = 1;
  star = n - 1;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= star; j++){
      cout << "*";
    }
    for(int k = 1; k <= space; k++){
      cout << " ";
    }
    for(int l = 1; l <= star; l++){
      cout << "*";
    }
    cout << endl;
    space += 2;
    star--;
  }

  return 0;

}