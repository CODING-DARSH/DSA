#include<stdio.h>
#include<stdlib.h>
    struct student
    {
        char name[30];
        int m,s,e;
    };
int main(){
struct student s;
struct student *p;    
// p=malloc(sizeof(struct student));
// printf("Enter name and marks of m s e of student: ");
// scanf("%s%d%d%d",&p->name,&p->m,&p->s,&p->e);
// printf("Name of student is %s marks of m is %d marks of s is %d marks of e is %d",p->name,p->m,p->s,p->e);
p=calloc(3,sizeof(struct student));
for (int i = 0; i < 3; i++)
{
printf("Enter name and marks of m s e of student: ");
scanf("%s%d%d%d",&p[i].name,&p[i].m,&p[i].s,&p[i].e);
}
for (int i = 0; i < 3; i++)
{
printf("Name of student is %s marks of m is %d marks of s is %d marks of e is %d",p[i].name,p[i].m,p[i].s,p[i].e);
    
}


return 0;
}

//we use malloc because we just need to allocate 1 block not multiple a struct is a single block if we are thinking for s[i] then we might use calloc;

// we use . in calloc becoz p[i] is one whole student block      p[i] is not a pointer 
// we use -> in malloc becoz p is itslef a pointer of student and in that pointer we are telling it to go to name or something using ->