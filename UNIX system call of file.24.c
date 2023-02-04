#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	int n,fd; 
	printf("Enter text to write in the file:\n");
	n= read(0,Buff,50);
	fd=open("file",O_CREAT | O_RDWR, 0777); 
	write(fd,Buff, n);
	write(1, Buff, n);
	int close(int fd);
	return 0;	