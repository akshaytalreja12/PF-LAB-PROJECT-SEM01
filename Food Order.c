#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void mainmenu();
void Resutraunts();
void about_us();
void timing();
void invalid();
void KFC();
void Mcdonalds();
void chilli();
void Hot();
void degree();
void mainmenu();
void loop();
void bill();
float total=0;
int main()
{
system("color E0");
mainmenu();
}
void mainmenu()
{
	system("cls");
	timing();
	printf("\t\t\t\t**\t\t\t\t\n\n");
	printf("\t\t\t\t------- WELCOME TO Food Delivery System------- \t\t\t\t\n\n");
	printf("\t\t\t\t**\t\t\t\t\n");
	printf("\n");
	printf("\n\t\t\t\t[1].Resutraunts\n\n\t\t\t\t[2].ABOUT US\n\n\t\t\t\t[3].EXIT\n\n\n\n");
	printf("\t\t\t\tENTER YOUR CHOICE--> ");

    int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		Resutraunts();
	}
	else if(choice==2)
	{
		about_us();
	}
	else if(choice==3)
	{
		exit(1);
	}
	else{
		invalid();
		mainmenu();
	}
}
void timing()
{
	time_t i;
	time(&i);
	printf("\t\t\t\t**\n");
	printf("\t\t\t\t\t%s\n",ctime(&i));  
}
 void Resutraunts()
{
	int choice;
	system("cls");
	timing();
	printf("\t\t\t\t**");
	printf("\n\n\n\t\t\t\t[1].KFC \n");
	printf("\n\t\t\t\t[2].Mcdonalds\n");
	printf("\n\t\t\t\t[3].chilli\n");
	printf("\n\t\t\t\t[4].Hot and spicy \n");
	printf("\n\t\t\t\t[5].1 degree\n");
	printf("\n\t\t\t\t[6].MAIN MENU\n");
		
	printf("\n\t\t\t\tENTER YOUR CHOICE--> ");
	scanf("%d",&choice);
	if(choice==1)
	{
		KFC();
	}
	else if(choice==2)
	{
		Mcdonalds();
	}
	else if(choice==3)
	{
		chilli();
	}
	else if(choice==4)
	{
		Hot();
	}
	else if(choice==5)
	{
		degree();
	}
	else if(choice==6)
	{
		mainmenu();
	}
	else
	{
		invalid();
		Resutraunts();
	}
}
void invalid(){
	printf("\n\t\t\t\tINVALID CHOICE!");
	system("cls");
}
void loop()
{
	int i;
	printf("\t\t\t\t");
	for(i=1;i<=40;i++)
	{
		printf("*");
	}
}
void KFC()
{
	int choice,q,ag;
	float tax=0.05;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\t[1].Chicken BURGER-RS.350\n\n");
	printf("\t\t\t\t[2].Chicken Chesse BURGER-RS.400\n\n");
	printf("\t\t\t\t[3].Chicken lolly pop-RS.300\n\n");
	printf("\t\t\t\t[4].Zinger burger-RS.480\n\n");	
	printf("\t\t\t\t[5].BACK\n\n");
	printf("\t\t\t\tENTER YOUR CHOICE--> ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(350*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			KFC();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		    }
	}
	else if(choice==2)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(400*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			KFC();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==3)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(300*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			KFC();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==4)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(480*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			KFC();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}
    else if(choice==5)
	{
		system("cls");
		Resutraunts();
	}
	else{
		printf("\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		KFC();
	}			
}
void Mcdonalds()
{
	int choice,q,ag;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\t[1].Chicken Mac-Rs.395\n\n");
	printf("\t\t\t\t[2].CHICKEN cripsy-RS.300\n\n");
	printf("\t\t\t\t[3].Sundae Ice cream-RS.270\n\n");		
	printf("\t\t\t\t[4].Mc nuggets-RS.280\n\n");
	printf("\t\t\t\t[5].BACK\n\n");	
	printf("\t\t\t\tENTER YOUR CHOICE--> ");
    scanf("%d",&choice);	
	if(choice==1)
	{	
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(395*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Mcdonalds();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}	
	else if(choice==2)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(300*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Mcdonalds();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}		
	else if(choice==3)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(270*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Mcdonalds();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==4)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(280*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Mcdonalds();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==5)
	{
		system("cls");
		Resutraunts();
	}
	else{
		printf("\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		Mcdonalds();
	}							
}
void chilli()
{
	int choice,q,ag;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\t[1].FRENCH FRIES-RS.100\n\n");
	printf("\t\t\t\t[2].NOODLES-RS.70\n\n");
	printf("\t\t\t\t[3].CHICKEN CHOW MEIN-RS.220\n\n");
	printf("\t\t\t\t[4].PURI PARATHA-RS.50\n\n");
	printf("\t\t\t\t[5].BACK\n\n");	
	printf("\t\t\t\tENTER YOUR CHOICE--> ");
	scanf("%d",&choice);	
	if(choice==1)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(100*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			chilli();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==2)
	{
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(70*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			chilli();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}
	else if(choice==3){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(220*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			chilli();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}
	else if(choice==4){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(50*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			chilli();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==5)
	{
		system("cls");
		Resutraunts();
	}			
	else{
		printf("\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		chilli();
	}			
}
void Hot()
{
	int choice,q,ag;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\t[1].Chicken roll-RS.140\n\n");
	printf("\t\t\t\t[2].Chicken mayo roll-RS.100\n\n");	
	printf("\t\t\t\t[3].Chicken handi-RS.800\n\n");
	printf("\t\t\t\t[4].Chicken cripsy roll-RS.180\n\n");
	printf("\t\t\t\t[5].BACK\n\n");
    printf("\t\t\t\tENTER YOUR CHOICE--> ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(140*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Hot();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}
	else if(choice==2){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(100*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Hot();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==3){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(800*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Hot();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
		else if(choice==4){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(180*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			Hot();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==5)
	{
		system("cls");
		Resutraunts();
	}
	else{
		printf("\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		Hot();
	}
}
void degree(void)
{
	int choice,q,ag;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\t[1].Soft drinks-RS.50\n\n");
	printf("\t\t\t\t[2].LEMONADE-RS.110\n\n");
	printf("\t\t\t\t[3].MANGO SHAKE-RS.180\n\n");
	printf("\t\t\t\t[4].STRAWBERRY SHAKE-RS.180\n\n");
	printf("\t\t\t\t[5].BACK\n\n");
    printf("\t\t\t\tENTER YOUR CHOICE--> ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(50*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			degree();
		}
		else if(ag==2)
		{
			bill();
		}
		else{
			invalid();
			Resutraunts();
		}
	}
	else if(choice==2){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(110*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			degree();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==3){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(180*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			degree();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
		else if(choice==4){
		printf("\n\t\t\t\tPLEASE PROVIDE QUANTITY--> ");
		scanf("%d",&q);
		total=total+(180*q);
		printf("\n\t\t\t\tENTER [1] TO ORDER AGAIN\n\n\t\t\t\tENTER [2] TO GET YOUR BILL\n\n\t\t\t\tENTER YOUR CHOICE--> ");
		scanf("%d",&ag);
		if(ag==1)
		{
			printf("\n\n");
			degree();
		}
		else if(ag==2)
		{
			bill();
		}
			else{
				invalid();
				Resutraunts();
		}
	}
	else if(choice==5)
	{
		system("cls");
		Resutraunts();
	}
	else{
		printf("\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		degree();
	}
}
void bill()	
	{
		int choice;
	    int i,cd;
	    float d;
			for(i=0;i<=20000;i++)
			{
				printf("\r\t\t\t\tYOUR BILL IS PROCESSING(%d)",i/200);
			}
			system("cls");
			timing();
			loop();
			printf("\n\n");
			printf("\n\t\t\t\tBILL:%f\n",total);
			printf("\n\t\t\t\tSales Tax:%f\n\n",total*0.05);
			printf("\t\t\t\tNET BILL:%f\n",total+(total*0.05));
			printf("\n\t\t\t\tDelivery charges=150/free");
			if(total>=1000)
			{
				printf("\n\t\t\t\tdelivery charge is free");
			}
			else
		    {
		    	total=total+(total*0.05)+150;
		    	printf("\n\t\t\t\tTotal price is %f",total);
		    }
			printf("\n\t\t\t\tWOULD YOU LIKE TO PAY WITH CARD?");
			printf("\n\t\t\t\t(7 Percent DISCOUNT FOR PAYMENT MADE THROUGH CARD)");
			printf("\n\n\t\t\t\t[1].YES\n\n\t\t\t\t[2].NO");
			printf("\n\n\t\t\t\tENTER YOUR CHOICE--> ");
			scanf("%d",&choice);
			if(choice==1){
				printf("\n\t\t\t\tenter card number:");
				scanf("%d",&cd);
				d=(total+(total*0.05))-((total+(total*0.05))*0.07);
				printf("\n\t\t\t\tTHANKYOU FOR ORDERING!\n");
				printf("\n\t\t\t\tYOUR NEW BILL:%.2f",d);
				printf("\n\n\t\t\t\tENJOY YOUR FOOD:)");
			}
			else if(choice==2){
				printf("\n\t\t\t\tTHANKYOU FOR ORDERING!\n");
				printf("\n\t\t\t\tENJOY YOUR FOOD:)");	
			}
			else{
				printf("\n\n\t\t\t\tINVALID CHOICE!");
				system("cls");
				bill();
			}
			printf("\n\n\t\t\t\tENTER ANY KEY TO EXIT.");
		}
	void about_us(){
	int choice;
	system("cls");
	timing();
	loop();
	printf("\n\n\n");
	printf("\t\t\t\tTHIS PROJECT IS DESIGNED BY:\n\n");
printf("\t\t\t\tAkshay talreja \n\n");
printf("\t\t\t\tZaid Bin Adnan \n\n");

	printf("\t\t\t\tA PERSON WILL BE ABLE TO ORDER FOOD OF HIS/HER CHOICE\n\t\t\t\tWITH THE DIFFERENT KINDS OF Food PROVIDED.");
	printf("\n\t\t\t\tA BILL WILL BE GENERATED AFTER HE/SHE ORDERS FOOD.\n\n");
	printf("\t\t\t\tENTER [1] TO RETURN TO MAIN MENU--> ");
	scanf("%d",&choice);
	if(choice==1){
		mainmenu();
	}
	else{
		printf("\n\n\t\t\t\tINVALID CHOICE!");
		system("cls");
		about_us();
	}	
	}

