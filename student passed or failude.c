#include<stdio.h>
int checkPass(int m1, int m2, int m3) {
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1;   
    else
        return 0;   
}

int main() {
    int s1, s2, s3;
    float avg;

    
    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;

    printf("\nAverage Marks = %.2f\n", avg);

    
    if (checkPass(s1, s2, s3)) {
        printf("Status: PASSED\n");

        
        if (avg >= 75)
            printf("Result: Distinction\n");
        else if (avg >= 60)
            printf("Result: First Class\n");
        else if (avg >= 50)
            printf("Result: Second Class\n");
        else
            printf("Result: Pass Class\n");
    }
    else {
        printf("Status: FAILED (Below 40 in at least one subject)\n");
    }

    return 0;
}
        
