/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;
        
        ListNode* preHead = new ListNode(0);
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* midHead = slow->next;
        slow->next = nullptr;
        
        ListNode* prev = nullptr;
        ListNode* after = nullptr;
        ListNode* curr = midHead;
        while (curr != nullptr) {
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }
        midHead = prev;
        
        ListNode* temp = preHead;
        while (midHead != nullptr && head != nullptr) {
            temp->next = head;
            temp = head;
            head = head->next;
            temp->next = midHead;
            temp = midHead;
            midHead = midHead->next;
        }
        temp->next = head;
        
        head = preHead->next; // Update head with the reordered list
        delete preHead; // Deallocate memory for preHead to prevent memory leak
    }
};
