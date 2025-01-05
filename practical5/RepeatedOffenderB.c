/* Repeated offender with functions
Practical 5, Part 2

@author your name */
                                                                 
#include<stdio.h>
#include <stdbool.h>
bool matchingProfiles(float suspect[], float aCriminal[]);

FILE *fp; // define a file pointer for the file

int main()
{
    /* code */
    // open the file and assign its address to file pointer
    fp = fopen("dna_input.txt", "r");

    int size = 10;   	 	
	float suspect[size]; // declaring suspect array

    int sizeR;  
    int sizeC = 10;

	// read 10 input values into suspect array from the keyboard
	printf("Reading the 10 gene chromosomes of the suspect separated by spaces: \n");
	
	for (int i = 0; i < size; i++)
	  fscanf(fp, " %f", &suspect[i]);

    // read the number of criminals from the keyboard
	printf("Reading the number of criminals \n");
	fscanf(fp, " %d", &sizeR);

    float criminals[sizeR][sizeC]; // declaring criminals array

    // read multiple profiles of 10 input values into criminals array from the file
	for (int i = 0; i < sizeR; i++) {
	    printf("Read the 10 gene chromosomes of %dth criminal separated by spaces: \n", i);

        // read 10 input values of a criminal into criminals array from the file
        for (int j = 0; j <sizeC; j++)
	        fscanf(fp, " %f", &criminals[i][j]);
        }

    // match the profile of the suspect with each of the criminals

    for (int i = 0; i < sizeR; i++) {
        // match two profiles and display matching result
        // call function, matchingProfiles() with suspect array and ith row of crinimals array
	    if (matchingProfiles(suspect, criminals[i]))  
            printf("The profile of the %dth criminal matches! \n", i);
        else
            printf("The profile of the %dth criminal doesn't match! \n", i);
    }

    fclose (fp); // always close files you've opened 
    return 0;
} 
/******************************************************************/
// define function matchingProfiles()
// 1st parameter takes suspect array, 2nd parameter takes ith row of criminlas array
bool matchingProfiles(float suspect[], float aCriminal[]) {
    /* code */
    bool match = true; // by default, the ith criminal matches

        for (int j = 0; j <10; j++) {
            printf(" %.1f ", suspect[j]);
        }
        printf(" \n");

        for (int j = 0; j <10; j++) {
            printf(" %.1f ", aCriminal[j]);
        }
        printf(" \n");

        for (int j = 0; j <10; j++) {
	        if (suspect[j] != aCriminal[j])
                match = false;
        }
    return match;
}