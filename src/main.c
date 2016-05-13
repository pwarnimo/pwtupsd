#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <libconfig.h>

void printVersion() {
	printf("PWTUPSD for GNU/Linux - A simple UPS monitor\n"
		"Version 0.1A licensed under GPLv2\n"
		"Copyright (C) 2016  Pol Warnimont\n"
		"Please use \"-l\" for license information.\n"
		"\nPWTUPSD comes with ABSOLUTELY NO WARRANTY!\n");
}

void printHelp() {
	printf("HELP");
}

void printLic() {
	printf("LIC");
}

int main(int argc, char *argv[]) {
	printf("THIS IS A TESTING VERSION!\n");

	if (argc > 1) {
		if (strcmp(argv[1], "-v") == 0)
			printVersion();
		else if (strcmp(argv[1], "-h") == 0)
			printHelp();
		else if (strcmp(argv[1], "-l") == 0)
			printLic();
		else {
			fprintf(stderr, "Wrong or unknown parameter!\nPlease use \"-h\" for help.\n");
			exit(1);
		}
	}
	else {
		fprintf(stderr, "Requiered parameter missing!\nPlease use \"-h\" for help.\n");
		exit(1);
	}
}
