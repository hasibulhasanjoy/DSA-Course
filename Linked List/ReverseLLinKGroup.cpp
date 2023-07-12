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
    void reverseKNode(Node *start, Node *end)
    {
        Node *current = head;
        Node *previous = NULL;
        Node *NextNode = head;
        while (previous != end)
        {
            NextNode = current->next;
            current->next = previous;
            previous = current;
            current = NextNode;
        }
        start = previous;
    }
    Node *reverseKGroup(Node *head, int k)
    {
        cout << head->data << endl;
        if (head == NULL or head->next == NULL or k == 1)
        {
            return head;
        }
        Node *start = head;
        Node *end = head;
        int count = 1;
        while (count < k)
        {
            end = end->next;
            if (end->next == NULL)
            {
                return head;
            }
            count++;
        }
        Node *nextHead = reverseKGroup(end->next, k);
        reverseKNode(start, end);
        start->next = nextHead;
        return end;
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
    void reverseInKGroup(int k)
    {
        // cout << "function starts";
        Node *newHead = head->next;
        Node *ptr = reverseKGroup(head, k);
        cout << "call starts";
        head = newHead;
        // cout << "function completed";
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
    LinkedList l;
    for (int i = 1; i <= 10; i++)
    {
        l.addNode(i);
    }
    // l.print();
    l.reverseInKGroup(2);
    // l.print();
    return 0;
}

//? Video : https://rb.gy/32shq
//? Video : https://www.youtube.com/watch?v=TeDcLjOOiK4&ab_channel=Fraz