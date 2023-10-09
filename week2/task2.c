#include<stdio.h>
int main(){
    char word;
    char reverse;
    printf("Enter string: ");
    scanf("%s", &word);
    for (int i=strlen(word); i >= 0; i--)
    {
        //reverse.add(word[i]);
        str_append(word, i);
    }
    printf("%s", reverse);

}