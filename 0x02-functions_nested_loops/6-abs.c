#include "main.h"

/**
 * _abs - This is the main entry
 * @p: This is the parameter type
 *
 * Return: return a value int
 */

int _abs(int p)
{
	if (p < 0)
	{
		p = p * (-1);
		return (p);
	}
	else
	{
		return (p);
	}
}
