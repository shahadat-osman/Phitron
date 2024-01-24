// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string address;
    Node *next, *prev;
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void tail_ins(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);

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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Node *head = NULL, *tail = NULL, *indicator = NULL;

    while (true)
    {
        string address;
        cin >> address;
        if (address == "end")
            break;
        tail_ins(head, tail, address);
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        string cmnd, add;

        cin >> cmnd;

        if (cmnd == "visit")
        {
            cin >> add;
            Node *temp = head;
            while (temp != NULL && temp->address != add)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                cout << "Not Available\n";
            }
            else
            {
                indicator = temp;
                cout << temp->address << "\n";
            }
        }
        else if (cmnd == "prev")
        {
            Node *temp = head;
            while (temp != indicator)
            {
                temp = temp->next;
            }
            if (temp->prev == NULL)
                cout << "Not Available\n";
            else
            {
                indicator = temp->prev;
                cout << temp->prev->address << "\n";
            }
        }
        else if (cmnd == "next")
        {
            Node *temp = head;
            while (temp != indicator)
            {
                temp = temp->next;
            }
            if (temp->next == NULL)
                cout << "Not Available\n";
            else
            {
                indicator = temp->next;
                cout << temp->next->address << "\n";
            }
        }
    }

    return 0;
}