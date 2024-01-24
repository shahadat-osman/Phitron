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
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n";
}

void reverse_print(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << "\n";
}

int size_is(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
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
    newNode->prev = tail;
    tail = newNode;
}

void head_insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
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
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Node *head = NULL, *tail = NULL;

    int queries;
    cin >> queries;
    while (queries--)
    {
        int x, value;
        cin >> x >> value;

        if (x > size_is(head))
        {
            cout << "Invalid\n";
            continue;
        }
        else if (x == size_is(head))
            tail_ins(head, tail, value);

        else if (x == 0)
            head_insert(head, tail, value);

        else
        {
            position_ins(head, x, value);
        }

        print(head);
        reverse_print(tail);
    }

    return 0;
}