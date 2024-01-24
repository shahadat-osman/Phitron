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

vector<int> Solution(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    vector<int> vect;
    int level = 0;
    if (root)
        q.push(make_pair(root, level));

    while (!q.empty())
    {
        pair<Node *, int> Pr = q.front();
        Node *front_node = Pr.first;
        level = Pr.second;
        q.pop();

        if (level == x)
            vect.push_back(front_node->value);

        if (front_node->left)
            q.push({front_node->left, level + 1});
        if (front_node->right)
            q.push({front_node->right, level + 1});
    }

    return vect;
}

int main()
{
    Node *root = Input();

    int x;
    cin >> x;

    vector<int> vect = Solution(root, x);

    if (vect.empty())
        cout << "Invalid\n";

    else
    {
        for (auto value : vect)
            cout << value << " ";
        cout << "\n";
    }

    return 0;
}