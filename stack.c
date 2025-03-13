#include<stdio.h>
void fnPush();
void fnPop();
int ar[100],size=5,top=-1;
void fnPush()
{
    if(top==size-1)
    printf("the stack is overflow");
    else
    {
        int x;
        top=top+1;
        printf("enter a number");
        scanf("%d",&x);
        ar[top]=x;
    }

}
void fnPop()
{
    if(top==-1)
    printf("the stack is empty");
    else
    {
        int x;
        x=ar[top];
        top=top-1;
        printf("%d is pop",x);
    }
}
void main()
{
    int x,i;
    while(1)
    {
         printf("\npress 1 for push");
         printf("\npress 2 for pop");
         printf("\npress 3 for display");
         printf("\npress 4 for exit");
         scanf("%d",&x);
         if(x==1)
         fnPush();
         if(x==2)
         fnPop();
         if(x==3)
         {
            for(i=top;i>=0;i--)
            printf("%d\t",ar[i]);
         }
         if(x==4)
         break;
    }
   
}