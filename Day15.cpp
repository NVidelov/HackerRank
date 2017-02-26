/*
	Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. 
	Once the new node is added, return the reference to the head node.

	Note: If the head argument passed to the insert function is null, then the initial list is empty.
*/

#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:  
      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node *newHead = new Node(data);
          if (head!=NULL)
          {
              Node *current = head;
              while (current->next!=NULL)
                  current = current->next;
              current->next = newHead;
              return head;
          }
          else
              return newHead;
      }
	    void display(Node *head)
      {
			Node *start=head;
			while(start)
			{
				cout<<start->data<<" ";
				start=start->next;
			}
      }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
	
	return 0;	
}