#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include <getopt.h>

int main(int argc, char *argv[]) {
	char mode;
	int amount;
	int pid;

	const char* short_options = "";
	const struct option long_options[] = {
		{"mode" , 1, NULL, 0},
		{"amount", 1, NULL, 0},
		{"signal", 1, NULL, 0},
		{"pid", 1, NULL, 0},
		{NULL, 0, NULL, 0}
	}
	
	
	return 0;
}
