// Shahadat Osman
// Date: 03-01-2024
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
    list<int> l;
    void push(int value)
    {
        l.push_back(value);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int sz()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue list_queue;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list_queue.push(x);
    }
    while (!list_queue.empty())
    {
        cout << list_queue.front();
        list_queue.pop();
    }

    return 0;
}