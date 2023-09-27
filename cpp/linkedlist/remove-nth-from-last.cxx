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
    int       data;
    ListNode* next;
};

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    using Node = ListNode;
    if (head == NULL)
    {
        return NULL;
    }

    int   size = 0;
    Node* tmp = head;

    while (tmp != NULL)
    {
        ++size;
        tmp = tmp->next;
    }
    std::cout << "n size: " << n << " " << size << std::endl;

    int k = n;
    n = size - n;
    if (n == 0)
    {
        return head->next;
    }
    else if (n == 1)
    {
        head->next = head->next->next;
    }
    else
    {
        Node* tmp = head;
        for (int i = 1; i < n; ++i)
        {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
    }
    return head;
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
    // int n;
    // std::cin >> n;
    // ListNode* head = NULL;
    // for (int i = 0; i < n; ++i)
    // {
    //     ListNode* tmp = new ListNode;
    //     std::cin >> tmp->data;
    //     tmp->next = NULL;
    //     head = append(head, tmp);
    // }
    ListNode* head = new ListNode{ 1, NULL };
    head->next = new ListNode{ 2, NULL };
    head->next->next = new ListNode{ 3, NULL };
    head->next->next->next = new ListNode{ 4, NULL };
    head->next->next->next->next = new ListNode{ 5, NULL };
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

int main()
{
    ListNode* head = create();
    head = removeNthFromEnd(head, 5);
    std::cout << "1 2 3 4 5\n";
    print(head);
}
