// Shahadat Osman
// Date: 16-12-2023
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

void insert_at_tail(Node *&head, int value)
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

void dupli_check(Node *head)
{
    vector<int>freq(101,0);

    Node *temp=head;
    while(temp!=NULL)
    {
        freq[temp->value]+=1;
        temp=temp->next;
    }
    for(int i=0; i<101; i++)
    {
        if(freq[i]>1)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";

}

int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        insert_at_tail(head, value);
    }
    //print(head);
    dupli_check(head);

    return 0;
}