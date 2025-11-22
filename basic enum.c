#include<stdio.h>
enum week{
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday,
    sunday,
};
int main(){
    enum week today;
    today=wednesday;
    printf("%d",today);
    return 0;
}
