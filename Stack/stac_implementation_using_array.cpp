#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr;
    int size;
    int index;

public:
    Stack(int size)
    {
        this->size = size;
        index = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (index == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++index] = element;
    }
    void pop()
    {
        if (index < 0)
        {
            cout << "Stack under flow" << endl;
            return;
        }
        index--;
    }
    int top()
    {
        if (index < 0)
        {
            cout << "Stack is empty" << endl;
        }
        return arr[index];
    }
    int length()
    {
        return index + 1;
    }
    bool empty()
    {
        return index < 0;
    }
};
int main()
{
    Stack st(5);
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }
    st.push(6);
    st.push(7);
    cout << "Size of stack : " << st.length() << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << "Size of stack : " << st.length() << endl;
    st.pop();
    st.top();
    return 0;
}