/*
	#include <stdio.h>
	int main( ) {
	
	   int c;

	   printf( "Enter a value :");
	   c = getchar( );
	
	   printf( "\nYou entered: ");
	   putchar( c );

	   return 0;
	}
*/
	The gets() and puts() Functions

	#include <stdio.h>
	int main( ) {
	
	   char str[100];
	
	   printf( "Enter a value :");
	   gets( str );
	
	   printf( "\nYou entered: ");
	   puts( str );
	
	   return 0;
}
