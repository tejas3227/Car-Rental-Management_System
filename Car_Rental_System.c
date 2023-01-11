
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int a=4400,b=5600,c=7200;
int m,v,r,y;
char name[10];
char Address[20];
int Number[10];
char review[30];

main()
{
/* Used an name password for authentication */
char name[20];
char password[10];

start:
printf("Enter username: \n");
scanf("%s",name);
printf("\n");
printf("Enter password: \n");
scanf("%s",password);

/* We have used static name and password */
if (strcmp(name, "Customer") == 0 && strcmp(password, "Pass") == 0)
printf("\nWelcome! Dear customer \n");

else
goto End;

/* Personal Information Section */
int j;
printf("\n");
printf("Enter Your Name: \n");
gets(name);
gets(name);
printf("\n");
printf("Enter Your Number: \n");
gets(Number);
printf("\n");
printf("Enter Your Address: \n");
gets(Address);

/* Dashboard */
    int u,d,r,l,n,z;
    system("cls");
    printf("\n CAR RENTAL APPLICATION \n");
    printf("\n ----------------------- \n");
    printf("\n Press 1 for Hatchback Vehicles \n");
    printf("\n Press 2 for Sedan Vehicles \n");
    printf("\n Press 3 for SUV Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n Press any Option: \n");
    scanf("%d", &u);
	switch(u)
    {
      case 1:
      printf("\n You have chosen Hatchback Vehicles \n");
      printf("\n Hatchback Vehicle Available are \n");
      printf("\n WagonR, Grand i10, Santro \n");
      printf("\n ------------------------------ \n");
      printf("\n do u want to hire, Press 1 | WagonR, 2 | Grand i10, 3 | Santro \n");
      scanf("%d", &d);
	  switch(d)
	  {
	   case 1:
	   printf("\n You have selected WagonR | Cost 4400rs per day \n");
	   a=4400;
       break;

	   case 2:
	   printf("\n You have selected Grand i10 | Cost 4400rs per day \n");
	   a=4400;
	   break;

	   case 3:
	   printf("\n You have selected Santro | Cost 4400rs per day \n");
	   a=4400;
	   break;

	   }
       printf("\n Total No of Days: \n");
	   scanf("%d",&m);
	   printf("\n------------------------------\n");
	   printf("\n Total Rent %d",a*m);
	   printf("\n------------------------------\n");
	   v=a*m;
	break;

	case 2:
	printf("\n You have chosen Sedan Vehicles \n");
	printf("\n Sedan Vehicles Available are \n");
	printf("\n Swift Dzire, Hyundai Aura , Honda Amaze \n");
	printf("\n ----------------------------- \n");
	printf("\n do u want to hire , press 1 | Swift Dzire, 2 | Hyundai Aura, 3 | Honda Amaze \n");
	scanf("%d", &r);
	switch (r)
	{
	    case 1:
	    printf("\n You have selected Swift Dzire | Cost 5600rs per day \n");
	    break;

	    case 2:
	    printf("\n You have selected Hyundai Aura | Cost 5600rs per day \n");
	    break;

	    case 3:
	    printf("\n You have selected Honda Amaze | Cost 5600rs per day \n");
	    break;
        b=5600;
	}
	printf("\n Total No of Days: \n");
	scanf("%d",&m);
	printf("\n------------------------------\n");
	printf("\n Total Rent is %d",b*m);
	printf("\n------------------------------\n");
	r=b*m;
	break;

	case 3:
	printf("\n You have chosen SUV Cars");
	printf("\n SUV Vehicles Available are \n");
	printf("\n Tavera, Ertiga, Traveller \n");
	printf("\n ------------------------------ \n");
	printf("\n Do u want to hire, Press 1 | Tavera, 2 | Ertiga, 3 | Traveller \n");
	scanf("%d", &l);
	switch(l)
	{
	    case 1:
	    printf("\n You have selected Tavera | Cost 7200rs per day \n");
	    break;

	    case 2:
	    printf("\n You have selected Ertiga | Cost 7200rs per day \n");
	    break;

	    case 3:
	    printf("\n You have selected Traveller | Cost 7200rs per day \n");
	    break;
	    c=7200;
	}
	printf("\n Total No of Days: \n");
    scanf("%d",&m);
    printf("\n------------------------------\n");
    printf("\n Total Rent is %d",c*m);
    printf("\n------------------------------\n");
    y=c*m;
	break;


    }
/* Number of days to calculate the rent
printf("Total No of Days: \n");
scanf("%d",&m);
printf("\n------------------------------\n");
printf("Total Rent is %d",c*m);
printf("\n------------------------------\n");
y=c*m;
break;*/


/* Payment Section */
   printf("\v");
   int p,q,A,B,C;
   system("cls");
   printf("\n Choose your payment mode : \n");
   printf("\n Press 1 for  online \n");
   printf("\n Press 2 for  offline \n");
   printf("\n Press any option \n");
   scanf("%d",&p);
   switch(p)
   {
    case 1:
        printf("\n You have choosen online mode \n");
        printf("\n Google pay,Phone pay");
        printf("\n Press 1 |Google Pay/Phone pay ,2|Bank Transfer \n");
        printf("\n------------------------------------------------\n");
        scanf("%d",&q);
        switch(q)
        {
        case 1:
            printf("\n You have selected Google Pay/Phone pay |No 9021960096 \n");
            printf("\n");
            break;
        case 2:
            printf("\n You have selected Bank Transfer |Acc No 12165676874567 | IFSC Code MAHB0000324  \n");
            printf("\n");
            break;
        }
        break;

        case 2:
            printf("\n-------------------------------------------------------------\n");
            printf("\n You have choosen offline mode \n");
            printf("\n You can visit us.\n");
            printf("\n Name :Aadarsh Chougale \n");
            printf("\n Contact No : 9021856900 \n");
            printf("\n Address : Shree Buiding, Ground Floor, Rajarampuri ,Kolhapur \n");
            printf("\n-------------------------------------------------------------\n");
            goto End2;
            break;

    }

    /* Processing payment */
    End1:
    system("cls");
    printf("\n Payment Processing.....\n");
    sleep(10);
    printf("\n--------- Reciept Generation----------\n");
    puts(name);
    printf("\n");
    puts(Number);
    printf("\n");
    puts(Address);
    printf("\nWe have recived your payment.\n");
    printf("\nVisit: Shree Buiding, Ground Floor, Rajarampuri, Kolhapur.\n");
    printf("\nThank You! \n");
    printf("\n---------------------------------------\n");

    /* Review Section */
    End2:
    printf("\n---------------------------------------\n");
    printf("Give Your review: \n");

    gets(review);
    gets(review);
    goto close;

    /* If username and password is incorrect */
    End:
    printf("\nThe Username or Password You Entered is Invalid\n");
    printf("\n");
    goto start;
    return 0;

    close:
    printf("\n---------------------------------------\n");
    printf("\nProgram Finished Successfully......");
    printf("\n---------------------------------------\n");
    printf("\n");
}

