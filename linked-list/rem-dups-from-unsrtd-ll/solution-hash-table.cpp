//https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/

{
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *root)
{
    Node* temp = root;
    std::unordered_map<int,int>hash;
    
    if(root == NULL )
    {
        return NULL;
    }
    //hash[root->data] = 1;
    Node* prev = NULL;
    Node* curr = root;
    
        while(curr)
        {
        if(hash.count(curr->data) > 0)
        {
            prev->next = curr->next;
            delete(curr);
        }
        else
        {
            hash[curr->data] = 1;
            prev = curr;
        }
        curr = prev->next;
        
        }
    return root; 
    }
    

