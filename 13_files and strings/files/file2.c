#include<stdio.h>
#include<string.h>

int main(){
    // Declare the file pointer
    FILE *filePointer;

    // Declare the variable from the data to be read from file
    char dataToBeRead [50];

    // Open the existing file file.c using fopen()
    // In read mode using "r" attribute
    filePointer = fopen ("file1.c","r");

    // Check if this pointer is Null
    // Which may be if the file does not exist
    if (filePointer==NULL){
        printf("file1.c failed to open .\n");

    }else{
        printf("The file is noew open.\n");

        // read the data ToBeRead from the file
        // Using fgets()method
        while (fgets(dataToBeRead,50,filePointer)!=NULL){
            // print the DataToBeRead
            printf("%s",dataToBeRead);
        }
        // Close the file using fclose()
        fclose(filePointer);

        printf("Data successfully read from file1.c\n");
        printf("the file is now closed\n");
    }
}