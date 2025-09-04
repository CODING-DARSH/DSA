#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int num){
    top++;
    stack[top]=num;
}
void pop(){
    printf("\n %d is removed or pop\n",stack[top]);
    top--;
}

void display(){
    int i;
    for ( i = top; i >=0; i--)
    {
        printf("%d\n",stack[i]);
    }   
}
int main(){
    int choice;
    int num;
    while (-1)//in c or c++ only 0 is equal for exiting the loop rest +ve or -ve number dosen't matter it will continue loop untill 0 
    {
    printf("Enter 1 for PUSH\n2 for POP\n3 for DISPLAY \n 4 for Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            // printf("Push function is called");
            printf("Enter the number u want to PUSH");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
        printf("Enter a valid choice between 1-4");
            break;
        }
    }
}

//In stack the last number which u push will be the first number in display 
//In stack in pop last number which u have pushed will be the first one which will be removed if we used pop
//In Stack top=-1 why becoz it represent empty stack if we add one num in stack then top==top++ thats the reason after adding a number or first number top=0 same it goes on

//Excel Stack1