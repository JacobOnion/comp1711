#include<stdio.h>
int main(){
    //ex2_int();
    ex4();
    return 0;
}

/*void ex2_str(){
    char fruitList[5][10] = {"apple", "banana", "orange", "kiwi", "mango"};
    char reverseList[5][10];
    int list_size = sizeof(fruitList) / sizeof(fruitList[0]);
    for(int i = 0; i < list_size; i++)
    {
        reverseList[i][10] = fruitList[list_size - 1 - i][10];
    }
    printf("The reversed array is:");

    for (int j = 0; j < list_size; j++)
    {
        printf("%s\n", reverseList[j][10]);
    }
}*/

void ex2_int(){
    int fruitList[6] = {1, 2, 3, 4, 5};
    int reverseList[6];
    int list_size = sizeof(fruitList) / sizeof(fruitList[0]);
    for(int i = 0; i < list_size-1; i++)
    {
        reverseList[i] = fruitList[list_size - 2 - i];
    }
    printf("The reversed array is:\n");

    for (int j = 0; j < list_size-1; j++)
    {
        printf("%d\n", reverseList[j]);
    }
}

void ex4(){
    int numList[6] = {1, 2, 3, 4, 5};
    int temp1 = numList[0];
    int temp2;
    int array_size = sizeof(numList) / sizeof(numList[0]);
    for(int i = 0; i < array_size-1; i++)
    {
        if(i == array_size-2)
        {
            numList[0] = numList[i];
        }
        else
        {
            numList[i+1] = temp1;
            temp2 = numList[i+1];
        }
    }
    printf("the shifted array is:\n");
    for (int j = 0; j < array_size-1; j++)
    {
        printf("%d\n", numList[j]);
    }
}