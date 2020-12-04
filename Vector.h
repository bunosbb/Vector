#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <stdlib.h>
#include <string.h>

struct Vector {
	unsigned int size;
	double* data;
	unsigned int capacity;
};

void resizeVector (Vector* vector, unsigned int new_size);

int insertVector (Vector* vector, unsigned int pos, double new_item);

#endif
