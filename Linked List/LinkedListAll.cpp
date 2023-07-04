#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void add_node(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void insert(int index, int data)
    {
        node *newNode = new node;
        newNode->data = data;
        if (index == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        node *ptr1 = head, *ptr2 = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr1->next = newNode;
        newNode->next = ptr2;
    }
    void print()
    {
        node *current = head;
        int element = 1;
        while (current != NULL)
        {
            cout << "Element at " << element++ << " : " << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    linked_list l;
    for (int i = 1; i <= 5; i++)
    {
        l.add_node(i);
    }
    cout << "*** Before insertion ***" << endl;
    l.print();
    l.insert(1, 10000);
    l.insert(3, 30000);
    l.insert(6, 10);
    l.insert(8, 2000);
    l.insert(10, 23475);
    cout << "*** After insertion ***" << endl;
    l.print();
    return 0;
}