class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;     // initially pointing to nothing
        ListNode* curr = head;        // pointing to the head of the list

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;  // new pointer to store next node
            curr->next = prev;                // reverse the link
            prev = curr;                      // move prev forward
            curr = nextNode;                  // move curr forward
        }

        return prev;  // new head of reversed list
    }
};
