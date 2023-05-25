#include <stdio.h>
#include <string.h>

int main(void)
{
	//char a[] = 0;
	char b[] = "afsasfa";
	int n = 0;
	printf("%lu\n", strlcat(NULL,b,n));
	printf ("%s, %s", b,b);
}