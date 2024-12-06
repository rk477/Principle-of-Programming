/* match two DNA profiles

@author J Hong
*/

#include<stdio.h>
#include <stdbool.h>

int main(){
	   
    int size = 10;  
	int sizeR = 3;  
    int sizeC = 10; 	 	
	double suspect[size]; // declaring suspect array
    double criminals[sizeR][sizeC]; // declaring criminals array

	// read 10 input values into suspect array from the keyboard
	printf("Enter the 10 gene chromosomes of the suspect separated by spaces: \n");
	
	for (int i = 0; i < size; i++)
	  scanf(" %lf", &suspect[i]);

    // read mutiple profiles of 10 input values into suspect arrays from the keyboard
	printf("Enter the 10 gene chromosomes of the 3 criminals separated by spaces: \n");

	for (int i = 0; i < sizeR; i++) {
        // read mutiple profiles of 10 input values into criminals array from the keyboard
	    printf("Enter the 10 gene chromosomes of %dth criminal separated by spaces: \n", i+1);

        for (int j = 0; j <sizeC; j++)
	        scanf(" %lf", &criminals[i][j]);
        }

    // match the profile of the suspect with each of the criminals

    for (int i = 0; i < sizeR; i++) {
        bool match = true; // by default, the i+1th criminal matches

        for (int j = 0; j <sizeC; j++) {
            printf(" %lf ", suspect[j]);
        }

        printf(" \n");

        for (int j = 0; j <sizeC; j++) {
            printf(" %lf ", criminals[i][j]);
        }

        printf(" \n");

        for (int j = 0; j <sizeC; j++) {
            printf(" %lf ", criminals[i][j]);
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
