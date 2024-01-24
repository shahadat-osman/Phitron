// Shahadat Osman
// Date: 20-12-2023
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
    newNode->prev = tail;
    tail = newNode;
}

void palindrome_check(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->value != j->value)
        {
            cout << "NO\n";
            return;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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
    // print(head);
    palindrome_check(head, tail);

    return 0;
}