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
    Node *floydLoopDetection()
    {
        if (head == NULL)
        {
            return NULL;
        }
        lastNode->next = head->next;
        if (head == NULL)
        {
            return NULL;
        }
        Node *fast = head;
        Node *slow = head;
        while (slow != NULL and fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
            if (fast == slow)
            {
                return slow;
            }
        }
        return NULL;
    }
    Node *firstNodeOfLoop()
    {
        if (head == NULL)
        {
            return NULL;
        }
        Node *intersection = floydLoopDetection();
        if (intersection == NULL)
        {
            return NULL;
        }
        Node *slow = head;
        while (slow != intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
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
    for (int i = 1; i <= 6; i++)
    {
        l.addNode(i);
    }
    l.print();
    Node *present = l.floydLoopDetection();
    if (present != NULL)
    {
        cout << "Loop exist" << endl;
    }
    else
    {
        cout << "Loop does not exist" << endl;
    }
    Node *firstNode = l.firstNodeOfLoop();
    if (firstNode == NULL)
    {
        cout << "Loop does not exist" << endl;
        return 0;
    }
    cout << firstNode->data << endl;
    return 0;
}