#include<stdio.h>
int person_details(){
    int age;
    char name,dept;
    printf("enter the name of the person\n");
    scanf("%s",&name);
    printf("enter the age of the person\n");
    scanf("%d",&age);
    printf("enter the depatment of the person\n");
    scanf("%s",&dept);
}
int main()
{
    person_details();
}

