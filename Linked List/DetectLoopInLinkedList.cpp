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
    void removeLoop()
    {
        if (head == NULL)
        {
            return;
        }
        Node *startingNodeOfLoop = firstNodeOfLoop();
        if (startingNodeOfLoop == NULL)
        {
            return;
        }
        Node *temp = startingNodeOfLoop->next;
        while (temp->next != startingNodeOfLoop)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void makeLoop()
    {
        lastNode->next = head->next;
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
    l.makeLoop();
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
    }
    l.removeLoop();
    firstNode = l.floydLoopDetection();
    if (firstNode == NULL)
    {
        cout << "Loop does not exist" << endl;
        l.print();
    }
    return 0;
}