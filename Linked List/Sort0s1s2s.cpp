#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *head, *lastNode;

public:
    LinkedList()
    {
        head = NULL;
        lastNode = NULL;
    }
    void addNode(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            lastNode = newNode;
            return;
        }
        lastNode->next = newNode;
        lastNode = lastNode->next;
    }
    void print()
    {
        Node *current = head;
        int element = 1;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void sortList()
    {
        Node *current = head;
        // make 3 linked list for storing 0,1,2
        LinkedList l0, l1, l2;
        l1.addNode(-1);
        l2.addNode(-1);
        while (current != NULL)
        {
            if (current->data == 0)
            {
                l0.addNode(0);
            }
            else if (current->data == 1)
            {
                l1.addNode(1);
            }
            else
            {
                l2.addNode(2);
            }
            current = current->next;
        }
        // Merge 3 Linked List
        if (l1.head->next != NULL)
        {
            l0.lastNode->next = l1.head->next;
            l1.lastNode->next = l2.head->next;
        }
        else
        {
            l0.lastNode->next = l2.head->next;
        }
        l2.lastNode = NULL;
        // New head is l0's first node
        head = l0.head;
    }
};
int main()
{
    LinkedList l;
    l.addNode(2);
    l.addNode(1);
    l.addNode(2);
    l.addNode(0);
    l.addNode(1);
    l.addNode(0);
    l.print();
    l.sortList();
    l.print();
    return 0;
}