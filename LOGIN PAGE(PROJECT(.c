#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int homepage()
{
	char fname[10];
	
	char lname[10];
	char branch[20];
	char mail[20];
	printf("\nENTER NAME :");
	fflush(stdin);
	scanf("%s%s",&fname,&lname);
	printf("\nENTER MAIL:");
	fflush(stdin);
	scanf("%s",&mail);
	printf("\nENTER BRANCH:");
	fflush(stdin);
	scanf("%s",&branch);
	
	printf("\n NAME IS %s %s",fname,lname);
	printf("\n MAIL IS %s",mail);
	printf("\n BRANCH IS %s",branch);
}
int main()
{
	char *uid="STUDENT",*psd="210704";
	char uname[10],pass[10],a[10],e[10];
	int len1,len2,c,b;
	
	int choice;
	printf("*********************");
	printf("\n                                                STUDENT APPLICATION FOR THE INSTITUTES                                               ");
	printf("\n                                                       GOVERNMENT POLYTECHNICH                                                                 ");
	printf("\n                                                             GANDHINAGAR                                             ");
	printf("\n                                                MADE BY : MUKUL SHARMA                                               \n");
	printf("\n**********************");
	
	printf("                                            STUDENT PORTAL");
	printf("\n                                         PRESS <1> NEW REGISTRATION");
	printf("\n                                     PRESS <2> REGISTRATION DETAILS ");
    printf("\n                                     PRESS <3> SERVIVES OFFERED HERE");
    printf("\n                                     PRESS <4> FEES STRUCTURE");
	printf("\n                                               ~ ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    	 printf("\n         ---------------------------------------------------------------------------------------------------       ");
		 printf("\n");
		 printf("\n                                                 ENTER LOGIN DETAILS :                                                 ");
		 printf("\n                                                 --------------------- ");
		 printf("\nENTER YOUR USERNAME:");
		 scanf("%s",uname);
		 printf("\nENTER PASSWORD:");
		 scanf("%s",pass);
		 
		 len1=strcmp(uid,uname);
		 len2=strcmp(psd,pass);
		 
		 if(len1==len2)
		 {
		 homepage();
		 }
		 else
		 {
		 printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD");
		 }
		 printf("\n------------------------------------------------------------------------------------------------------------------------");
		 break;
	
	case 2:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                                 REGISTRATION DETAILS:");
	    printf("\n                                                ----------------------- ");
		printf("\nENTER YOUR NAME :");
    	fflush(stdin);
    	scanf("%s %s",&a,&e);
    	printf("\nENTER YOUR DOB :");
    	fflush(stdin);
    	scanf("%d",&b);
    	printf("\nENTER YOUR MOBILE NUMBER :");
    	fflush(stdin);
    	scanf("%d",&c);
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		
	case 3:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                           SERVICES OF OUR INSTITUTE : ");
		printf("\n                                           ----------------------------------- ");
		printf("\n");
    	printf("\n - HOSTEL FACILITY.");
    	printf("\n - CAMPUS FACILITY.");
    	printf("\n - SPORTING.");
    	printf("\n - 24*7 MEDICAL FACILITY.");
    	printf("\n");
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
    	break;
    	
    case 4:
    	printf("\n                                               FEES  STRUCTURE : ");
		printf("\n                                           ----------------------------------- ");
		printf("\n");
    	printf("\n - B.TECH           1.5LAKHS(1st year fees).");
    	printf("\n - MBA              1 LAKH(1st year fees).");
    	printf("\n - M.SC             80,000(1st year fees).");
    	printf("\n - BBA              75,000(1st year fees).");
    	printf("\n");
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
	}
	
	return 0;
}
