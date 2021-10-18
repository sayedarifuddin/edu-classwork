#include <stdio.h>

main()
{
	float o_to_c = 8;
	float o;

	printf("NUMBER of OUNCE(s): ");
	scanf("%f", &o);
	printf("%.3f CUP(s): \n", o / o_to_c);

	return 0;
}
