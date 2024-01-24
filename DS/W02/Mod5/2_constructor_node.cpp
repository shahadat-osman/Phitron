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
    Node a(20), b(30);

    a.next = &b;

    cout << a.value << "\n";
    cout << a.next->value << "\n";

    return 0;
}