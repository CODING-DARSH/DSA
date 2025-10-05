#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    int *p;
    // p=malloc(sizeof(int));      //here we are giving size of becoz in vs it will allocate 4 byte while in turbo it will allocate 2 so if we give hardcoded size it will crash or overflow the same code in turbo
    // printf("Enter a number");
    // scanf("%d",p);  //we are using just p not &p becoz p is already pointing towards address
    // printf("number is %d",*p);  //for printing number we normally use * becoz it will point variable to that address and it will return value at that given addresss
    free(p);


    int *x;
    x=calloc(5,sizeof(int));    //this represents that an aaray of 5 size or it has been given 5 blocks with 2/4 bytes allocation to each
    for (int i = 0; i < 5; i++)
    {
        printf("enter x[%d]",i);
        scanf("%d",&x[i]);  //we are using &x[i] instead of x[i] becoz x[i] will be just base  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",x[i]);
    }
    free(x);
    
    return 0;
}

//malloc is basically used for assigning meomry to single variable
//calloc is basically used for assigining memory to array or multiple variable