#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class CircularList
{
private:
    Node *head, *lastNode;

public:
    CircularList()
    {
        head = NULL;
        lastNode = NULL;
    }
    void addNode(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        if (head == NULL)
        {
            head = newNode;
            lastNode = head;
            return;
        }
        lastNode->next = newNode;
        lastNode = lastNode->next;
    }
    void insertNode(int index, int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        if (index == 1)
        {
            newNode->next = head;
            lastNode->next = newNode;
            head = newNode;
            return;
        }
        Node *currentNode = head;
        Node *nextNode = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            currentNode = currentNode->next;
            nextNode = nextNode->next;
            if (nextNode->next == head) // Last node reached
            {
                nextNode->next = newNode;
                newNode->next = head;
                lastNode = newNode;
                return;
            }
        }
        currentNode->next = newNode;
        newNode->next = nextNode;
    }
    void deleteNode(int index)
    {
        if (index == 1)
        {
            Node *temp = head;
            head = head->next;
            lastNode->next = head;
            free(temp);
            return;
        }
        Node *currentNode = head;
        Node *nextNode = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            currentNode = currentNode->next;
            nextNode = nextNode->next;
            if (nextNode->next == head)
            {
                currentNode->next = head;
                lastNode = currentNode;
                free(nextNode);
                return;
            }
        }
        currentNode->next = nextNode->next;
        free(nextNode);
    }
    void print()
    {
        Node *ptr = head;
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != head);
        cout << endl;
    }
};

int main()
{
    CircularList list;
    for (int i = 1; i <= 10; i++)
    {
        list.addNode(i);
    }
    list.print();
    list.insertNode(1, 100);
    list.insertNode(13, 2222);
    list.insertNode(5, 5555);
    list.insertNode(8, 10000);
    list.print();
    list.deleteNode(1);
    list.deleteNode(4);
    list.deleteNode(6);
    list.deleteNode(11);
    list.print();
    return 0;
}