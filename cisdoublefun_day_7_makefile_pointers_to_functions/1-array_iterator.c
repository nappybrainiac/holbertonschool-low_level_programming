void array_iterator(int *array, int size, void (*action_func)(int)){
  int i = 0; /* to cycle through the array values */

  while(size > 0){ /* As long as there are elements in the array */
    action_func(array[i]);
    size--;
    i++;
  }
}
