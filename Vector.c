#include "Vector.h"

void pushBackVector(Vector* vector, double data) {
    resizeVector(vector, vector->size + 1);
    vector->data[size] = data;
}

void popBackVector(Vector* vector) {
    resizeVector(vector, vector->size - 1);
}

void clearVector(Vector* vector) {
    resizeVector(vector, 0);
}
