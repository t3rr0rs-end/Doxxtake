

// Doxxtake tool by plague

#include <stdio.h>
#include <stdlib.h>

int main(){
	
    // banner 
    
    printf(" ######                                                  \n");
    printf(" #     #  ####  #    # #    # #####   ##   #    # ###### \n");
    printf(" #     # #    #  #  #   #  #    #    #  #  #   #  #      \n");
    printf(" #     # #    #   ##     ##     #   #    # ####   #####  \n");
    printf(" #     # #    #   ##     ##     #   ###### #  #   #      \n");
    printf(" #     # #    #  #  #   #  #    #   #    # #   #  #      \n");
    printf(" ######   ####  #    # #    #   #   #    # #    # ###### \n");
    printf("---------------------------------------------------------\n");
    
    
    // VARIABLES
    
    char targetName1[50];
    char targetName1_1[50];
    int targetAge;
    
    int targetAddress1[50]; // house number
    char targetAddress2[50]; // street
    char targetAddress2_1[50]; // second word for address 2
    char targetAddress3[50]; // town or city
    int targetZipCode;       // zip code
    char targetAddress4[50]; // state
    
    char targetEmail[50];
    char targetPhone[50;
	
	
	// inputting the victim information 
	
	printf("\nEnter targets's First and Last name : ");
	scanf("%s %s", targetName1, targetName1_1);
	printf("\nEnter target's age : ");
	scanf("%d", &targetAge);
	printf("Enter target's Phone : ");
	scanf("%s", targetPhone);
	printf("\n\nEnter target's Email : ");
	scanf("%s", targetEmail);
	
	printf("\n\nEnter target's house / apartment number : ");
	scanf("%d", &targetAddress1);
	printf("\nEnter target's street : ");
	scanf("%s %s", targetAddress2, targetAddress2_1);
	printf("\nEnter target's town / city : ");
	scanf("%s", targetAddress3);
	printf("\nEnter target's Zip Code : ");
	scanf("%d", &targetZipCode);
	printf("\nEnter target's state : ");
	scanf("%s", targetAddress4);
	
	
	return 0;
}
                                                         

