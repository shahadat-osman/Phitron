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


int size_is(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

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

void remove_dupli(Node *head, Node *node, int val)
{
    while(node->next != NULL)
    {
        if (node->next->value == val)
        {
            Node *deleteNode = node->next;
            node->next = node->next->next;
            delete deleteNode;
        }
        else 
            node=node->next;
    }
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

    Node *temp = head;
    while (temp != NULL)
    {
        remove_dupli(head, temp, temp->value);
        temp = temp->next;
    }

    print(head);

    return 0;
}