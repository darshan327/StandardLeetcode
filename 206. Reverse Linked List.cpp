// time complexity : O(n)
// space complexity : O(1)




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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
       ListNode* curr = head;
       ListNode* temp = head;
       ListNode* prev = nullptr;
       while(temp!=nullptr){
        temp=temp->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
       }    
       return prev;
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
        temp->next=new ListNode(x);
        temp=temp->next;
    }

    printSolution(head);

     head=obj.reverseList(head);
     cout<<"after the reverse";
     printSolution(head);

    return 0;
   }