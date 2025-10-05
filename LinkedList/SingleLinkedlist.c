#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;  //this next vairable points towards next node
} *head=NULL;   //in this struct head is the first element and as it dosent have anything before it for that reason we declare it as null
struct node *last=NULL; //same it is last variable and we declare it null becoz nothing is there after this

void addNode(int data){
    struct node *temp=NULL; //we declare temp variable null becoz we dont know whats after it
    if (head==NULL) // we check this first like if list is empty we run this
    {
        head=malloc(sizeof(struct node));   //allocates memory
        head->data=data;    //assign data=10
        head->next=NULL;    //as there is nothing before this we assign head is null
        last=head;  //as this is first element in node this is also last element for a while if we dont add further
    }
    else{
        temp=malloc(sizeof(struct node));   //if head is not null then we allocate memory to temp variable
        temp->data=data;    //temp variable gets data
        last->next=temp;    //links the previous last node to the new node.
        last=temp;  // we need to shift our last to new created temp
    }
    
}
int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    printf("%d %d %d",head->data,head->next->data,head->next->next->data);
}