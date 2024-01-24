// Shahadat Osman
// Date: 15-12-2023
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
void insrt_tail(Node *&head, int value)
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
int main()
{
    Node *head = NULL;

    int value;
    while (true)
    {
        int op;
        cout << "Op 1: Insert at tail\n"
             << "Op 9: Print Linked List\n"
             << "Op 0: Terminate\n";

        cin >> op;

        if (op == 1)
        {
            cout << "Enter Value: ";
            cin >> value;
            insrt_tail(head, value);
        }
        else if (op == 9)
            print(head);

        else if (op == 0)
            return 0;
    }

    return 0;
}