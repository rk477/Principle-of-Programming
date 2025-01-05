/* Repeated offender
Practical 5, Part 4
@author your name */
                                                                 
#include<stdio.h>
#include <stdbool.h>

FILE *fp; // define a file pointer for the file

int main()
{
    /* code */
    // open the file and assign its address to file pointer
    fp = fopen("./dna_input.txt", "r");

    int size = 10;   	 	
	float suspect[size]; // declaring suspect array

    int sizeR;  
    int sizeC = 10;
    //float criminals[sizeR][sizeC]; // declaring criminals array later until sizeR has a value

	// read 10 input values into suspect array from the keyboard
	printf("Reading the 10 gene chromosomes of the suspect separated by spaces: \n");
	
	for (int i = 0; i < size; i++)
	  fscanf(fp, " %f", &suspect[i]);

    // read the number of criminals from the keyboard
	printf("Reading the number of criminals \n");
	fscanf(fp, " %d", &sizeR);

    float criminals[sizeR][sizeC]; // declaring criminals array

    // read multiple profiles of 10 input values into criminals array from the keyboard
	for (int i = 0; i < sizeR; i++) {
	    printf("Read the 10 gene chromosomes of %dth criminal separated by spaces: \n", i+1);

        // read 10 input values of a criminal into criminals array from the keyboard
        for (int j = 0; j <sizeC; j++)
	        fscanf(fp, " %f", &criminals[i][j]);
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

    fclose (fp); // always close files you've opened 
    return 0;
} 