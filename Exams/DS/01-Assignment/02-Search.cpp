//Shahadat Osman
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
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n";
}

void tail_insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void dupli_check(Node *head, int x)
{
    Node *temp=head;

    int count=-1;
    while(temp!=NULL)
    {
        count++;
        if(temp->value==x)
            break;
        temp=temp->next;
    }
    if(temp!=NULL)
        cout<<count<<"\n";
    else
        cout<<"-1\n";


}

void solve()
{
    Node *head = NULL, *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        tail_insert(head, tail, value);
    }
    //print(head);
    int x;
    cin>>x;
    dupli_check(head,x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}