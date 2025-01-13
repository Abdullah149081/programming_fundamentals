#include <bits/stdc++.h>
using namespace std;

/*
https://docs.google.com/document/d/1MioUnRGIA_F5-X7--OJAZ7aAd9pM1V156OMhxto7FHY/edit?tab=t.0
*/

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

    return 0;
}
