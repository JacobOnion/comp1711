#include<stdio.h>
int main(){
    float length;
    float height;
    float area;
    printf("Enter rectangle dimensions: ");
    scanf("%f", &length);
    scanf("%f", &height);
    area = length*height;
    printf("Your rectangle is %f\n", length*height);
}