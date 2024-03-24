#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1 )
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back=nullptr ;
    }
};
Node*ConvArr2DLL(vector<int>arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size() ;i++){
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}


void traversal(Node*head)
{
   
    while(head!=NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << endl;
}

Node*deleteHead(Node*head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}


Node*deleteTail(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    Node *newtail = tail->back;
    tail->back = nullptr;
    newtail->next = nullptr;
    delete tail;
    return head;
}

Node *DeleteKthEle(Node *head ,int k)
{
    if(head==NULL)
    {
        return NULL;

    }
    Node *temp=head;
    int cnt = 0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
            break;
        temp = temp->next;
    }
    
    Node *prev = temp->back;
    Node *front = temp->next;
    if(prev==NULL&&front==NULL)
    {
        return NULL;
    }
    else if(prev==NULL)
    {
        return deleteHead(head);
        
    }
    else if(front==NULL)
    {
        return deleteTail(head);
    }
    
        front->back = prev;
        prev->next = front;
        temp->back = nullptr;
        temp->next= nullptr;
    
    return head;
}

Node *DeleteSpecificNode(Node *head, int ele)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (ele==temp->data )
            break;
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }

    front->back = prev;
    prev->next = front;
    temp->back = nullptr;
    temp->next = nullptr;

    return head;
}

Node *insetBeforeHead(Node *head,int val)
{
    if(head==NULL)
    {
        return new Node(val);
    }

    /*
    Below approch is think by me 
    */
        // Node *temp = head;
        // Node *newHead = new Node(val);
        // head->back = newHead;
        // newHead->next = head;
        // head = newHead;
        // return head;

    /* And this is also work same but this is done using constructor 
    */
        Node*newHead=new Node(val,  head,nullptr);
        head->back = newHead;
        return newHead;
}

Node*insertBeforeTail(Node *head,int val)
{
    if(head->next==NULL)
    {
        insetBeforeHead(head, val);
    }
    Node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    Node *front = temp->next;
    Node *newNode = new Node(val,front,temp);
    temp->next = newNode;
    front->back= newNode;

    // temp->next = newNode;
    // newNode->back = temp;
    // front->back = newNode;
    // newNode->next = front;
    return head;
}

Node* insertBeforeKthEle(Node*head,int ele,int k)
{
    if(k==1)
    {
        head=insetBeforeHead(head, ele);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(ele, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

void insertBeforValue(Node*node,int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = ConvArr2DLL(arr);
    traversal(head);
    // head = deleteHead(head);

    // head = deleteTail(head);
    // traversal(head);

    // head = DeleteKthEle(head, 4);
    // traversal(head);

    // head = DeleteSpecificNode(head, 7);
    // traversal(head);

    // head = insetBeforeHead(head, 700);
    // traversal(head);

    // head = insertBeforeTail(head, 100);
    // traversal(head);

    // head = insertBeforeKthEle(head, 100, 4);
    insertBeforValue(head->next,200);
    traversal(head);

    return 0;
}