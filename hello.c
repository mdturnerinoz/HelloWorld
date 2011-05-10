#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int hellolib ( int argc, char *[]);
int main (int argc, char *argv[])
{

    printf("\n\tHello C World from Marty Turner !!! \n");

    hellolib( argc, argv );

    if(argc > 1)
       printf("\n");

    return 0;

}
