// C program to illustrate
// open system call
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

extern int errno;

int main()
{
	// if file does not have in directory
	// then file foo.txt is created.
	int read = open("read.txt", O_RDONLY | O_CREAT);

	printf("read = %d\n", read);

	if (read == -1) 
    {
		// print which type of error have in a code
		printf("Error Number % d\n", errno);
		// print program detail "Success or failure"
		perror("Program");
	}

     // Using close system Call
    if (close(read) < 0) {
        perror("c1");
        exit(1);
    }
    printf("closed the fd.\n");

	return 0;
}
