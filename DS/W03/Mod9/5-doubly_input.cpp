// Shahadat Osman
// Date: 18-12-2023
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next, *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
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

void head_ins(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void position_ins(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void tail_ins(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void delete_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;

    head = head->next;
    head->prev = NULL;

    delete deleteNode;
}

void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;

    tail = tail->prev;
    tail->next = NULL;

    delete deleteNode;
}

int main()
{
    Node *head = NULL, *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;

        tail_ins(head, tail, value);
    }

    print(head);
    print_reverse(tail);

    return 0;
}