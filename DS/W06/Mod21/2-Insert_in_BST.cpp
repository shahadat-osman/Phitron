// Shahadat Osman
// Date: 16-01-2024
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void print_level(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->val << " ";

        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }
}

Node *binaryTree_ins()
{
    int val;
    cin >> val;

    Node *root;

    if (val == -1)
        root = NULL;

    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *Parent = q.front();
        q.pop();

        Node *left_child, *right_child;
        int left_val, right_val;

        cin >> left_val >> right_val;

        if (left_val == -1)
            left_child = NULL;
        else
            left_child = new Node(left_val);

        if (right_val == -1)
            right_child = NULL;
        else
            right_child = new Node(right_val);

        Parent->left = left_child;
        Parent->right = right_child;

        if (Parent->left)
            q.push(Parent->left);
        if (Parent->right)
            q.push(Parent->right);
    }

    return root;
}

void Insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            Insert(root->left, x);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            Insert(root->right, x);
    }
}

int main()
{
    Node *root = binaryTree_ins();
    int x;
    cin >> x;

    Insert(root, x);
    print_level(root);
    cout << "\n\n";

    return 0;
}