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

void check_sorted(Node *head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->value > temp->next->value)
        {
            cout << "NO\n";
            return;
        }
        temp = temp->next;
    }
    cout << "YES\n";
}

int main()
{
    Node *head = NULL;

    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        tail_insert(head, value);
    }
    check_sorted(head);

    return 0;
}