#include <stdio.h>
int main(){
    float a,b,c,sum;
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    printf("Average: %.2f\n",sum/3);
    return 0;
}