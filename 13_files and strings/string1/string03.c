#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch ;
    char s[10];
    int i =0;

    printf("Enter a number of string\n");
    while((ch=getchar()) !='\n'){
        s[i]=ch;
        i++;
    }
    printf("Original Number/string:%s\n",s);

    printf("Reverse Number/string:");
    while(0<=i--){
        putchar(s[i]);
    }
    return 0 ;
}