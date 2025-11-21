#include<stdio.h>
int main() {
    int id;
    int pan = 123456;
    int aadhar = 987654;
    int drivinglicence = 135790;
    int passport = 146810;
    printf("enter your unique identification number:");
    scanf("%d",&id);
    if (id == pan) {
        printf("id verification:pan number matched.\n ");
    }
    else if (id == aadhar) {
        printf("id verification:aadhar number macthed.\n ");
    }
    else if (id == drivinglicence){
        printf("id verification:driving licence matched.\n ");
    }
    else if (id == passport ){
        printf("id verification:passport number matched.\n");
    }
    else{
        printf("id not verified:no match found.\n");
    }
    return 0;
}
