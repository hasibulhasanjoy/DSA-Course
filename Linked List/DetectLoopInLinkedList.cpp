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
    bool detectLoop()
    {
        lastNode->next = head->next;
        map<Node *, bool> visited;
        Node *current = head;
        while (current != NULL)
        {
            if (visited[current] == true)
            {
                return true;
            }
            visited[current] = true;
            current = current->next;
        }
        return false;
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
};

int main()
{
    LinkedList l;
    for (int i = 1; i <= 7; i++)
    {
        l.addNode(i);
    }
    l.print();
    bool present = l.detectLoop();
    if (present)
    {
        cout << "Loop exist" << endl;
    }
    else
    {
        cout << "Loop does not exist" << endl;
    }
    return 0;
}