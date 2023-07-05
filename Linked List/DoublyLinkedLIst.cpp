#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

class DoublyLinkedList
{
private:
    Node *head, *tail;

public:
    DoublyLinkedList()
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
            head->prev = NULL;
            head->next = NULL;
            tail = head;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void insertNode(int index, int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        if (index == 1)
        {
            newNode->next = head;
            head->prev = newNode;
            newNode->prev = NULL;
            head = newNode;
            return;
        }
        Node *ptr1 = head;
        Node *ptr2 = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if (ptr1->next == NULL and ptr2 == NULL)
        {
            addNode(data);
            return;
        }
        ptr1->next = newNode;
        newNode->prev = ptr1;
        newNode->next = ptr2;
        ptr2->prev = newNode;
    }
    void deleteNode(int index)
    {
        if (index == 1)
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            free(temp);
            return;
        }
        Node *ptr1 = head;
        Node *ptr2 = head->next;
        for (int i = 1; i < index - 1; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if (ptr1->next == NULL and ptr2 == NULL)
                break;
        }
        if (ptr1->next == NULL and ptr2 == NULL)
        {
            Node *temp = ptr1;
            tail = ptr1->prev;
            tail->next = NULL;
            free(temp);
            return;
        }
        // cout << ptr1->data << " " << ptr2->data << endl;
        Node *temp = ptr2->next;
        ptr1->next = temp;
        temp->prev = ptr1;
        free(ptr2);
    }
    void printForward()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void printReverse()
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->prev;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList list1;
    for (int i = 1; i <= 10; i++)
    {
        list1.addNode(i);
    }
    cout << "                       *** Before insertion ***" << endl;
    list1.printForward();
    list1.printReverse();
    list1.insertNode(1, 10000);
    list1.insertNode(3, 3000);
    list1.insertNode(7, 700);
    list1.insertNode(10, 1234);
    list1.insertNode(11, 1111);
    list1.insertNode(16, 16666);
    list1.insertNode(17, 7777);
    cout << "                       *** After insertion ***" << endl;
    list1.printForward();
    list1.printReverse();
    list1.deleteNode(1);
    list1.deleteNode(2);
    list1.deleteNode(5);
    list1.deleteNode(7);
    list1.deleteNode(7);
    list1.deleteNode(10);
    list1.deleteNode(11);
    cout << "                      ***After Deletion ***" << endl;
    list1.printForward();
    list1.printReverse();
    return 0;
}