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
            if (ptr2->next == NULL) // last node reached
            {
                addNode(data);
                return;
            }
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
            if (ptr2->next == NULL) // Last Node Reached
            {
                ptr1->next = NULL;
                free(ptr2);
                return;
            }
        }
        Node *temp = ptr2->next;
        ptr1->next = temp;
        temp->prev = ptr1;
        free(ptr2);
    }
    void printForward()
    {
        Node *ptr = head;
        int element = 1;
        while (ptr != NULL)
        {
            cout << "(" << element++ << ")" << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void printReverse()
    {
        Node *ptr = head;
        int element = 1;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            element++;
        }
        while (ptr != NULL)
        {
            cout << "(" << element-- << ")" << ptr->data << " ";
            ptr = ptr->prev;
        }
        cout << endl;
    }
};

void insert(DoublyLinkedList &list)
{
    list.insertNode(1, 10000);
    list.insertNode(3, 3000);
    list.insertNode(7, 700);
    list.insertNode(10, 1234);
    list.insertNode(11, 1111);
    list.insertNode(16, 16666);
    list.insertNode(17, 7777);
}

void Delete(DoublyLinkedList &list)
{
    list.deleteNode(1);
    list.deleteNode(2);
    list.deleteNode(5);
    list.deleteNode(7);
    list.deleteNode(7);
    list.deleteNode(11);
    list.deleteNode(11);
}
int main()
{
    DoublyLinkedList list1;
    for (int i = 1; i <= 10; i++)
    {
        list1.addNode(i);
    }
    cout << endl;
    list1.printForward();
    list1.printReverse();
    //! Insert
    insert(list1);
    cout << endl;
    list1.printForward();
    list1.printReverse();
    //! Delete
    Delete(list1);
    cout << endl;
    list1.printForward();
    list1.printReverse();
    return 0;
}