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

void level_order(Node *root)
{
    if (!root)
    {
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        cout << current->val << " ";

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }

    cout << endl;
}

void insert(Node *&root, int val)
{
    if (root == nullptr)
    {
        root = new Node(val);
        return;
    }

    if (val < root->val)
        insert(root->left, val); // Recursively insert in left subtree
    else if (val > root->val)
        insert(root->right, val); // Recursively insert in right subtree
}

int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert(root, val);
    insert(root, 11);
    level_order(root);

    return 0;
}
