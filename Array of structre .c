#include<stdio.h>
int main(){
    struct sahana{
        int age;
        float mark;
    };
    struct sahana san[3];
    for(int i=0; i<3; i++) {
        printf("enter age & mark\n");
        scanf("%d %f",&san[i].age,&san[i].mark);
    }
}

    
