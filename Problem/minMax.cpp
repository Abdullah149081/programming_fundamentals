#include <iostream>
#include <climits>
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

void findMinMaxDifference(Node *head)
{
    if (head == NULL)
    {
        cout << 0 << endl;
        return;
    }

    // Initialize min and max values
    int minVal = head->val;
    int maxVal = head->val;

    // Traverse the linked list
    for (Node *current = head; current != NULL; current = current->next)
    {
        if (current->val < minVal)
            minVal = current->val;
        if (current->val > maxVal)
            maxVal = current->val;
    }

    // Output the difference
    cout << (maxVal - minVal) << endl;
}

void appendNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node *head = NULL, *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        appendNode(head, tail, val);
    }

    findMinMaxDifference(head);

    return 0;
}
