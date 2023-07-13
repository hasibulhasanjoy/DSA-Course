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
        LinkedList list0, list1, list2;
        list1.addNode(-1);
        list2.addNode(-1);
        while (current != NULL)
        {
            if (current->data == 0)
            {
                list0.addNode(0);
            }
            else if (current->data == 1)
            {
                list1.addNode(1);
            }
            else
            {
                list2.addNode(2);
            }
            current = current->next;
        }
        // Merge 3 Linked List
        if (list1.head->next != NULL)
        {
            list0.lastNode->next = list1.head->next;
            list1.lastNode->next = list2.head->next;
        }
        else
        {
            list0.lastNode->next = list2.head->next;
        }
        list2.lastNode = NULL;
        // New head is l0's first node
        head = list0.head;
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