// Shahadat Osman
// Date: 02-01-2024
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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        Node *newNode = new Node(value);
        sz++;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        Node *deleteNode = head;
        sz--;

        if (head->next == NULL)
            tail = NULL;
        else
        {
            head = head->next;
        }
        delete deleteNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }

    return 0;
}