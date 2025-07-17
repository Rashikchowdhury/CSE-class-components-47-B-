#include <stdio.h>
#include <math.h>

int main(){
    float x, y;
    printf("Enter the value of x \n");
    scanf("%f", &x);
    y = pow(x, 4) + (3 * pow(x, 2)) + 2;
    printf("Answer = %.0f", y);
    return 0;
}
