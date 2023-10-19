#include<stdio.h>

int ex4();
int isPrime(int num1);
int ex5();
int str_len(char *input);

    int str_len(char *input)
    {
        int counter = 0;
        while (input[counter] != '\0')
        {
            counter +=1;
        }
        return counter;
    }

int ex3(){
        char input[20];
        printf("please enter an input: ");
        scanf("%s", input);
        printf("The length of %s is %d\n", input ,str_len(input));
        return 0;
    }


int ex4(){
    int num1;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    if (isPrime(num1) == 1)
    {
        printf("%d is prime", num1);
    }
    else
    {
        printf("%d is not prime", num1);
    }
}

int isPrime(int num1){
    if (num1 == 0 | num1 == 1)
    {
        return 0;
    }

    for(int i = 2; i < num1/2; i++)
    {
        if(num1%i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int ex5()
{
    char string1[20];
    char string2[20];
    printf("Enter two strings: ");
    scanf("%s", string1);
    scanf("%s", string2);
    concatStrings(string1, string2);

}

 void concatStrings(char *string1, char *string2, char *totalString)
 {
    char totalString[41];
    int counter = str_len(string1);
    for (int i = 0; i < counter - 1; i++)
    {
        totalString[i] = string1[i];
    }
    for(int i = counter; i < counter + str_len(string2) - 1; i++)
    {
        totalString[i] = string2[i - counter];
    }
 }

int main(){
    //ex3();
    //ex4();
    ex5();
}