/* match two DNA profiles
Matching profile B
Use float instead of double

@author J Hong
*/

#include<stdio.h>
#include <stdbool.h>

int main(){
	   
    int size = 10;   	 	
	float suspect[size]; // declaring suspect array

    int sizeR = 3;  
    int sizeC = 10;
    float criminals[sizeR][sizeC]; // declaring criminals array

	// read 10 input values into suspect array from the keyboard
	printf("Enter the 10 gene chromosomes of the suspect separated by spaces: \n");
	
	for (int i = 0; i < size; i++)
	  scanf(" %f", &suspect[i]);

    // read multiple profiles of 10 input values into criminals array from the keyboard
	for (int i = 0; i < sizeR; i++) {
	    printf("Enter the 10 gene chromosomes of %dth criminal separated by spaces: \n", i+1);

        // read 10 input values of a criminal into criminals array from the keyboard
        for (int j = 0; j <sizeC; j++)
	        scanf(" %f", &criminals[i][j]);
        }

    // match the profile of the suspect with each of the criminals

    for (int i = 0; i < sizeR; i++) {
        bool match = true; // by default, the i+1th criminal matches

        for (int j = 0; j <sizeC; j++) {
            printf(" %.1f ", suspect[j]);
        }

        printf(" \n");

        for (int j = 0; j <sizeC; j++) {
            printf(" %.1f ", criminals[i][j]);
        }

        printf(" \n");

        for (int j = 0; j <sizeC; j++) {
	        if (suspect[j] != criminals[i][j])
                match = false;
        }

        // display matching result
	    if (match) 
            printf("The profile of the %dth criminal matches! \n", i+1);
        else
            printf("The profile of the %dth criminal doesn't match! \n", i+1);
    }

	return 0; 
}
