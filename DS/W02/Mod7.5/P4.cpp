// Shahadat Osman
// Date: 17-12-2023
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int size_is(Node *head)
{
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void tail_ins(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void recurs(Node *node)
{
    if (node == NULL)
        return;

    recurs(node->next);
    cout << node->value<<" ";
}

void find_max(Node *node)
{
    int maxx=node->value;
    while(node!=NULL)
    {
        if(node->value>maxx)
            maxx=node->value;
        
        node=node->next;
    }

    cout<<maxx<<"\n";
}

int main()
{
    Node *head = NULL, *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        tail_ins(head, tail, value);
    }

    //recurs(head);
    find_max(head);

    return 0;
}