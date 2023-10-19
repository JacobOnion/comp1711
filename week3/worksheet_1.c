#include<stdio.h>
#include<string.h>
int main(){
    //ex3();
    ex5();
}

int ex3(){
    int mark;
    printf("What mark did this student get? ");
    scanf("%d", &mark);
    if(mark > 70)
    {
        printf("distinction\n");
    }
    else if (mark < 50)
    {
        printf("fail\n");
    }
    else
    {
        printf("pass\n");
    }
    return 0;
}

int ex5(){
    char op;
    char *ans;
    printf("Where would you like to go? menu-M, options-O, data-D, audio-A, exit-E ");
    scanf("%d", &op);
    if (op == 'M')
    {
        printf("bonk");
    }
    select(op, ans);
    printf("You are now going to %s\n", ans);
    return 0;  
}

 void select(char op, char *choice){
    printf("hi");
    choice = "";
    char redo;
    switch (op)
    {
    case 'M':
        //choice = "menu";
        strcpy(choice, "menu");
        printf("hehe");
        break;
    
    case 'O':
        //choice = "options";
        strcpy(choice, "options");
        break;
    case 'D':
        //choice = "data";
        strcpy(choice, "data");
        break;
    case 'A':
        //choice = "audio";
        strcpy(choice, "audio");
        break;
    case 'E':
        //choice = "exit";
        strcpy(choice, "exit");
        break;
    default:
        printf("please enter a valid input\n ");
        scanf("%d", &redo);
        //select(redo, choice);
        break;
    }
}