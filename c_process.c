#include <stdio.h>
#include <string.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	while (1) {
		char input[256];
		fgets(input, 255, stdin);
		if (strcmp(input, "check\n") == 0) {
			fprintf(stdout, "hello\n");
		}
	}
}
