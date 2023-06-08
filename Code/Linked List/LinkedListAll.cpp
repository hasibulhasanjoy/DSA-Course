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
    int cnt = 0;
    void add_node(int data)
    {
        cnt++;
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    void insert(int index, int data)
    {
        cnt++;
        node *insertNode = new node;
        insertNode->data = data;
        if (index == 1)
        {
            insertNode->next = head;
            head = insertNode;
            return;
        }
        node *currentNode = head;
        for (int i = 1; i < index - 1; i++)
        {
            currentNode = currentNode->next;
        }
        insertNode->next = currentNode->next;
        currentNode->next = insertNode;
    }
    void print()
    {
        node *current = head;
        int i = 1;
        while (current != NULL)
        {
            cout << "Element at " << i << " : " << current->data << endl;
            i++;
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    linked_list list1;
    for (int i = 5; i <= 10; i++)
    {
        list1.add_node(i);
    }
    list1.print();
    cout << list1.cnt << endl;
    list1.insert(7, 1000000000);
    list1.insert(1, 1000000000);
    list1.insert(3, 1000000000);
    list1.print();
    cout << list1.cnt << endl;
    return 0;
}