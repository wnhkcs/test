#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void main()
{
	int p1;
	printf("p1=fork() %d\n",p1=fork());
	printf("p1 %d\n",p1);
	printf("fork() %d\n",fork());
}
