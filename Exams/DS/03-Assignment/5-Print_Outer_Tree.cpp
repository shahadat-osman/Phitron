// Shahadat Osman
// Date: 13-01-2024
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left, *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *Input()
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
        Node *Pr = q.front();
        q.pop();

        Node *leftChild, *rightChild;
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal == -1)
            leftChild = NULL;
        else
            leftChild = new Node(leftVal);

        if (rightVal == -1)
            rightChild = NULL;
        else
            rightChild = new Node(rightVal);

        Pr->left = leftChild;
        Pr->right = rightChild;

        if (Pr->left)
            q.push(Pr->left);
        if (Pr->right)
            q.push(Pr->right);
    }

    return root;
}

void print_tree(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->value << " ";

        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }
}

vector<int> vect;
void left_side(Node *root)
{
    if (root == NULL)
        return;

    if ((root->left))
    {
        left_side(root->left);
        vect.push_back(root->left->value);
        return;
    }
    else if ((root->right))
    {
        left_side(root->right);
        vect.push_back(root->right->value);
        return;
    }
}
void right_side(Node *root)
{
    if (root == NULL)
        return;

    if ((root->right))
    {
        vect.push_back(root->right->value);
        right_side(root->right);
        return;
    }
    else if ((root->left))
    {
        vect.push_back(root->left->value);
        right_side(root->left);
        return;
    }
}

int main()
{
    Node *root = Input();

    if (root->left)
    {
        left_side(root->left);
        vect.push_back(root->left->value);
    }

    vect.push_back(root->value);

    if (root->right)
    {
        vect.push_back(root->right->value);
        right_side(root->right);
    }

    for (auto value : vect)
        cout << value << " ";
    cout << "\n";

    return 0;
}