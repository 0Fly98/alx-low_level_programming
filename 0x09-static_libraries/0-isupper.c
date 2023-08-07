#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
 * File: 0-isupper.c
 * Auhtor: [joshua]
 * ----------------------------
 * _isupper fiile contains the implementation of the _isuppper function,
 *  which checks whether a given charcter is an uppercase letter.
 *  The function returns 1 if the character is uppercase, and 0 otherwise.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
