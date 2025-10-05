#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE];
int f=-1;
int r=-1;
void enqueue(int num){
// int i;
     if (r==SIZE-1)
    {
        printf("Queue is full");
        r=-1;
    }
    else{
        r++;    //r=0-->10 r=1-->20 r=2-->30 r=3-->40 r=4-->50   
        q[r]=num;
        if (r==0)
        {
            f=0;
        }
        }
}
void dequeue(){
    if (f==r)
    {
        printf("Queue max/overflow and queue is reset\n");
        f=-1;
        r=-1;
    }
    else if (f==-1)
    {
        printf("Queue is empty");
    }
    else if (f==SIZE-1)
    {
        printf("You can't remove further as queue is now empty\n");
        f=-1;
    }
    else{
        printf("%d is removed from queue\n",q[f]);
        f++;
    }
    
}
void display(){
    int i;
    printf("Queue is \n");
    for ( i = f; i <=r; i++)
    {
        printf("%d \t",q[i]);
    }
    printf("\n");
}
int main(){
    enqueue(10);    //r=0       f=0
    enqueue(20);    //r=1
    enqueue(30);    //r=2
    dequeue();                  //f=1
    dequeue();                  //f=2
    enqueue(40);    //r=3
    enqueue(50);    //r=4
    // enqueue(60);
    dequeue();                  //f=3
    display();                 
    dequeue();                  //f=4
    dequeue();                 //f=5 -->it will reset here and value will be f=-1 and r=-1
    enqueue(60);                //f=0 and r=0
    dequeue();                  //f=1 
    display();
}