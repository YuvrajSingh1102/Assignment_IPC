/*
Q3.Write a program parent process writing to pipe and child reading toggled data from pipe,
and also analyse the data flow order from write end to read end.
*/

//Writing to the pipe

#include<stdio.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char s[20];
    int fd;

    mkfifo("newfifo11",0644);
    perror("mkfifo");
    printf("Before open()...\n");
    
    fd=open("newfifo11",O_WRONLY);
    printf("After open()...\n");
    printf("Enter data ...\n");
    
    scanf("%s",s);
    write(fd,s,strlen(s)+1);

return 0;
}