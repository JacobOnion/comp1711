#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    //ex3();
    //ex6();
    ex8();
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
    scanf("%d", num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d", i);
        total *= i;
    }
    printf("%d\n", num);
}
