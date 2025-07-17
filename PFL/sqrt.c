#include <stdio.h>
#include <math.h>

int main(){
    float x, y;
    printf("Enter the value of x \n");
    scanf("%f", &x);
    y = sqrt(pow(x, 2) + x - 1);
    printf("Answer = %.2f", y);
    return 0;
}
