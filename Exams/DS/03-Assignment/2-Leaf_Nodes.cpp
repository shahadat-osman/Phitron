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

vector<int> vect;
bool Solution(Node *root)
{
    if (root == NULL)
        return true;

    bool l = Solution(root->left);
    bool r = Solution(root->right);

    if (l == true && r == true)
    {
        vect.push_back(root->value);
    }

    return false;
}

int main()
{
    Node *root = Input();

    Solution(root);

    sort(vect.begin(), vect.end());

    reverse(vect.begin(), vect.end());

    for (auto print : vect)
        cout << print << " ";
    cout << "\n";

    return 0;
}