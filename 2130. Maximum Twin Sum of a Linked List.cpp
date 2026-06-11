// time complexity: O(n)



#include<iostream>
#include<climits>
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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        ListNode* temp=slow;
        while(curr!=nullptr){
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        int maxi=INT_MIN;
        ListNode* curr1 = head;
        ListNode* curr2 = prev;
         while(curr2!=nullptr){
            maxi=max(maxi,curr1->val+curr2->val);
            curr1=curr1->next;
            curr2=curr2->next;
         }
         return maxi;
    }
};

   void printSolution(ListNode* head){
     while(head!=nullptr){
        cout<<head->val;
        if(head->next!=nullptr){
            cout<<"-->";
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
        ListNode* temp = head;
        for(int i=1; i<n; i++){
            cin>>x;
            temp->next= new ListNode(x);
            temp=temp->next;
        }
        cout<<"this is the list before the operation"<<endl;
        printSolution(head);
        int ans =obj.pairSum(head);
        cout<<ans<<endl;
        printSolution(head);
        return 0;
    }