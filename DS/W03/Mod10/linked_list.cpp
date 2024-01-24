#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;

    LinkedList() // destructor
    {
        head = NULL;
    }

    // Creates a new node with data = value and next = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;

        newnode->data = value;
        newnode->next = NULL;

        return newnode;
    }

    // Insert new value at Head
    void InserAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }

        // If head is !NULL
        a->next = head;
        head = a;
    }

    // Prints the linked list
    void Traverse()
    {
        node* a= head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }

    // Search for a single value
    void SearchDistinctValue()
    {
    }

    // Search all possible occurence
    void SearchAllValue()
    {
    }
};
int main()
{
    class LinkedList l;

    l.InserAtHead(10);
    l.InserAtHead(20);
    l.InserAtHead(30);
    l.InserAtHead(30);

    l.Traverse();

    // l.SearchDistinctValue(10);

    // l.SearchDistinctValue(5);

    // l.SearchAllValue(30);

    return 0;
}