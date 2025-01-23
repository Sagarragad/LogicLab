#include<stdio.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name thet you wnat to creat :\n");
    scanf("%s",FileName);

    FD = creat(FileName,0777);

    if(FD == -1)
    {
        printf("Unable to creat the file\n");
        return -1;
    }
    else
    {
        printf("File is Succesfully created with FD :%d",FD);
    }


    return 0;
}