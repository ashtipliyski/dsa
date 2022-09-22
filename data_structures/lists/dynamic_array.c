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

void darray_double_size(darray_t * arr) {
  int * new_data = malloc(sizeof(int) * arr->max_size * 2);

  for (int i = 0; i < arr->max_size; i++) {
    new_data[i] = arr->data[i];
  }

  free(arr->data);
  arr->data = new_data;
  arr->max_size *= 2;
}

void darray_append(darray_t *arr, int val) {
  // check if array needs to be resized
  if (arr->size == arr->max_size) {
    darray_double_size(arr);
  }

  arr->data[arr->size] = val;
  arr->size += 1;

}

int darray_pop(darray_t *arr) {
  // index array by the decremented value of arr->size, *after* the dec operation
  // equivalent to:
  // int val = arr->data[arr->size - 1];
  // arr->size--;
  // return val;
  return arr->data[--arr->size];
}

int darray_get(darray_t *arr, int i) {
  // assume that i will always be less than size
  if (i >= arr->size) {
    printf("ERROR: attempted access outside of range\n.");
    exit(1);
  }
  
  return arr->data[i];
}
void darray_set(darray_t *arr, int i, int val) {
  // assume that i will always be less than size
  if (i >= arr->size) {
    printf("ERROR: attempted access outside of range\n.");
    exit(1);
  }

  arr->data[i] = val;
}

void darray_print(darray_t *arr) {
  
  printf("----\n");
  printf("s = %i, ms = %i\n", arr->size, arr->max_size);
  printf("----\n");
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

  // after creation/append
  darray_print(arr);

  printf("popping value: %i\n", darray_pop(arr));

  // after pop
  darray_print(arr);


  // check get
  printf("value to get, arr[%i] = %i\n", 1, darray_get(arr, 1));

  // check set
  printf("array after set\n");
  darray_set(arr, 0, 11);
  darray_print(arr);

  // force extension of array by appending outside of limit
  darray_append(arr, 7);
  darray_append(arr, 8);
  darray_append(arr, 9);
  darray_append(arr, 5);

  printf("after extension");
  darray_print(arr);

  darray_destroy(arr);
}
