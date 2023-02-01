#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[30];
    printf("Enter a line of text:\n");
    fgets(str,sizeof(str),stdin);
    printf("you entered:");
    // printf("you entered:");
    puts(str);
}