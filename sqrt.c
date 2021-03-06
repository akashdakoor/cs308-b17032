/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Here starts the main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0)
	{
		int pos = -input;
		printf("NEGSUPPORT: Sqrt of %d is %fi\n", input, sqrt(pos));
	}
	else
		printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT: End of program. Exiting.");
	return(0);

} // end main
