#include "Vector.h"

void resizeVector (Vector* vector, unsigned int new_size) {
	if (vector->capacity < new_size) {
		double* new_data = (double*)malloc(2 * new_size * sizeof(double));
		memcpy(new_data, vector->data, vector->size);
		free(vector->data);
		vector->data = new_data;
		vector->capacity = 2 * new_size;
	}
	if (vector->capacity > new_size * 4) {
		double* new_data = (double*)malloc(2 * new_size * sizeof(double));
		memcpy(new_data, vector->data, new_size);
		free(vector->data);
		vector->data = new_data;
		vector->capacity = 2 * new_size;
	}
	vector->size = new_size;
}

int insertVector (Vector* vector, unsigned int pos, double new_item) {
	if (pos >= vector->size) {
		return -1;
	}
	resizeVector(vector, vector->size + 1);
	for (int i = vector->size - 2; i >= (int)pos; --i) {
		vector->data[i + 1] = vector->data[i];
	}
	vector->data[pos] = new_item;
	return pos;
}
