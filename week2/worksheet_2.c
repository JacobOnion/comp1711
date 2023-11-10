#include<stdio.h>
int main(){
    //ex2_int();
    //ex4();
    //ex5();
    ex6();
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
    int shiftedList[6];
    int temp1 = numList[0];
    int array_size = sizeof(numList) / sizeof(numList[0]);
    for(int i = 0; i < array_size-1; i++)
    {
        if(i == array_size-2)
        {
            shiftedList[0] = numList[i];
        }
        else
        {
            shiftedList[i+1] = numList[i];
        }
    }
    printf("the shifted array is:\n");
    for (int j = 0; j < array_size-1; j++)
    {
        printf("%d\n", shiftedList[j]);
    }
}

void ex5()
{
    int numList[7] = {3, 56, 56, 8, 3, 32};
    int dupes[7];
    int dupeCount = 0;
    int list_len = sizeof(numList) / sizeof(numList[0]);
    for (int i = 0; i < list_len - 1; i++)
    {
        for (int j = 0; j < list_len - 1; j++)
        {
            if (i != j & numList[i] == numList[j] & dupes[i] != i & dupes[j] != j)
            {
                dupes[dupeCount] = numList[i];
                dupeCount +=1;
                printf("%d\n", numList[i]);
                dupes[j] = j;
                dupes[i] = j;
            }
        }
    }
}

void ex6(){
    int array1[4] = {2, 56, 7};
    int array2[4] = {45, 6, 98};
    int newArray[7];
    int len1 = sizeof(array1)/sizeof(array1[0]);
    int len2 = sizeof(array2)/sizeof(array2[0]);
    for (int i = 0; i < len1 - 1; i++)
    {
        newArray[i] = array1[i];
    }
    for (int j = len1 - 1; j < len1 + len2 - 2; j++)
    {
        newArray[j] = array2[j - len1 + 1];
    }
    printf("The new list is:\n");
    for (int l = 0; l < len1 + len2 - 2; l++)
    {
        printf("%d\n", newArray[l]);
    }
}