// https://leetcode.com/problems/valid-parentheses/description/
#include<stdio.h>
#define SIZE 10
char stack[SIZE];
int top=-1;
int originalTop=top;
void PushBrackets(char s){
    top++;
    stack[top]=s;
}
void sorting(){
    int i;
    for ( i = top; i >=0; i--)
    {
        if (stack[i]=='('|| stack[i]=='[')
        {
            stack[top]==i;
            top--;
        }
    }
}
void PopBrackets(){
    int i;
    for ( i = top-1; i>= 0; i--)
    {
    if(stack[top]==stack[i]){
        top--;
    }
    }
    
}
void display(){
    int i;
    for ( i = top; i>=0; i--)
    {
        printf("%s\n",stack[i]);
    }
}
int main(){
    PushBrackets("()");
    PushBrackets("(]");
    PushBrackets('[]');
    PushBrackets('{}');
    // PushBrackets('[');
    PopBrackets();
    display();

}
