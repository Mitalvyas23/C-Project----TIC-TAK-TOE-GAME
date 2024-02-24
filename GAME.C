#include<stdio.h>
#include<conio.h>

void print();
int checkwin();
void clear();

int i,j,player=1;
char win1,player1,player2,a[]={'0','1','2','3','4','5','6','7','8','9'};

void main()
{
int tic,win=-1,result,choice;
clrscr();
printf("WELCOME TO TIC TAC TOE GAME \n");
printf(" 1 : PLAY \n");
printf(" 2 : EXIT \n");
printf("ENTER YOUR CHOICE : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("NOTE :: PLEASE ENTER CHARACTER\n");
	printf(" ENTER FIRST PLAYER CHOISE : ");
	scanf(" %c",&player1);
	printf(" ENTER SECOND PLAYER CHOISE : ");
	scanf(" %c",&player2);
	printf("\n\nTIC TAC TOE GAME : \n");
	printf("    |  %c |  %c |  %c |\n",a[1],a[2],a[3]);
	printf("____|____|____|____|____\n");
	printf("    |  %c |  %c |  %c |\n",a[4],a[5],a[6]);
	printf("____|____|____|____|____\n");
	printf("    |  %c |  %c |  %c |\n",a[7],a[8],a[9]);

	while(win==-1)
	{
	if(player%2 != 0)
	{
	printf("PLAYER 1 : WHICH PLACE YOU WANT TO TIC : ");
	scanf("%d",&tic);
	a[tic]=player1;
	print();
	}
	else
	{
	printf("PLAYER 2 : WHICH PLACE YOU WANT TO TIC : ");
	scanf("%d",&tic);
	a[tic]=player2;
	print();
	}
	if(tic <= 0 || tic > 9)
	{
	printf("invalid input");
	break;
	}
	result = checkwin();
	if(result==1 && win1==player1)
	{
	printf("\nPLAYER 1 IS WINNER");
	break;
	}
	else if(result==1 && win1==player2)
	{
	printf("\nPLAYER 2 IS WINNER");
	break;
	}
	else if(result==0)
	{
	printf("\n---------------------------DRAW---------------------");
	break;
	}
	player++;
	}
	break;

	case 2:
	break;
}
getch();
}
void clear()
{
	clrscr();
}

void print()
{
	clear();
	printf("    |  %c |  %c |  %c |\n",a[1],a[2],a[3]);
	printf("____|____|____|____|____\n");
	printf("    |  %c |  %c |  %c |\n",a[4],a[5],a[6]);
	printf("____|____|____|____|____\n");
	printf("    |  %c |  %c |  %c |\n",a[7],a[8],a[9]);
}
int checkwin()
{
	int count = 0;
	if(a[1]==a[2] && a[2]==a[3])
	{
	win1=a[1];
	return 1;
	}
	if(a[4]==a[5] && a[5]==a[6])
	{
	win1=a[4];
	return 1;
	}
	if(a[7]==a[8] && a[8]==a[9])
	{
	win1=a[7];
	return 1;
	}
	if(a[1]==a[4] && a[4]==a[7])
	{
	win1 = a[1];
	return 1;
	}
	if(a[2]==a[5] && a[5]==a[8])
	{
	win1 = a[2];
	return 1;
	}
	if(a[3]==a[6] && a[6]==a[9])
	{
	win1 = a[3];
	return 1;
	}
	if(a[1]==a[5] && a[5]==a[9])
	{
	win1 = a[1];
	return 1;
	}
	if(a[3]==a[5] && a[5]==a[7])
	{
	win1 = a[3];
	return 1;
	}
	for(i=1;i<=9;i++)
	{
		if(a[i]=='X' || a[i]=='x' || a[i]=='O' || a[i]=='o')
		{
		count++;
		}
	}
	if(count==9)
	{
	return 0;
	}
	return -1;
}
