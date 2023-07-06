#include "main.h"

/**
* get_endianness - checks if multibyte data
* Return: 0 or 1
*/

int get_endianness(void)
{
	/* have a 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian would store 00, little would store 01 */

	int h = 0x00000001;
	char *p = (char *)&h;

	return (p[0]);
}
