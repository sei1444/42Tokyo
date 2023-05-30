#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "qwert";
    char b[] = "asdfe";
	printf("%s\n", memchr(a, b[4], sizeof(a)));
}
