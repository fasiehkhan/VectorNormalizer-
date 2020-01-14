
/*Name of function: displayVector*/
/*Purpose: This function is used to print the array which is scanned in.*/
/*Parameters: The function parameters are an array and it's size. This function 
is always called after readInArray() funciton so it will always take in a full 
array*/
/*Return values: No return values.*/
/*Input: Input is a full array and it's size.*/
/*Output: Output is a vector which is displayed using array data structure. */

void displayVector(float *arr,int size);


/*Name of function: readInArray()*/
/*Purpose: to scan stdin and fill the array created in int main() with appropriate values to normalize*/
/*Parameters: An empty double array and its size, the array will be filled 
when the function is called and the size is necesarry for the for loop which 
is used to iterate over the array's memory locations.*/
/*Return values: This function has no return values.*/
/*Input: Input is an empty array and it's size, the function works even if 
a pointer to the first element of the array is given and size of array.*/
/*Output: No output.*/
void readInArray(float *arr, int size);


/*Name of funciton: normalizeVector()*/
/*Purpose: This funciton is used to normalize the vector which is read in from 
stdin. The normalized vector is then printed.*/
/*Parameters: This function takes in a double array and it's size.*/
/*Return values: No return values.*/
/*Input: Input is a  double array and it's size.*/
/*Output: Output is a normalized vector (the vector was represented by the array).*/
void normalizeVector(float *arr, int size);
