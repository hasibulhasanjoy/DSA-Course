#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    for (int i = 5; i <= 10; i++)
    {
        s.push(i);
    }
    cout << s.empty() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << s.empty() << endl;
    return 0;
}