//https://leetcode.com/problems/palindrome-linked-list/submissions/
 bool isEven(ListNode* head) {
        
    auto slow = head;
    auto fast = head;
        
   while(head && head->next)
   {
       head = head->next->next;
   }
        if(head)
            return 0;
        else
            return 1;
        
        
    return true;    
    }
    
