#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int hellolib (int argc, char *argv[])
{

	int i = 1;

	printf("\n\tHellolib: argc: %d\n", argc);

	if(argc > 1)
           for( ; i < argc ; ++i )
              printf("\tHellolib: %s[%d]\n", argv[i], i);

	return 0;

}
