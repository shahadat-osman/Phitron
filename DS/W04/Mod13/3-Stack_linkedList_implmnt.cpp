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

class myStack
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
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        Node *deleteNode = tail;
        sz--;

        if (tail->prev == NULL)
        {
            head = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->value;
    }
    int size_is()
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
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << "\n";
        st.pop();
    }

    return 0;
}