#include <stdio.h>
#include <stdlib.h>

typedef struct darray_s {
  int size;
  int max_size;
  int *data;
} darray_t;

darray_t* darray_create(int size) {

  darray_t * arr = malloc(sizeof(darray_t));

  arr->size = 0;
  arr->max_size = size;
  arr->data = malloc(sizeof(int) * size);
  
  return arr;
}

void darray_destroy(darray_t *arr) {
  free(arr->data);
  free(arr);
}

void darray_append(darray_t *arr, int val) {
  arr->data[arr->size] = val;
  arr->size += 1;

  // check if array needs to be resized
}

int darray_pop(darray_t *arr) {
  // index array by the decremented value of arr->size, *after* the dec operation
  // equivalent to:
  // int val = arr->data[arr->size - 1];
  // arr->size--;
  // return val;
  return arr->data[--arr->size];
}

int darray_get(int i);
void darray_set(int i, int val);

void darray_print(darray_t *arr) {
  printf("k, v\n");
  printf("----\n");
  for (int i = 0; i < arr->size; i++) {
    printf("%i, %i\n", i, arr->data[i]);
  }
}


int main () {

  darray_t * arr = darray_create(4);

  darray_append(arr, 3);
  darray_append(arr, 2);
  darray_append(arr, 1);

  darray_print(arr);

  printf("popping value: %i\n", darray_pop(arr));

  darray_print(arr);
  darray_destroy(arr);
}
