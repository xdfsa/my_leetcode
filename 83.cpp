#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//解法1：
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode *pre = new ListNode(-1, head);
        ListNode *res = pre;
        ListNode *cur = head;
        ListNode *next = cur->next;
        while(cur && next){
            if(cur->val != next->val){
                pre->next = cur;
                pre = pre->next;
                cur = cur->next;
                next = next->next;
            }else{
                while(next && cur->val == next->val){
                    cur = cur->next;
                    next = next->next;
                }
                    cur = cur->next;
                    pre->next = cur;
                    if(next)
                        next = next->next;

            }
        }
        return res->next;

    }
};

//精简的解法二：
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode *res = new ListNode(-1, head);
//         ListNode *cur = res;
//         while(cur->next && cur->next->next){
//             if(cur->next->val == cur->next->next->val){
//                 int x = cur->next->val;
//                 while(cur->next && cur->next->val == x){
//                     cur->next = cur->next->next;
//                 }
//             }else{
//                 cur = cur->next;
//             }
//         }
//         return res->next;
//     }
// };

int main(){
    ListNode *h = new ListNode(-1);
    ListNode *p = h;
    vector<int> arr{1,2,3,3,4,4,5};
    for(int i = 0; i < arr.size(); i++){
        ListNode *t = new ListNode(arr[i]);
        p->next = t;
        p = p->next;
    }
    Solution s1;
    ListNode *res = s1.deleteDuplicates(h->next);
    return 0;
}