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
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *root)
{

    if (root == nullptr)
    {

        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(2);
    Node *c = new Node(6);
    Node *d = new Node(5);
    Node *e = new Node(11);
    Node *f = new Node(9);
    Node *g = new Node(9);
    Node *h = new Node(5);

    root->left = a;
    root->right = f;
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    f->right = g;
    g->left = h;

    level_order(root);

    return 0;
}
