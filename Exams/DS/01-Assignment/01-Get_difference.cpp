// Shahadat Osman
// Date: 16-12-2023
#include <bits/stdc++.h>
using namespace std;

int mini = INT_MAX;
int maxi = INT_MIN;

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

int tail_insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (value > maxi)
        maxi = value;
    if (value < mini)
        mini = value;

    int ans = maxi - mini;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return ans;
    }
    tail->next = newNode;
    tail = newNode;

    return ans;
}

int main()
{
    Node *head = NULL, *tail = NULL;
    int differ = 0;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        differ = tail_insert(head, tail, value);
    }
    // print(head);
    cout << differ << "\n";

    return 0;
}