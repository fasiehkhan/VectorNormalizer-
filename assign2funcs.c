#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define maxSize 10 /*number of values in the vector must be less than this*/
#define minSize 1 /* the least amount of values allowed in the vector*/
#define exit_good 0 /*exit code for good input*/
#define exit_bad 1 /*exit code for bad input*/

/*Name of function: readInArray()*/
/*Purpose: to scan stdin and fill the array created in int main() with appropriate values to normalize*/
/*Parameters: An empty double array and its size, the array will be filled 
when the function is called and the size is necesarry for the for loop which 
is used to iterate over the array's memory locations.*/
/*Return values: This function has no return values.*/
/*Input: Input is an empty array and it's size, the function works even if 
a pointer to the first element of the array is given and size of array.*/
/*Output: No output.*/


void readInArray(double *arr, int size){
        char trash [50]; /*this char array is used to dump stdin we dont want*/
        for (int i = 0; i < size; i++) {
            if(scanf("%lf",&arr[i])==1){ /*if a number is scanned then it is stored in the specified array memory location */
                if(arr[i]==0.000){
                    exit(exit_good);
                }
                continue;
        }

	else if(scanf("%lf",&arr[i])!=1){
        if(arr[i]==0.000){
            exit(exit_bad);
        }
           printf("BAD INPUT\n");
            break;
            scanf("%d",&size);
            double arr[size];
            scanf("%lf",&arr[i]);

        }


}

        fgets(trash,50,stdin);

/*Name of function: displayVector*/
/*Purpose: This function is used to print the array which is scanned in.*/
/*Parameters: The function parameters are an array and it's size. This function 
is always called after readInArray() funciton so it will always take in a full 
array*/
/*Return values: No return values.*/
/*Input: Input is a full array and it's size.*/
/*Output: Output is a vector which is displayed using array data structure. */

void displayVector(double *arr,int size){
        for(int i =0; i<size-1;i++){
            printf("%0.3f, ", arr[i]);
        }
        if(arr[size-1]){ /*print the last vector value without a comma*/
            printf("%0.3f ", arr[size-1]);
        }
}
       
/*Name of funciton: normalizeVector()*/
/*Purpose: This funciton is used to normalize the vector which is read in from 
stdin. The normalized vector is then printed.*/
/*Parameters: This function takes in a double array and it's size.*/
/*Return values: No return values.*/
/*Input: Input is a  double array and it's size.*/
/*Output: Output is a normalized vector (the vector was represented by the array).*/
void normalizeVector(double *arr, int size){
double square = 0;
        double N;/*this value is the normalize value which each vector value will be divided by*/
        
        for(int i = 0; i<size; i++){
            square += arr[i]*arr[i];
        }
            
        N = sqrt(square);
        printf(" NORMALIZED: [ ");
        
        for(int i = 0; i<size-1;i++){
            printf("%0.3f, ", arr[i]/N);
}
        if(arr[size-1]){
            printf("%0.3f ", arr[size-1]/N);
        }
        printf("]");
        printf("\n");
}       
        
~                                                                               
                        
