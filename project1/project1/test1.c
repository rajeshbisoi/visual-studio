// Reverse a string

#include <stdio.h>
#include <string.h>

static int len = 0;

void revstr( char *s_ptr ){

	int i = 0;
	char ch;

	len = strlen( s_ptr );
	
		while( i < len/2 ){
			ch = *(s_ptr + i);
			*(s_ptr + i)	= *(s_ptr + (len-1) - i);
			*(s_ptr + (len-1) - i) = ch;		
			i++;
	}
}

// mian program starts here

int main( int argc, char *argv[]){

	char *s_ptr = (char *) argv[1];
	int i = 0;

	revstr( s_ptr );

	while( (*s_ptr != '\0') && i < len ){

		printf( "%c", *(s_ptr + i) );

		i++;
	}

	return 0;
}
