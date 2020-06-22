

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
    
	
	// file pointer
	
	FILE * fpointer = fopen("test_output.txt", "w");
	
	
	// target personal information
	
	char Name1[10];
	char Name2[20];
	int Age;
	char Phone[40];
	char Email[40];

	
	printf("\nEnter target Full Name (e.g John Doe) : ");
	scanf("%s %s", Name1, Name2);
	printf("Enter target Age : ");
	scanf("%d", &Age);
	printf("Enter target Phone Number eg. (000)-000-000 : ");
	scanf("%s", Phone);
	printf("Enter target Email : ");
	scanf("%s", Email);
	
	
	// target Address
	
	int Address1; 
	char Address2[50];
	char Address2_1[50];
	char Address3[50];
	int Address4;
	char Address5[50];
	char Address6[10];
	
	
	printf("\nEnter target's house / apartment number : ");
	scanf("%d", &Address1);
	printf("Enter target's street (first_name_of_street_here last_name_of_street_here): ");
	scanf("%s %s", Address2, Address2_1);
	printf("Enter target's Town / City (if more than one word type initials) : ");
	scanf("%s", Address3);
	printf("Enter target's Zip Code : ");
	scanf("%d", &Address4);
	printf("Enter target's State (Initials_only!) : ");
	scanf("%s", Address5);
	printf("Enter target's country : ");
	scanf("%s", Address6);
	
	// internet information
	
	char instagramAccount[30];
	char snapchatAccount[30];
	char facebookProfileURL[100];
	char ip[16];
	char isp[50];
	
	
	printf("\nEnter target's Instagram Username : ");
	scanf("%s", instagramAccount);
	printf("Enter target's Snapchat Username : ");
	scanf("%s", snapchatAccount);
	printf("Enter target's facebook profile URL : ");
	scanf("%s", facebookProfileURL);
	printf("Enter target's IP : ");
	scanf("%s", ip);
	printf("Enter target's ISP : ");
	scanf("%s", isp);
	
	// save target personal info to a file 
	
	fprintf(fpointer, "\nFull name : %s %s\n", Name1, Name2);
	fprintf(fpointer, "Age : %d\n", Age);
	fprintf(fpointer, "Phone No. : %s\n", Phone);
	fprintf(fpointer, "Email : %s\n\n", Email);	
	
	// save target address info to a file
	
	fprintf(fpointer, "House / Apartment No. : %d\n", Address1);
	fprintf(fpointer, "Street : %s %s\n", Address2, Address2_1);
	fprintf(fpointer, "Town / City : %s\n", Address3);
	fprintf(fpointer, "Zip Code : %d\n", Address4);
	fprintf(fpointer, "State : %s\n", Address5);
	fprintf(fpointer, "Country : %s\n", Address6);
	
	// save target's online information to a file
	
	fprintf(fpointer, "\nInstagram Account : @%s\n", instagramAccount);
	fprintf(fpointer, "Snapchat Username : %s\n", snapchatAccount);
	fprintf(fpointer, "Facebook Profile : %s\n", facebookProfileURL);
	fprintf(fpointer, "IP : %s\n", ip);
	fprintf(fpointer, "ISP : %s\n", isp);
	
	fclose(fpointer);
	
	return 0;
}
