// Bubble sort in C

#include <stdio.h>

void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int i = 0; i < size - 1; i++) {
      
    // loop to swap adjacent items
    for (int j = 0; j< size - i - 1; j++) {
      
      // swap if items are out of order
      if (array[j] > array[j + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d,  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {
    74, 63, 72, 17,
    82, 60, 58, 45
  };
  
  int size = sizeof(array) / sizeof(array[0]);

  bubbleSort(array, size);
  
  printf("Sorted array:\n");
  printArray(array, size);
}
