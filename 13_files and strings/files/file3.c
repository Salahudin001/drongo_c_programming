#include <stdio.h>
#include <string.h>

int main()
{

    FILE *filePointer;

    char dataToBeRead[50];

    filePointer = fopen("file1.c", "r");

    if (filePointer == NULL)
    {
        printf("file1.c failed to open .\n");
    }
    else
    {
        printf("The file is now open.\n");

        while (fgets(dataToBeRead, 50, filePointer) != NULL)
        {

            printf("%s", dataToBeRead);
        }

        fclose(filePointer);

        printf("Data successfully read from file1.c\n");
        printf("the file is now closed\n");
    }
}