/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param node: a node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode *node) {
        swap(node->val, node->next->val);
        node->next = node->next->next;
    }
};
