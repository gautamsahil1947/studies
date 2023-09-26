// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
struct ListNode
{
    int data;
    ListNode* next;
};

class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if (head == NULL)
        {
            return NULL;
        }
        int size = 0;
        using Node = ListNode;
        Node* tmp = head;
        while (tmp != NULL)
        {
            ++size;
            tmp = tmp->next;
        }
        return 0;
    }

    void print(ListNode* head)
    {
        while (head != NULL)
        {
            std::cout << head->data << " ";
            head = head->next;
        }
        std::cout << "\n";
    }
    ListNode* create()
    {
        int n;
        std::cin >> n;
        ListNode* head = NULL;
        for (int i = 0; i < n; ++i)
        {
            ListNode* tmp = new ListNode;
            std::cin >> tmp->data;
            tmp->next = NULL;
            head = append(head, tmp);
        }
        return head;
    }

    ListNode* append(ListNode* head, ListNode* tmp)
    {
        if (head == NULL)
        {
            return tmp;
        }

        ListNode* t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = tmp;
        return head;
    }
};

int main()
{
    Solution sahil;
    ListNode* head = sahil.create();
    sahil.print(head);
}
