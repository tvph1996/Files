#include <stdio.h>

int main()
{
	char data01[] = "Hello world";
	char *pData;
	pData = &data01[6];
	printf("%s\n", pData);
	return 0;
}