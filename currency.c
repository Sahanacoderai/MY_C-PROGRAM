#include <stdio.h>


float simulateExchange(float amount, float rate) {
    return amount * rate;  
}


void performExchange(float *amount, float rate) {
    *amount = (*amount) * rate;  
}

int main() {
    float usdAmount, rate, previewResult;

  
    printf("Enter amount in USD: ");
    scanf("%f", &usdAmount);

    printf("Enter conversion rate (USD -> INR): ");
    scanf("%f", &rate);

    
    previewResult = simulateExchange(usdAmount, rate);
    printf("\n--- Simulation (Call by Value) ---\n");
    printf("Original USD amount: %.2f\n", usdAmount);
    printf("Preview INR amount: %.2f\n", previewResult);
    performExchange(&usdAmount, rate);
    printf("\n--- Actual Exchange (Call by Reference) ---\n");
    printf("Updated INR amount: %.2f\n", usdAmount);

    return 0;
}
