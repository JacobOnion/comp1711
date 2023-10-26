#include<stdio.h>
#include"utils.h"

int main(){
    char filename[] = "data.txt";
    FILE *file = openFile(filename, "w");
    fclose(file);
}