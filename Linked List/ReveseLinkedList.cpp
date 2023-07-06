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
    void reverseList()
    {
        Node *current = head;
        Node *nextNode = head;
        Node *previousNode = NULL;
        while (current != NULL)
        {
            nextNode = current->next;
            current->next = previousNode;
            previousNode = current;
            current = nextNode;
        }
        head = previousNode;
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
    LinkedList list;
    for (int i = 1; i <= 10; i++)
    {
        list.addNode(i);
    }
    list.print();
    list.reverseList();
    list.print();
    return 0;
}