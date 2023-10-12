#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    //ex3();
    //ex6();
    //ex8();
    //ex10();
    return 0;
}

void ex3(){
    printf(" %d\n %d\n %d\n %d\n %f\n %f\n %f\n %f\n", CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX, FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX);
}

void ex6(){
    int out;
    printf("Input an integer: ");
    scanf("%d", &out);
    if(out % 2 == 1)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }
}

void ex8(){
    int num;
    int total = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d", i);
        total *= i;
    }
    printf("%d\n", num);
}

void ex10(){
    int value;
    int rate;
    int time;
    int total;
    printf("Please enter original value: ");
    scanf("%d", &value);
    printf("Please enter interest rate: ");
    scanf("%d", &rate);
    printf("Please enter time since transaction in years: ");
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        value += value *(rate/100);
    }
    printf("the total is %d\n", value);
}
