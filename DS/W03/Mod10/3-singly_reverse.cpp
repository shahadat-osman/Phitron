// Shahadat Osman
// Date: 19-12-2023
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
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
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

void reverse(Node *n, Node *&head)
{
    if (n->next == NULL)
    {
        head = n;
        return;
    }

    reverse(n->next, head);
    n->next->next = n;
    n->next = NULL;
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
    print(head);
    reverse(head, head);
    print(head);

    return 0;
}