#include<stdio.h>
int main(){
    int n, h;
    float r, s;
    scanf("%d %d %f", &n, &h, &r);
    s=r*h;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", s);
    return 0;
}