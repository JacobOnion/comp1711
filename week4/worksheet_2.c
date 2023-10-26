#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int ex1();

typedef struct
{
    double x;
    double y;
} point;

struct manDist
{
    double x;
    double y;
};

int main(){
    ex1();
}

int ex1()
{
    point points [10];
    for (int i = 0; i < 10; i++)
    {
        points[i].x = ((double)rand()/RAND_MAX) * 20;
        points[i].y = ((double)rand()/RAND_MAX) * 20;
        printf("(<%.2f>, <%.2f>)\n", points[i].x, points[i].y);
    }

    struct manDist distances[9];
    double average = 0;
    for (int i = 0; i < 9; i++)
    {
        distances[i].x = abs(points[i].x - points[i+1].x);
        distances[i].y = abs(points[i].y - points[i+1].y);
        average += hypot(distances[i].x, distances[i].y);
        //average += distances[i].x * distances[i].x + distances[i].y * distances[i].y;
        //printf("%f, %f", distances[i/2].x, distances[i/2].y);
    }
    average /= 9;
    printf("%.2f\n", average);
}
