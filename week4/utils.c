#include "utils.h"

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