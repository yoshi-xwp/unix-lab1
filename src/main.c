#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(int argc, char *argv[]) {
	printf("The name of the program: '%s'.\n", argv[0]);
	printf("Total amount of arguments: '%d'.\n", argc - 1);
	if (argc > 1) {
		int i;
		for (i = 1; i < argc; i++)
			printf("Argument '%d': '%s'.\n", i, argv[i]);	
	}
	return 0;
}
