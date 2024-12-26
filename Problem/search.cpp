#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void input(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void findIdx(Node *head, int x)
{
    int idx = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == x)
        {
            cout << idx << endl;
            return; // Stop after finding the first occurrence
        }
        idx++;
    }
    // If not found
    cout << -1 << endl;
}

void clearList(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL, *tail = NULL;

        int val;
        while (1)
        {
            cin >> val;
            if (val == -1)
                break;
            input(head, tail, val);
        }

        int x;
        cin >> x;

        findIdx(head, x);

        // Free allocated memory for the linked list
        clearList(head);
    }

    return 0;
}
