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
    Node *findMiddle()
    {
        Node *ptr1 = head;
        Node *ptr2 = head->next;
        while (ptr2 != NULL)
        {
            ptr2 = ptr2->next;
            if (ptr2 != NULL)
            {
                ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
        }
        return ptr1;
    }
    void print()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList linkedList;
    for (int i = 1; i <= 6; i++)
    {
        linkedList.addNode(i);
    }
    linkedList.print();
    Node *middle = linkedList.findMiddle();
    cout << middle->data << endl;
    return 0;
}