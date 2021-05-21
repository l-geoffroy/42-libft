#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
 	memccpy(argv[1], argv[2], argv[3][0], sizeof(argv[2]));
 	printf("memccpy(): %s\n", argv[1]);
}
