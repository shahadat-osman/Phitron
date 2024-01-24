// Shahadat Osman
// Date: 09-01-2024
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

void BinaryTree_Print(Node *root) // level order
{
    if (!root)
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

Node *Input()
{
    int root_val;
    cin >> root_val;

    Node *root;
    if (root_val == -1)
        root = NULL;
    else
        root = new Node(root_val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *P = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left_c, *right_c;
        if (l == -1)
            left_c = NULL;
        else
            left_c = new Node(l);

        if (r == -1)
            right_c = NULL;
        else
            right_c = new Node(r);

        P->left = left_c;
        P->right = right_c;

        if (P->left)
            q.push(P->left);
        if (P->right)
            q.push(P->right);
    }

    return root;
}

int count_Nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count_Nodes(root->left);
    int r = count_Nodes(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = Input();

    BinaryTree_Print(root);
    cout << "\n";

    cout << count_Nodes(root) << "\n";

    return 0;
}

/*
                           10
                20____________________30
        40_____________90         -1______50
    -1_____80      -1______60         70______100
        -1___-1         -1___-1    -1__-1   -1__-1

 */