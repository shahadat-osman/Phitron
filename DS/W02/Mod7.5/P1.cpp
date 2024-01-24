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

    if (size_is(head) == size_is(head1))
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}