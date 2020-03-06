void mx_sort_arr_int(int *arr, int size) {
	int temp;
	int i;
	int j;

   	for (j = 0; j < size; j++) {
   	    for (i = 0; i < size - 1; i++) {
   	    	if (arr[i] > arr[i + 1]) {
   	    		temp = arr[i];
   	    		arr[i] = arr[i + 1];
   	    		arr[i + 1] = temp;
   	    	}
   	    }
        
    }
}
