#include<stdio.h>
int main(){
    struct student s[3];
    for(int i = 0; i < 3; i++){
        printf("enter name,age,mark,for student %d:",i
        +1);
        scanf("%s %d %f", s[i].name,s[i].age,s[i].mark);
    }
    return 0;
}

    
