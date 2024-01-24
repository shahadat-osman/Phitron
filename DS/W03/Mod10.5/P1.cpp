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
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

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

void check(Node *head, Node *head1)
{
    while (head != NULL)
    {
        if (head->value != head1->value)
        {
            cout << "NO\n";
            return;
        }
        head = head->next;
        head1 = head1->next;
    }
    cout << "YES\n";
}

int main()
{
    Node *head = NULL, *tail = NULL;
    Node *head1 = NULL, *tail1 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        tail_ins(head, tail, value);
    }

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        tail_ins(head1, tail1, value);
    }

    if (size_is(head) != size_is(head1))
    {
        cout << "NO\n";
    }
    else
        check(head, head1);

    // print(head);
    // print(head1);

    return 0;
}