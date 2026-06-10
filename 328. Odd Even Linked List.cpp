// time complexity: O(n)
// space complexity: O(n)



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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode* odddummy = new ListNode(head->val);
        ListNode* odd = odddummy;
        ListNode* temp=head->next;
        ListNode* evendummy = new ListNode(0);
        ListNode* even = evendummy;
        int flag=0;
        while(temp!=nullptr){
           if(flag==0){
            even->next=new ListNode(temp->val);
            even=even->next;
            flag=1;
           }else{
             odd->next=new ListNode(temp->val);
             odd=odd->next;
             flag=0;
           }
           temp=temp->next;
        }
       odd->next=evendummy->next;
       return odddummy;
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
        int n,x;
        cin>>n>>x;
        ListNode* head = new ListNode(x);
        ListNode* temp = head;
        for(int i=1; i<n; i++){
            cin>>x;
            temp->next = new ListNode(x);
            temp=temp->next;
        }
        cout<<"before operation";
        printSolution(head);
        head = obj.oddEvenList(head);
        cout<<"after operation";
        printSolution(head);
        return 0;
    }