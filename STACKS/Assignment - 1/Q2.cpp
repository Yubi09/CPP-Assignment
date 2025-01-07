#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    if(k > s.size())
    {
        cout<<"Invalid value of k\n";
        return 0;
    }

    stack<int> temp;
    for(int i=0;i<k;i++)
    {
        temp.push(s.top());
        s.pop();
    }
    s.pop();
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}