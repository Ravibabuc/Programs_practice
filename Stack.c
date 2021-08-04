/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct  Stack
{
    int *stack;
    int Sp;
};


int Push_Stack(struct Stack *St ,  int value);

int Pop_Stack(struct Stack *St );

int main()
{
    struct Stack *St;
    int i;
    
    St = (struct Stack * ) malloc (sizeof(struct Stack) * 20);
    St -> stack = (int * ) malloc (sizeof(int) * 20);
      St->Sp=0;

    for (i =0;i < 10;i++)
        Push_Stack(St ,  i );
   
    for (i =0;i < 10;i++)
        printf("Stack push =%d\n", St->stack[i]);
    
     for (i =0;i < 10;i++)
     {
         
         printf("Stack pop =%d\n", Pop_Stack(St ));
     }
        
     
    return 0;
}

int Push_Stack(struct Stack *St ,  int value )
{
    
    St->stack[St->Sp]=value;
    St->Sp ++;
}
int Pop_Stack(struct Stack *St )
{
    int value ;
    St->Sp --;
    value =St->stack[St->Sp];
    
    return value;
}


