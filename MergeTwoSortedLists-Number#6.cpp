using namespace std;
#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
       ListNode* curr1 = list1;
       ListNode* curr2 = list2;
       ListNode* dummyNode = new ListNode(-1);
       ListNode* tmp = dummyNode;

       while (curr1 && curr2){
            if (curr1 -> val > curr2 -> val){
                tmp -> next = curr2;
                tmp = curr2;
                curr2 = curr2 -> next;
            } else {
                tmp -> next = curr1;
                tmp = curr1;
                curr1 = curr1 -> next;
            }
       }
       if (curr1) tmp -> next = curr1;
       if (curr2) tmp -> next = curr2;
       return dummyNode -> next;
    }
};

int main()
{
    // Input: list1 = [1,2,4], list2 = [1,3,4]
    ListNode list1 = ListNode(1);
    ListNode two = ListNode(2);
    ListNode three = ListNode(4);
    list1.next = &two;
    two.next = &three;

    ListNode dummy = ListNode(1, &list1);
    ListNode *test = dummy.next;

    ListNode list2 = ListNode(1);
    ListNode two_two = ListNode(3);
    ListNode three_three = ListNode(4);
    list2.next = &two_two;
    two.next = &three_three;

    ListNode dummy2 = ListNode(1, &list2);
    ListNode *test2 = dummy2.next;

    Solution solution;
    ListNode *new_head = solution.mergeTwoLists(test, test2);
    while (new_head -> next){
        cout << new_head -> val;
        new_head = new_head -> next;
    }

    return 0;
}