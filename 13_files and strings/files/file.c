#include<stdio.h>
#include<string.h>

int main()
{
    //declare the file pointer
    FILE * filepointer;

    // get the data to be written in file
    char dataToBeWritten[50]="Drongo College of Technology and science\n";

    // Open the existing file using fopen()
    // write mode using 'W' attribute
    filepointer=fopen("file1.c","a");

    // check if this filepointer is null
    // which may be if the file does not exist
    if(filepointer==NULL){
        printf("file1.c file failed to open.");

    }else{
        printf("the file is now opened.\n");
        // write the datatobewritten into the file 
        if (strlen(dataToBeWritten)>0) 
    {
        // write in the file using fput
        fputs(dataToBeWritten,filepointer);
        fprintf(filepointer,"Adding another input \n");
        fputs("\n",filepointer);
    }
    // closing the file using fclose()
    fclose(filepointer);

    printf("Data successfully written in file file1.c \n");
    printf("The file is now closed\n");

}
return 0;
}
