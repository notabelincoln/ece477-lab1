// Abe Jordan      ECE 477      Lab 1
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
	printf("%-24s %-24s %-20s\n","Type","Decimal","Hex");
	printf("%-24s %-24lu\n","Char Size",sizeof(char));
	printf("%-24s %-24lu\n","Short Size",sizeof(short));
	printf("%-24s %-24lu\n","Int Size",sizeof(int));
	printf("%-24s %-24lu\n","Long Size",sizeof(long));
	printf("%-24s %-24lu\n","Float Size",sizeof(float));
	printf("%-24s %-24lu\n","Double Size",sizeof(double));
	printf("%-24s %-24d 0x%-24X\n","INT_MAX",INT_MAX,INT_MAX);
	printf("%-24s %-24u 0x%-24X\n","UINT_MAX",UINT_MAX,UINT_MAX);
	printf("%-24s %-24ld 0x%-24X\n","LONG_MAX",LONG_MAX,LONG_MAX);
	printf("%-24s %-24lu 0x%-24X\n","ULONG_MAX",ULONG_MAX,ULONG_MAX);
	return 0;
}
