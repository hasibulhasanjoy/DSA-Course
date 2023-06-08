#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
// Traverse the linked List
void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    // Creating Linked List
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 13;
    third->next = fourth;
    fourth->data = 70;
    fourth->next = NULL;
    traversal(head);
    return 0;
}