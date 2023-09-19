
#include <stdio.h>

int main()
{
	float cels, fahr;

	cels = 25.0;			/* Temperatura en º C  */
	fahr = 32.0 + 9.0 * fahr / 5.0;	/* Temperatura en º Fahrenheit */

	printf(">>> %f ºC son %f ºF\n", cels, fahr );

}
