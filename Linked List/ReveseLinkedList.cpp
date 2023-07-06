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
    void reverseListRecursion(Node *current, Node *previous)
    {
        if (current == NULL)
        {
            head = previous;
            return;
        }
        Node *nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
        reverseListRecursion(current, previous);
    }

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
    void reverseUsingRecursion()
    {
        Node *current = head;
        Node *previous = NULL;
        reverseListRecursion(current, previous);
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
    list.reverseUsingRecursion();
    list.print();
    return 0;
}