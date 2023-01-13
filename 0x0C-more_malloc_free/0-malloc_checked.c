#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
  //a pointer to alloceted b int
	void *p = malloc(b);
	//check if the pinter p is
	//not allcoted,exit if not
	if (p == NULL)
		exit(98);
	//if has value return it
	//succses!
	return (p);
}
