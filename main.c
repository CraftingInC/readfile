
/* gcc -m64 -Os -static main.c -o test -s */

#include <stdio.h>
#include <errno.h>

int main()
{
	FILE *source = fopen("main.bin", "rb");
	if (source == NULL)
    {
       printf("File not found.\n");
       return 0;
	}
	fseek(source, 0, SEEK_END);
	unsigned long totalsize = ftell(source);
	rewind(source);
	unsigned char buffer[totalsize];
	int i;
    for (i = 0; i < totalsize; i++)
    {
        buffer[i] = fgetc(source);
    }
	fclose(source);

	int size = sizeof buffer / sizeof *buffer;

	printf("%d\n\nDECIMAL       HEX      ASCII\n", size);

	for(int t = 0; t < totalsize; t++)
    {
        printf("  %03d    =    %02X    =    %c\n", buffer[t], buffer[t], buffer[t]);
    }
    return errno;
}

