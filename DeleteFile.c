#include<stdio.h>
#include <fcntl.h> // for open() constants
#include <unistd.h> // for close()


int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name thet you wnat to open :\n");
    scanf("%s",FileName);

    unlink(FileName);


    return 0;
}

