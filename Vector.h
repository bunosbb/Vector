#ifndef _VECTOR_H_
#define _VECTOR_H_

struct Vector {
    unsigned int size;
	double* data;
	unsigned int capacity;
}

void pushBackVector(Vector* vector, double data);
void popBackVector(Vector* vector);
void clearVector(Vector* vector);

#endif
