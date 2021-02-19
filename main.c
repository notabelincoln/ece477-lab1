// Abe Jordan      ECE 477      Lab 1
// Prints out the sizes of different variable types in C as well as some maximum values
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
	printf("%-16s %-16s %-16s\n","Type","Decimal","Hex");
	printf("%-16s %-16lu\n","Char Size",sizeof(char));
	printf("%-16s %-16lu\n","Short Size",sizeof(short));
	printf("%-16s %-16lu\n","Int Size",sizeof(int));
	printf("%-16s %-16lu\n","Long Size",sizeof(long));
	printf("%-16s %-16lu\n","Float Size",sizeof(float));
	printf("%-16s %-16lu\n","Double Size",sizeof(double));
	printf("%-16s %-16d 0x%-16X\n","INT_MAX",INT_MAX,INT_MAX);
	printf("%-16s %-16u 0x%-16X\n","UINT_MAX",UINT_MAX,UINT_MAX);
	printf("%-16s %-16ld 0x%-16lX\n","LONG_MAX",LONG_MAX,LONG_MAX);
	printf("%-16s %-16lu 0x%-16lX\n","ULONG_MAX",ULONG_MAX,ULONG_MAX);
	return 0;
}
