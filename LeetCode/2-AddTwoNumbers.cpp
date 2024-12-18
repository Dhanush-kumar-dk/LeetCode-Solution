#Javascript
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    if (l1 == null && l2 == null) {
        return null
    }
    let value = (l1 == null ? 0 : l1.val) + (l2 == null ? 0 : l2.val);
    let carry = null;
    if (l1 != null && l1.next != null) {
        carry = l1.next;
    }
    if (value >= 10) {
        value -= 10;
        if (carry != null) {
            carry.val += 1;
        } else {
            carry = new ListNode(1, null);
        }
    }
    let output = new ListNode(value, addTwoNumbers(carry, l2 == null ? null : l2.next));
    return output;
}
