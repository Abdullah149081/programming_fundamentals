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

// Function to input the binary tree in level-order
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

// Level-order traversal (Breadth-first)
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

// Pre-order traversal (Depth-first)
void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

// In-order traversal (Depth-first)
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Post-order traversal (Depth-first)
void postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{
    // Input tree
    Node *root = input_tree();

    // Level-order traversal
    cout << "Level-order traversal: ";
    level_order(root);

    // Pre-order traversal
    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;

    // In-order traversal
    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    // Post-order traversal
    cout << "Post-order traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
