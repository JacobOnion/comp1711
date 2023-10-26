#include<stdio.h>
#include<stdlib.h>

FILE *openFile(char fileName[], char mode[]);

int ex1()
{
    char filename [] = "squares.dat";
    int count;
    FILE *file = fopen(filename, "w");
    printf("How many squares do you want?\n");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        fprintf(file, "%d\n", i*i);
    }
}

int ex2(){
    //char filename [] = "squares.dat";
    FILE *file = openFile("squares.dat", "r");
    int buffer_size = 100;
    char line_buffer[buffer_size];
    //FILE *file = fopen(filename, "r");
    float total = 0;
    int counter = 0;
    while(fgets(line_buffer, buffer_size, file) != NULL)
    {
        //printf("%f\n", atof(line_buffer));
        total += atof(line_buffer);
        counter += 1;
    }
    printf("The average is %f\n", total/counter);
}

FILE *openFile(char fileName[], char mode[])
{
    FILE *file = fopen(fileName, mode);
    if (file == NULL)
    {
        perror("");
        exit(1);
    }
    return file;
}

int main(){
    //ex1();
    ex2();
}