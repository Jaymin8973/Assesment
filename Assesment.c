#include<stdio.h>

main()
{
	int n,p,b,d,i,ch,val;
	printf("\t\t************************************ Welcome ********************************************\n");
	while(1)
	{
	
	printf("\n\n1.Pizza		Price = 180rs/pcs");
	printf("\n2.Burger	Price = 100rs/pcs");
	printf("\n3.Dosa		Price = 120rs/pcs");
	printf("\n4.Idli		Price = 50rs/pcs");
	
	printf("\n\nPlease Enter Your choice... : ");
	
	scanf("%d",&n);
	
	switch (n)
	{
		
		case 1 :
			printf("You have selected pizza....");
			printf("\nEnter quantity : ");
			scanf("%d",&p);
			printf("\nAmount : %d\n",p*180);	
			printf("Total Amount  : %d",p*180);
			printf("\nDo you want to place more orders y & n : ");
			scanf(" %c",&val);
		
		
			if(val=='n')
			{
				printf("\n\n\t\t********************************** Thank Youu  ********************************************\n");
				return (0);
			}
			else if (val=='y')
			{
				
				printf("\n********** Manu ************\n");
			}
			else{
				printf("Enter valid choice");
			}
			
			break;
			
			
				case 2 :
			printf("You have selected Burger....");
			printf("\nEnter quantity : ");
			scanf("%d",&b);
			printf("\nAmount : %d\n",b*100);
			printf("Total Amount  : %d",p*180+b*100);
			printf("\nDo you want to place more orders y & n : ");
			scanf(" %c",&val);
		
		
			if(val=='n')
			{
				printf("\n\n\t\t********************************** Thank Youu  ********************************************\n");
				return (0);
			}
			else if (val=='y')
			{
				
				printf("\n********** Manu ************\n");
			}
			else{
				printf("Enter valid choice");
			}
			
			break;
			
			
				case 3 :
			printf("You have selected Dosa....");
			printf("\nEnter quantity : ");
			scanf("%d",&d);
			printf("\nAmount : %d\n",d*120);
			printf("Total Amount  : %d",p*180+b*100+d*120);
			printf("\nDo you want to place more orders y & n : ");
			scanf(" %c",&val);
		
		
			if(val=='n')
			{
					printf("\n\n\t\t********************************** Thank Youu  ********************************************\n");
				
				return (0);
			}
			else if (val=='y')
			{
				printf("\n********** Manu ************\n");
			}
			else{
				printf("Enter valid choice");
			}
			
			break;
			
			
				case 4 :
			printf("You have selected Idli....");
			printf("\nEnter quantity : ");
			scanf("%d",&i);
			printf("\nAmount : %d\n",i*50);
			printf("Total Amount  : %d",p*180+b*100+d*120+i*50);
			printf("\nDo you want to place more orders y & n : ");
			scanf(" %c",&val);
		
		
			if(val=='n')
			{
				printf("\n\n\t\t********************************** Thank Youu  ********************************************\n");
				return (0);
			}
			else if (val=='y')
			{
				printf("\n********** Manu ************\n");
			}
			else{
				printf("Enter valid choice");
			}
			
			break; 
			
			
	}

}

	
}
