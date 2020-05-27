#include <stdint.h>


int main(int argc, char *argv[]) {

	int array[] = {1000, 1001, 1002, 1003}

	bitPacking(array);

	return 0;
}

int bitPacking(int array[]) {

	int i;

	//create new larger array to insert into

	for(i = 0; i < sizeof(array) i++) {
		// Bitmask the 12-bit integers
		// Insert the bitmasked integers into the new larger array
		// Shift the bits to the left 
	}

	// Return new larger array

}
