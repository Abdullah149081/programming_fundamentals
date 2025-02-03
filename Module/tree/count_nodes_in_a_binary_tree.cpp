#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *input()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return nullptr;
    }
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int lval, rval;
        cin >> lval >> rval;

        if (lval != -1)
        {
            current->left = new Node(lval);
            q.push(current->left);
        }

        if (rval != -1)
        {
            current->right = new Node(rval);
            q.push(current->right);
        }
    }
    return root;
}

int count_node(Node *root)
{
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 1;
    }
    return 1 + count_node(root->left) + count_node(root->right);
}

int main()
{
    Node *root = input();
    cout << count_node(root) << endl;

    return 0;
}
