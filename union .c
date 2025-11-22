#include<stdio.h>
int main(){
    union sahana{
        int age;
        float mark;
    };
    union sahana s;
    s.age=10;
    printf("%d\n",s. age );
    s.mark=10.7;
    printf("%f\n",s.mark);

return 0;

    
    }
