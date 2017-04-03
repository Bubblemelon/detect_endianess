/*
 * This program determines if the current computer architecture uses big
 * endian or little endian.
 */

#include <stdio.h>

int main()
{
    unsigned int x = 1;
    char *c = (char*) &x;

    // pointer c of type "char"
    // address of x is assigned to c  ( casting x to char pointer )

    printf( "*c is: %0x\n" , *c  ); // %x == Unsigned hexadecimal integer

    if( *c == 0x0 )
    {
        printf( "Computer architecture uses little endian \n" );
    }
    else
    {
        printf( "Computer architecture uses big endian \n" );
    }

    return 0; //program completed
}


