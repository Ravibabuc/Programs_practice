/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int string_copy(char * str , char *str1 );
int string_reverse(char * str , char *str1 );
int main()
{
    char *str;
    char *strcp;
    char *strrev;
    str = (char * ) malloc (sizeof(char) * 20);
   strrev  = (char * ) malloc (sizeof(char) * 20);
      strcp  = (char * ) malloc (sizeof(char) * 20);

    str = "hello world";
    printf("str =%s\n", str);
    
    string_copy(str , strcp );
    printf("strrev =%s\n", strcp);
    
    string_reverse( str , strrev );
        printf("strrev =%s\n", strrev);


    return 0;
}

int string_copy(char * str , char *str1 )
{
    while(*str != '\0')
    {
        *str1 = *str ;
        
        str1 ++;
        str ++;
    }
    *str1 = '\0';
}


int string_reverse(char * str , char *str1 )
{
    int length =0;
    while(str[length] != '\0') 
    {
        length ++;
    }
    int i =0;
    while (length > 0 )
    {
       str1[i] = str[length-1] ;
        length --;
        i++;
    }
    str1[i] = '\0';
}

