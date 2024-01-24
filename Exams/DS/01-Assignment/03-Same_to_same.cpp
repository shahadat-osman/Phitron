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

int sz(Node *head)
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

void clone_check(Node *head1, Node *head2)
{
    while (head1 != NULL)
    {
        if (head1->value != head2->value)
        {
            cout << "NO\n";
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        tail_insert(head1, tail1, value);
    }
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        tail_insert(head2, tail2, value);
    }
    // print(head1);
    // print(head2);

    int size1 = sz(head1);
    int size2 = sz(head2);

    if (size1 != size2)
    {
        cout << "NO\n";
    }
    else
    {
        clone_check(head1, head2);
    }

    return 0;
}