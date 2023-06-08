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
Node *fifth = new Node;

void createLinkedList()
{
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = fifth;
    fifth->data = 11;
    fifth->next = NULL;
}

void printLinkedList()
{
    Node *ptr = head;
    int i = 0;
    while (ptr != NULL)
    {
        cout << "element at " << i << " : " << ptr->data << endl;
        i++;
        ptr = ptr->next;
    }
    cout << endl;
}

void deleteAtTheFirstNode()
{
    Node *ptr = head;
    head = head->next;
    free(ptr);
}

void deleteBetween(int index)
{
    Node *ptr = head;
    Node *q = head->next;
    int i = 0;
    while (i < index - 1)
    {
        ptr = ptr->next;
        q = q->next;
        i++;
    }
    ptr->next = q->next;
    free(q);
}

void deleteLastNode()
{
    Node *ptr = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        q = q->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(q);
}

void deleteNodeWithAValue(int key)
{
    Node *ptr = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        if (q->data == key)
        {
            break;
        }
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
}

int main()
{
    createLinkedList();
    printLinkedList();
    deleteAtTheFirstNode();
    printLinkedList();
    deleteBetween(2);
    printLinkedList();
    deleteLastNode();
    printLinkedList();
    deleteNodeWithAValue(9);
    printLinkedList();
    return 0;
}