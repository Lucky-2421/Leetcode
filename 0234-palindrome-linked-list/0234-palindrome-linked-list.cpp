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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL) return false;
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        
        vector<int>ans;
        ans=arr;
        reverse(ans.begin(),ans.end());
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=ans[i]){
                return false;
            }
        }
        return true;
    }
};