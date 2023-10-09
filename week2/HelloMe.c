#include <stdio.h>
int main(){
    char name[15]; //basically a string of up to 15 characters

    printf("Hello, please enter your name: ");
    scanf("%s", name); //take in keyboard input
    printf("Your name is %s\n", name); //swap out %s with name in print
    return 0;
}