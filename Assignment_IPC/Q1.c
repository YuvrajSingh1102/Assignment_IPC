/*
Q1.write a program that creates a shared memory region and displays shared memory id and also
print address at which shared area in this process starts from.
*/

#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>

#define MY_SHM_KEY 48

int main()
{
	char *info;
	int id;
	
	id = shmget(MY_SHM_KEY, 250, IPC_CREAT|0644);
	
	if(id<0)
	{
		perror("Shmget");
		exit(1);
	}
	
	printf("shared memory id --> %d\n", id);
	info = shmat(id, 0, 0);
	printf("data --> %s\n", info);
    printf("Enter the data:");
    scanf("%s",info);
	
	
	return 0;
  
}