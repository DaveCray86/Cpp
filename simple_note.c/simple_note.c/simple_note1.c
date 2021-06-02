#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/locking.h>
#include <malloc.h>

void usage(char* prog_name, char* filename) {
	printf("Usage: %s <data to add to %s>\n", prog_name, filename);
	exit(0);
}

void fatal(char*);					// Function for fatal errors
void* ec_malloc(unsigned int);		// An error-checked malloc() wrapper

int main(int argc, char* argv[]) {
	int fd; // file descriptor
	char* buffer, * datafile;

	buffer = (char*)ec_malloc(100);
	datafile = (char*)ec_malloc(20);
	strcpy(datafile, "/tmp/notes");		// Possibly direct path to file??

	if (argc < 2)					//If there arent cmd line args
		usage(argv[0], datafile);	//Display usage message and exit
	
	strcpy(buffer, argv[1]);		//Copy into buffer

	printf("[DEBUG] buffer")
}