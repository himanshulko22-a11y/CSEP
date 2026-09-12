// ENTIRE CODE BOILERPLATE IS MADE AS SIMILAR AS LEETCODE #problem no. 1836
#include <bits/stdc++.h>
using namespace std; // REMOVE DUPLICATES FROM UNSORTED LINKEDLIST

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// =============================  MAIN LOGIC HERE  ===========================
class Solution
{
public:
    ListNode *deleteDuplicatesUnsorted(ListNode *head)
    {
        if(head==NULL)
        return head;
        ListNode *temp = head,*p=NULL;
        unordered_map<int, int> mp;
        while(temp)
        {
            if(mp[temp->val]==0)
            {
                p=temp;
                mp[temp->val]++;
                temp=temp->next;
            }
            else
            {
                ListNode *temp2=temp;
                p->next=p->next->next;
                delete temp2;
                temp=p->next;
            }
        }
        return head;
    }
};
//============================================================================
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;

    ListNode *head = nullptr;
    ListNode *temp = nullptr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ListNode *newNode = new ListNode(x);

        if (head == nullptr)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    Solution obj;

    head = obj.deleteDuplicatesUnsorted(head);

    printList(head);

    return 0;
}