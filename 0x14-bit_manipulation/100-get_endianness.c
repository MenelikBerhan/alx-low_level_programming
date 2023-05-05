#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Checks for which type of endianness used on the
 * machine used to run the program.
 *
 * Return: 0 if big endian, 1 if little endian.
 * Description: Big endian - first byte of a number's value is stored 1st,
 * while Little endian - last byte of a number's value is stored 1st.
*/
int get_endianness(void)
{
	unsigned short int test = 16972; /* in hex = 0x424C , in (char *) = "BL" */

	return (((char *) &test)[0] == 'L');
	/*  Or: return (((char *) &test)[1] == 'B'); */
}
