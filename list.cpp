#include <bits/stdc++.h> //create n node linked list
using namespace std;     // length, mid of linkedlist
struct node
{
    int val;
    node *next;
    node(int x)
    {
        val = x;
        next = NULL;
    }
};
int main()
{
    node *head = NULL;
    node *temp = NULL;
    cout << "Enter number of nodes" << endl;
    int x;
    cin >> x;
    while (x--)
    {
        cout << "enter value" << endl;
        int v;
        cin >> v;
        node *newnode = new node(v);
        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    temp = head;
    int c = 0;
    while (temp != NULL)
    {
        if (head == NULL)
        {
            c = 0;
            cout << "EMPTY" << endl;
            break;
        }
        cout << temp->val << endl;
        temp = temp->next;
        c++;
    }
    temp = head;
    cout << "Length =" << c << "\n";
    for (int i = 0; i < (c / 2); i++)
    {
        temp = temp->next;
    }
    if (head != NULL)
        cout << temp->val << endl;

    return 0;
}