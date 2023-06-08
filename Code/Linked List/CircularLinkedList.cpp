#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = new Node;
Node *second = new Node;
Node *third = new Node;
Node *fourth = new Node;

void createLinkedList()
{
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 7;
    fourth->next = head;
}

void printList()
{
    Node *ptr = head;
    int i = 0;
    do
    {
        cout << "Element at " << i << " : " << ptr->data << endl;
        i++;
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}

int main()
{
    createLinkedList();
    printList();
    return 0;
}