#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << endl;
}

Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

Node *insertInBetween(Node *head, int data, int index)
{
    Node *ptr = new Node;
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        // cout << i << endl;
        p = p->next;
        i++;
    }
    // cout << p->data << endl;
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

Node *insertAtEnd(Node *head, int data)
{
    Node *p = head;
    Node *ptr = new Node;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

Node *insertAfterANode(Node *head, Node *previous, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = previous->next;
    previous->next = ptr;
    return head;
}
int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = NULL;
    printList(head);
    head = insertAtFirst(head, 6);
    printList(head);
    head = insertInBetween(head, 86, 2);
    printList(head);
    head = insertAtEnd(head, 90);
    printList(head);
    head = insertAfterANode(head, third, 55);
    printList(head);
    return 0;
}