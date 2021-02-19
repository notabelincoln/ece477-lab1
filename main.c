// Abe Jordan      ECE 477      Lab 1
// Prints out and organizes the sizes of different variable types in C as well as some maximum values
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
	printf("%-16s %24s %16s\n","Type","Decimal","Hex");
	printf("%-16s %24lu\n","Char Size",sizeof(char));
	printf("%-16s %24lu\n","Short Size",sizeof(short));
	printf("%-16s %24lu\n","Int Size",sizeof(int));
	printf("%-16s %24lu\n","Long Size",sizeof(long));
	printf("%-16s %24lu\n","Float Size",sizeof(float));
	printf("%-16s %24lu\n","Double Size",sizeof(double));
	printf("%-16s %24d %#16X\n","INT_MAX",INT_MAX,INT_MAX);
	printf("%-16s %24u %#16X\n","UINT_MAX",UINT_MAX,UINT_MAX);
	printf("%-16s %24ld %#16lX\n","LONG_MAX",LONG_MAX,LONG_MAX);
	printf("%-16s %24lu %#16lX\n","ULONG_MAX",ULONG_MAX,ULONG_MAX);
	return 0;
}
