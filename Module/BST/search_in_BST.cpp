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

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return nullptr;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1)
        {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        if (rightVal != -1)
        {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }

    return root;
}

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    if (search(root, x))
        cout << "Yes, Found" << endl;
    else
        cout << "No, Not Found" << endl;
    return 0;
}
