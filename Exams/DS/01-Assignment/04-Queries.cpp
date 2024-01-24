// Shahadat Osman
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
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
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

void tail_insert(Node *&head, Node *&tail, int value)
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
        head = newNode;
    }
}

void delete_pos(Node *head, Node *&tail, int value)
{
    Node *temp = head;

    for (int i = 1; i < value; i++)
    {
        temp = temp->next;
    }

    if (value == (size_is(head) - 1))
        tail = temp;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;

    delete deleteNode;
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
        if (x == 0)
        {
            head_insert(head, tail, value);
        }
        else if (x == 1)
        {
            tail_insert(head, tail, value);
        }
        else if (x == 2)
        {
            if (head == NULL)
            {   
                print(head);
                continue;
            }
            else if (value == 0)
                delete_head(head);

            else if (value < size_is(head))
                delete_pos(head, tail, value);
        }
        print(head);
    }

    return 0;
}