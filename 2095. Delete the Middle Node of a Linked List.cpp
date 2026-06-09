// time complexity: O(n)
// space complexity: O(1)


#include<iostream>
  using namespace std;

   struct ListNode{
      int val;
      ListNode* next;
        
        ListNode(int x){
            val=x;
            next=nullptr;
        }
   };


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* slow = head;
        ListNode* temp = nullptr;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=slow->next;
        delete slow;
        return head;
    }
};

     void printsolution(ListNode* head){
          while(head!=nullptr){
            cout<<head->val;
            if(head->next!=nullptr){
                cout<<"->";
            }
            head=head->next;
          }
     }


     int main(){
        Solution obj;
        int n;
        cin>>n;
        int x;
        cin>>x;
        ListNode* head = new ListNode(x);
        ListNode* temp=head;
        for(int i=1; i<n; i++){
            cin>>x;
            temp->next=new ListNode(x);
            temp=temp->next;
        }
        printsolution(head);
        
        head = obj.deleteMiddle(head);
        printsolution(head);

        return 0;
     }