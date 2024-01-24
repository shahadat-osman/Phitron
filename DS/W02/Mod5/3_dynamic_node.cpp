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

int main()
{
    Node *a = new Node(20);
    Node *b = new Node(30);

    a->next = b;

    cout << a->value << "\n";
    cout << a->next->value << "\n";

    return 0;
}