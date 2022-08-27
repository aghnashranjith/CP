//{ Driver Code Starts
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


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* ptr_1 = head; 
        int size = 0;
        while(ptr_1!=NULL)
        {
            ptr_1 = ptr_1->next;
            size++;
        }
        
        while(k>=size)
        {
            k = k%size;
        }
        
        Node * ptr = head;
        Node* kth = head;
        int index = 1;
        while(ptr->next != NULL)
        {
            if(index!=k)
            {
                kth = kth->next;
                index++;
            }
            ptr = ptr->next;
        }
        //ptr is rear
        //kth is kth node
        Node* kplus1th = kth->next;
        
        ptr->next = head;
        kth->next = NULL;
        head = kplus1th;

        return head;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends