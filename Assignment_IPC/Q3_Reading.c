/*
Q3.Write a program parent process writing to pipe and child reading toggled data from pipe,
and also analyse the data flow order from write end to read end.
*/

//Reading to a pipe

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char a[20];
    int fd;

        printf("before open()...\n");
        fd=open("newfifo11",O_RDONLY);

        printf("After open()....\n");

        read(fd,a,sizeof(a));
        printf("data:%s\n",a);

return 0;
}