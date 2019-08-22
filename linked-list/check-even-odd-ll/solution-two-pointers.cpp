https://www.geeksforgeeks.org/check-whether-the-length-of-given-linked-list-is-even-or-odd/


 bool CheckOddEven(ListNode* head) {
        
    auto slow = head;
    auto fast = head;
        
    while(fast)
    {
        if(slow->next)
        {
            slow = slow->next;
        }
        
        if(fast->next->next)
        {
            fast = fast->next->next;
            
        }
        else 
        {
            return true;
        }
        
        if(!fast->next)
        {
            return false;
        }
            
        
    }
        
        
    return true;    
    }
    


