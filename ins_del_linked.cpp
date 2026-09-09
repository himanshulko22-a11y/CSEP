#include <iostream>   //insertion & deletion in linkedlist
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *head = NULL;
void insert(int x, int k)
{
    Node *newNode = new Node(x);

    if (k == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < k - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}
void remove(int k)
{
    if (head == NULL)
        return;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < k - 1; i++)
        temp = temp->next;

    Node *del = temp->next;
    temp->next = del->next;
    delete del;
}
void display()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(15, 2);

    cout << "After insertion: ";
    display();

    remove(2);

    cout << "\nAfter deletion: ";
    display();
}
