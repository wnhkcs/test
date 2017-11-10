#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void main()
{
	int p1;
	while((p1=fork())==-1);
	if(p1==0)
		printf("This is a child process.");
	else
		{
			printf("This is a parent process.");
		}
}
