// Shahadat Osman
// Date: 05-12-2023
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
void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}
void insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void insert_at_position(Node *head, int value, int pos)
{
    Node *new_Node = new Node(value);

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
}
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
int main()
{
    Node *head = NULL;
    int value, pos;
    while (true)
    {
        cout << "Op 1: Insert at tail\n";
        cout << "Op 2: Insert at any Position\n";
        cout << "Op 3: Insert at head\n";
        cout << "Op 9: Print Linked List\n";
        cout << "Op 0: Terminate\n";

        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter Value: ";
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (op == 2)
        {
            cout << "Enter Value and Pos: ";
            cin >> value >> pos;
            if (pos == 0)
            {
                insert_at_head(head, value);
                continue;
            }
            
            insert_at_position(head, value, pos);
        }
        else if (op == 3)
        {
            cout << "Enter Value: ";
            cin >> value;
            insert_at_head(head, value);
        }
        else if (op == 9)
            display(head);
        else if (op == 0)
            break;
    }

    return 0;
}