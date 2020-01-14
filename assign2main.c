
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define maxSize 10
#define minSize 1
#define exit_good 0
#define exit_bad 1


void displayVector(double *arr,int size);
void readInArray(double *arr, int size);
void normalizeVector(double *arr, int size);

/*Name of function: main() */
/*Purpose: to read in input for the length of the array and call helper 
functions such as displayVector(), etc */
/*Input: no input*/
/*Output: Prints out normalized and unnormalized vector as well as error msgs*/

int main(){

        while(1){ /*while loop runs until 0 or EOF*/
        int len;
        scanf("%d",&len); /*first value entered(len) is used as size of array*/

/*if the len value is between 1-9 it is good input and the prgm continues*/
        if(((len<maxSize) && (len>=minSize))){
            if(len == 0){
                exit(exit_good);
            }

            double arr[len];
            readInArray(arr,len);
            printf("VECTOR: [ ");
            displayVector(arr,len);
            printf("]");
	    normalizeVector(arr,len);
        }
/*if the len value is not in range [1,9] then a new len value is scanned*/
        else if(((len>maxSize) || (len<minSize)) || !isdigit(len)){
            if(len == 0){
                exit(exit_bad);
            }

            printf("BAD INPUT\n");
            scanf("%*[^\n]s");
            scanf("%d",&len);
            double arr[len];
            readInArray(arr,len);
	    printf("VECTOR: [ ");
            displayVector(arr,len);
            printf("]");
            normalizeVector(arr,len);
        }

}
}

