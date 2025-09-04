#include<stdio.h>
#include<stdlib.h>
int inputarray(int location,int data,int size,int a[]){
    int index=location-1,i,j;
    for ( i = 0; i < size; i++)
    {
        if (i==index)
        {
            for ( j = size; j > i; j--)
            {
              a[j]=a[j-1];
            }
            a[index]=data;
            printf("%d is inserted at location %d",data,location);
            size++;
            return size;
            break;
        }
    }
}
void scanarray(int size,int a[]){
    int i;
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
}
void displayarray(int size,int a[]){
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d \n",a[i]);
    }
    
}
void bubblesort(int a[],int size){
    int i,j,temp;
    for ( i = 0; i < size-1; i++)
    {
      for ( j = 0; j < size-1; j++)
      {
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
      }
    }   
}
int delete(int a[],int size){
    int i,dele,j,temp;
    printf("Enter the element u want to delete");
    scanf("%d",&dele);
    for ( i = 0; i < size; i++)
    {
        if (a[i]==dele)
        {
            for ( j = i; j < size; j++)
            {
                a[j]=a[j+1];
            }
            size--;
            printf("Element is deleted");
            return size;
            break;
        }
        else{
            printf("Element isn't there");
        }
        
    }
    
}
int main(){
    int location,data,size=5,a[10],choice;
    while (1)
    {
        printf("Enter 0 for exit\n1 for scan array \n2 for inserting data in array\n3for displaying the data\n4 for bubble sorted array\n5for deleting element in array:");
    scanf("%d",&choice);
        switch (choice)
    {
    case 0:
        exit(0);
        break;
    case 1:
        scanarray(size,a);
        break;
    case 2:
    printf("Enter the location at which u want to insert data");
    scanf("%d",&location);
    printf("Enter data u want to insert at location %d",location);
    scanf("%d",&data);
        size=inputarray(location,data,size,a);
        break;
    case 3:
        displayarray(size,a);
        break;
    case 4:
        bubblesort(a,size); 
        break;
    case 5:
        size=delete(a,size);   
        break;
    default:
        break;
    }
    }
}