#include<stdio.h>
int main(){
    char first[50],last[50],full[100];
    int i = 0, length = 0;
    printf("enter  first name: ");
    scanf("%s",first);
    printf("enter last name:");
    scanf("%s",last);
    while(first[i] !='\0')
    {
        full[length++]=first[i++];
    }
    full[length++] ='';
    while(last[i]!='\0')
    {
        full[length++]=last[i++];
    }
        full[length]='\0';
        printf("full name:%s\n",full );
        printf("length:%d\n",length);
        if(length>20)
        printf("name too long for screen.\n");
        else
        printf("name fits the screen.\n");
        return 0;
    }
