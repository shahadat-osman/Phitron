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

int Leaf_Nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int l = Leaf_Nodes(root->left);
    int r = Leaf_Nodes(root->right);

    if(l==0 && r==0)
        return 1;
    
    else
        return l+r;
}

int main()
{
    Node *root = Input();

    BinaryTree_Print(root);
    cout << "\n";

    cout << Leaf_Nodes(root) << "\n";

    return 0;
}

/*
                           10
                20____________________30
        40_____________90         -1______50
    -1_____80      -1______60         70______100
        -1___-1         -1___-1    -1__-1   -1__-1
    
10 20 30 40 90 -1 50 -1 80 -1 60 70 100 -1 -1 -1 -1 -1 -1 -1 -1

 */