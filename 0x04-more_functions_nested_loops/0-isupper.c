#include <main.h>
/**
 * _isupper - uppercase letters
 * @c : cahr to chech
 *
 * return : 1 if upper 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z' )
	return (1);
else
	return (0);
}