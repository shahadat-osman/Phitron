// Shahadat Osman
// Date: 16-12-2023
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
        temp = temp->next;
        count++;
    }

    return count;
}

void tail_insert(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void head_insert(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void position_insert(Node *&head, int pos, int value)
{
    int sz = size_is(head);
    if (pos == 0)
        head_insert(head, value);
    else if (pos > sz)
    {
        cout << "Invalid\n";
        return;
    }
    else if (pos == sz)
        tail_insert(head, value);

    else
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    print(head);
}

int main()
{
    Node *head = NULL;

    int value, queries, position;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        tail_insert(head, value);
    }
    // print(head);
    cin >> queries;
    while (queries--)
    {
        cin >> position >> value;
        position_insert(head, position, value);
    }

    return 0;
}