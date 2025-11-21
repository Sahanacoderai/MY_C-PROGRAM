#include<stdio.h>
int main(){
    float marks;
    char grade;
    printf("enter student marks");
    scanf("%f",&marks);
    if (marks >=90 && marks <=100){
        grade = 'A';
        if (marks >=75 && marks <=80){
            grade = 'B';
            if (marks >=60 && marks <=74){
                grade = 'C';
                if (marks >=50 && marks <=59){
                    grade = 'D';
                    if (marks >=50 && marks <=0){
                        grade = 'F';
                        
                    }
                }
            }
        }
    }
}
