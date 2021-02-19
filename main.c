// Abe Jordan      ECE 477      Lab 1
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{	
	printf("%-24s %-24s %-20s\n","Type","Decimal","Hex");
	printf("%-24s %-24d 0x%-24X\n","INT_MAX",INT_MAX,INT_MAX);
	printf("%-24s %-24u 0x%-24X\n","UINT_MAX",UINT_MAX,UINT_MAX);
	printf("%-24s %-24ld 0x%-24X\n","LONG_MAX",LONG_MAX,LONG_MAX);
	printf("%-24s %-24lu 0x%-24X\n","ULONG_MAX",ULONG_MAX,ULONG_MAX);
	return 0;
}
