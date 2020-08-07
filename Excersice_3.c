#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const char mult_in [] = "legs.txt";
const char mult_out[] = "hypotenuse.txt";

int main() 
{

FILE *numbers;
FILE *result;

char line [200];
int number1;
int number2;
float multiplication;


numbers = fopen(mult_in, "r");
	if(numbers == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

result = fopen(mult_out, "w+");
	if(result == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numbers)==0)
{

fscanf(numbers, "%d %d", &number1, &number2);

multiplication =    (((number1^2)+(number2^2))^(1/2));

fprintf(result, "The hipotenuse is %f\n", multiplication);

}



fclose(numbers);
fclose(result);

return 0;
}
