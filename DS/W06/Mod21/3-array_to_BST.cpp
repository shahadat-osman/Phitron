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

Node *Convert(int arr[], int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftRoot = Convert(arr, l, mid - 1);
    Node *rightRoot = Convert(arr, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = Convert(arr, 0, n - 1);
    print_level(root);
    cout << "\n";

    return 0;
}