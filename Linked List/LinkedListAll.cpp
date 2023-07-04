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
    Node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addNode(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void insert(int index, int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        if (index == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *ptr1 = head, *ptr2 = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr1->next = newNode;
        newNode->next = ptr2;
    }
    void deleteNode(int index)
    {
        if (index == 1)
        {
            Node *current = head;
            head = head->next;
            free(current);
            return;
        }
        Node *current = head;
        Node *nextNode = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            current = current->next;
            nextNode = nextNode->next;
        }
        current->next = nextNode->next;
        free(nextNode);
    }
    void print()
    {
        Node *current = head;
        int element = 1;
        while (current != NULL)
        {
            cout << "Element at " << element++ << " : " << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    LinkedList linkedList;
    for (int i = 1; i <= 5; i++)
    {
        linkedList.addNode(i);
    }
    cout << "*** Before insertion ***" << endl;
    linkedList.print();
    linkedList.insert(1, 10000);
    linkedList.insert(3, 30000);
    linkedList.insert(6, 10);
    linkedList.insert(8, 2000);
    linkedList.insert(10, 23475);
    cout << "*** After insertion ***" << endl;
    linkedList.print();
    linkedList.deleteNode(1);
    linkedList.deleteNode(2);
    linkedList.deleteNode(4);
    linkedList.deleteNode(5);
    linkedList.deleteNode(6);
    cout << "*** After Deletion ***" << endl;
    linkedList.print();
    return 0;
}