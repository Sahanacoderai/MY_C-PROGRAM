#include<stdio.h>
enum operation{
    add = 1,
    subtract,
    multiply,
    divide
};
int main(){
    enum operation op;
    printf("enter operation(1-4):");
    scanf("%d",&op);
    if(op==add)
    printf("you chose addition");
    else if(op==subtract)
    printf("you chose subtraction");
    else
    printf("other operation");
    return 0;
    
}
    
