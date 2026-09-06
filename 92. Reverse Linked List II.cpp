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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == nullptr || head->next == nullptr || left == right) {
            return head;
        }

        ListNode* low = head;
        ListNode* high = head;
        ListNode* prev = nullptr;

       
        int count1 = 0;

        while (low != nullptr) {
            count1++;

            if (count1 == left) {
                break;
            }

            prev = low;
            low = low->next;
        }

     
        int count2 = 0;

        while (high != nullptr) {
            count2++;

            if (count2 == right) {
                break;
            }

            high = high->next;  
        }

    
        ListNode* nxt = high->next;

        ListNode* prev1 = nullptr;
        ListNode* curr = low;

        while (curr != nxt) {
            ListNode* nxt1 = curr->next;

            curr->next = prev1;
            prev1 = curr;      
            curr = nxt1;
        }

     
        if (prev != nullptr) {
            prev->next = prev1;
        } 
        else {
            head = prev1;
        }

        low->next = nxt;

        return head;
    }
};

     ListNode* printSolution(ListNode* head){
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
     ListNode* head=new ListNode(x);
     ListNode* temp = head;
     for(int i=1; i<n; i++){
         cin>>x;
         temp->next=new ListNode(x);
         temp=temp->next;
     }
     int left,right;
     cin>>left>>right;
     printSolution(head);
     head=obj.reverseBetween(head,left,right);
     printSolution(head);
    return 0;
  }

