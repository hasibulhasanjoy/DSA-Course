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
    void removeDuplicateFromSortedLinkedList()
    {
        Node *p1 = head;
        Node *p2 = head->next;
        while (p2 != NULL)
        {
            if (p1->data == p2->data)
            {
                Node *temp = p2;
                p1->next = p2->next;
                p2 = p2->next;
                free(temp);
            }
            else
            {
                p1 = p1->next;
                p2 = p2->next;
            }
        }
    }
    void removeDuplicateFromUnSortedLinkedList()
    {
        unordered_map<int, bool> visited;
        Node *current = head;
        Node *previousNode = NULL;
        while (current != NULL)
        {
            if (visited[current->data] == true)
            {
                Node *temp = current;
                previousNode->next = current->next;
                free(current);
            }
            else
            {
                visited[current->data] = true;
                previousNode = current;
            }
            current = previousNode->next;
        }
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
    l.addNode(1);
    l.addNode(2);
    l.addNode(2);
    l.addNode(2);
    l.addNode(3);
    l.addNode(3);
    l.addNode(4);
    l.addNode(5);
    l.print();
    l.removeDuplicateFromUnSortedLinkedList();
    l.print();
    return 0;
}