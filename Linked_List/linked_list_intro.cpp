#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        public:
        Node(int data1,Node* next1 ){
            data = data1;
            next = next1;

        }
        Node(int data1){
            data = data1;
            next = NULL;

        }
       
};
Node *conevertArr2Ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void traversal(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int lengthOfLL(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int checkPresent(Node*head,int val)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
Node *deleteHead(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node* deleteKth(Node*head ,int k)
{
    if(head==NULL)
        return head;

    if(k==1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node* prev = NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next = prev->next->next;
            delete temp;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteSpecificVal(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (head->data == k)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            prev->next = prev->next->next;
            delete temp;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertNode(Node* head ,int val)
{
    Node *temp=new Node(val,head);

    return temp;
}

Node* insertAtTail(Node* head,int val)
{
    if(head==NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    Node *tail = new Node(val);
    temp->next = tail;
   
    return head;
}

Node *inserAtKthPosition(Node *head,int val,int k)
{
    if(head==NULL)
    {
        if(k==1){
            return new Node(val);
        }
        else
        {
            return head;
        }
    }

    if(k==1)
    {
        
        Node *freshnode = new Node(val,head);
        
        return freshnode;
    }
   
    Node *temp = head;
    int cnt = 0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==(k-1)){
            Node *freshNode = new Node(val);
            freshNode->next = temp->next;
            temp->next = freshNode;
            break;
        }
        temp = temp->next;

    }
    return head;
}

Node *inser_Ele_Before_Val(Node *head, int ele, int val)
{
    if (head == NULL)
    {

        return NULL;
    }

    if (val == head->data)
    {

        Node *freshnode = new Node(ele, head);

        return freshnode;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        
        if (temp->next->data==val)
        {
            Node *freshNode = new Node(ele);
            freshNode->next = temp->next;
            temp->next = freshNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    // Node *y = new Node(arr[0]);
    // cout << y->data;
    Node *head = conevertArr2Ll(arr);
    // cout << head->data;
    traversal(head);
    cout<< "NULL"<<endl;
    // cout << endl << "The length of the list is " << lengthOfLL(head);
    // cout << checkPresent(head, 8);

    // head =deleteHead(head);
    // traversal(head);

    // head = deleteTail(head);

    // head = deleteKth(head, 5);
    // traversal(head);

    // head = deleteSpecificVal(head, 8);
    // traversal(head);

    // head = insertNode(head, 13);
    // traversal(head);
    
    // head = insertAtTail(head, 13);
    // traversal(head);


    // head = inserAtKthPosition(head, 10,1);
    // traversal(head);

    head = inser_Ele_Before_Val(head, 100, 7);
    traversal(head);

    return 0;
}