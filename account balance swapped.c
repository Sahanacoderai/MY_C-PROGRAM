#include<stdio.h>
void swapbalances(float *a,float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    float bal1,bal2;
    printf("enter account balance 1:");
    scanf("%f",&bal1);
    printf("enter account balance 2:");
    scanf("%f",&bal2);
    printf("\nbefore swapping:\n");
    printf("balance 1 = %.2f\n",bal1);
    
    printf("balance 2 = %.2f\n",bal2);
    swapbalances(&bal1,&bal2);
    printf("\nafter swapping:\n");
    printf("balance 1 = %.2f\n",bal1);
    printf("balance 2 = %.2f\n",bal2);
    return 0;
}

    
    
