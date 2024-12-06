/* match two DNA profiles represented using two one-dimensional arrays

@author J Hong
*/

#include<stdio.h>
#include <stdbool.h>

int main(){
	   
	int size = 10;   	 	
	float suspect[size]; // declaring suspect array
    float criminal[size]; // declaring criminal array

	// read 10 input values into suspect array from keyboard
	printf("Enter the 10 gene chromosomes of the suspect separated by spaces: \n");
	for (int i = 0; i < size; i++)
	  scanf(" %f", &suspect[i]);

    // read 10 input values into criminal array from keyboard
	printf("Enter the 10 gene chromosomes of the criminal separated by spaces: \n");
	for (int i = 0; i < size; i++)
	  scanf(" %f", &criminal[i]);

    // match two profiles
    bool match = true;
    for (int i = 0; i < size; i++) 
	  if (suspect[i] != criminal[i])
      match = false;

    // display matching result
	if (match) 
      printf("The two profiles match! \n");
    else
      printf("The two profiles don't match! \n");
    
	return 0; 
}
