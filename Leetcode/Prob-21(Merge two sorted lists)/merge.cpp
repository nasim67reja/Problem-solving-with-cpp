#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    // list1= 1,2,4 list2=1,3,4
    // output = 1,1,2,3,4,4
    ListNode *p1 = list1;
    ListNode *p2 = list2;
    ListNode *newHead = new ListNode(0); // Create a dummy node for the merged list.
    ListNode *current = newHead;         // Use 'current' to keep track of the last node in the merged list.
    while (p1 != nullptr && p2 != nullptr)
    {
        if (p1->data < p2->data)
        {
            current->next = p1;
            p1 = p1->next;
        }
        else
        {
            current->next = p2;
            p2 = p2->next;
        }
        current = current->next; // Move 'current' to the last node in the merged list.
    }

    // check if element exist
    while (p1 != nullptr)
    {
        current->next = p1;
        current = p1;
        p1 = p1->next;
    }
    while (p2 != nullptr)
    {
        current->next = p2;
        current = p2;
        p2 = p2->next;
    }

    // The merged list starts from the next node of the dummy node.
    ListNode *result = newHead->next;
    delete newHead; // Delete the dummy node.

    return result;
}

int main()
{

    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode *newHead = mergeTwoLists(head1, head2);

    cout << "List1: ";
    printList(head1);
    cout << endl;
    cout << "List2: ";
    printList(head2);
    cout << endl;
    cout << "Merge ";
    printList(newHead);
    return 0;
}

// 21. Merge Two Sorted Lists
//     Solved
//         Easy
//             Topics
//                 Companies
//                     You are given the heads of two sorted linked lists list1 and list2.

//     Merge the two lists into one sorted list.The list should be made by splicing together the nodes of the first two lists.

//     Return the head of the merged linked list.

//     Example 1 :

//     Input : list1 = [ 1, 2, 4 ],
//             list2 = [ 1, 3, 4 ] Output : [ 1, 1, 2, 3, 4, 4 ] Example 2 :

//     Input : list1 = [],
//             list2 = [] Output : [] Example 3 :

//     Input : list1 = [],
//             list2 = [0] Output : [0]

//                                  Constraints :

//     The number of nodes in both lists is in the range[0, 50]
//         .- 100 <= Node.val <= 100 Both list1 and
//                     list2 are sorted in non - decreasing order.solve this problem using c++