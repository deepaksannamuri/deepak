#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
int main()
{
	cout<<"                  |SNAKE AND LADER GAME|\n";
		cout<<"\n|SNAKE AND LADER BOARD|:-\n";
cout<<"\n*****************************************************************\n";
	string s[10][10]={{"|  100 (L6)99 *(S7)98  97  (L4)96 95  94 (L3)93 *(S6)92 (L2)91  |"},{"|  81   (L1)82  *(S5)83   84   85   86   (L5)87   88   89   90  |"},{"|  +(L6)80   79    78    77    76    75    74    73    72   71  |"},{"|  61  +(L4)62   63   64   65  +(L5)66   67   68  *(S4)69   70  |"},{"|  60   59   58   57   56  *(S3)55  +(L3)54   53   52   (S6)51  |"},{"|  41   42   43  *(S1)44   45   46   47  *(S2)48   49  +(L2)50  |"},{"|  40    39   38    37    36    35    34    (S4)33    32    31  |"},{"|  +(L1)21   22    23    24    25   26   27   (S7)28   29   30  |"},{"|  20    (S1&S5)19    18    17    16    15   14   13   12   11  |"},{"|  1     2     3     4    5    6    (S3)7     8    (S2)9    10  |"}};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"*****************************************************************\n";
	cout<<"\n+(L) IN SNAKE AND LADER BOARD REPRESENTS STARTING POINT OF THE LADDER AND (L) REPRESENTS ENDING POINT OF THE LADDER\n";
	cout<<"\n*(S) IN SNAKE AND LADER BOARD REPRESENTS HEAD OF THE SNAKE AND (S) REPRESENTS TAIL OF THE SNAKE\n";
	int a,b,e,n;
	cout<<"\nEnter single or double players \n";
	cin>>n;
	if(n==1)
	{
	a=0;
	b=0;
	int da=0,db=0,c=0;
	int r;
	while(a!=100||b!=100)
	{
		cout<<"press any numeric for die Rotation\n";
		cin>>r;
		cout<<"\n";
		srand ( time(NULL) );
		da=rand()%7;
		if(da==0)
		da=1;
		cout<<da<<" is your score\n";
		a=a+da;
		if(a>100)
		a=a-da;
		if(a==100)
		break;
			else if(a==21)
		{
			a=82;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		else if(a==50)
		{
			a=91;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		else if(a==54)
		{
				a=93;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}	else if(a==62)
		{
				a=96;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}	else if(a==66)
		{
				a=87;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}
			else if(a==80)
		{
				a=99;
			cout<<"***Hurray***\n****You got Ladder****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		else if(a==44)
		{
			a=19;
			cout<<"***oops!***\n**** You have a Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		else if(a==48)
		{
			a=9;
			cout<<"***oops!***\n****You have a Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		else if(a==55)
		{
			a=7;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
			else if(a==69)
		{
			a=33;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
			else if(a==83)
		{
			a=19;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
			else if(a==92)
		{
			a=51;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
			else if(a==98)
		{
			a=28;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"You are at "<<a<<" now\n";
		}
		cout<<"\n";
		cout<<"            	Your Position					\n";
		cout<<"                     "<<a<<"          \n";
		cout<<"\n";
		
		db=rand()%7;
		if(db==0)
		db=1;
		b=b+db;
		cout<<"\n";
		cout<<db<<" is Computer score\n";
		if(b>100)
		b=b-db;
		if (b==100)
		break;
			else if(b==21)
		{
			b=82;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==50)
		{
			b=91;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==54)
		{
			b=93;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==62)
		{
			b=96;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==66)
		{
			b=87;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==80)
		{
			b=90;
			cout<<"***Hurray***\n****Ladder****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==44)
		{
			b=19;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==48)
		{
			b=9;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==55)
		{
			b=7;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}else if(b==69)
		{
			b=33;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==83)
		{
			b=19;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		else if(b==92)
		{
			b=51;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
			else if(b==98)
		{
			b=28;
			cout<<"***oops!***\n****Snake****\n";
			cout<<"Computer is at "<<b<<" now\n";
		}
		cout<<"\n";
		cout<<"		Computer Position			\n";
		cout<<"                     "<<b<<"         \n";
		cout<<"\n";
		c++;
	}
	if(a==100)
	cout<<"******Congratulations*****\n"<<"**You Won in "<<++c<<" Steps**";
	else
	cout<<"OOPS:("<<" You Lost\n"<<"Computer won in "<<++c<<" Steps";
	return 0;
}
else
{
a=0;
	b=0;
	int da=0,db=0,c=0;
	int r;
	while(a!=100||b!=100)
	{
		cout<<"Player 1 : press any numeric for die Rotation\n";
		cin>>r;
		cout<<"*************************************************\n";
		srand ( time(NULL) );
		da=rand()%7;
		if(da==0)
		da=1;
		cout<<da<<" is Player 1's score\n";
		a=a+da;
		if(a>100)
		a=a-da;
		if(a==100)
		break;
			else if(a==21)
		{
			a=82;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
		else if(a==50)
		{
			a=91;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
		else if(a==54)
		{
				a=93;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}	else if(a==62)
		{
				a=96;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}	else if(a==66)
		{
				a=87;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
			else if(a==80)
		{
				a=99;
			cout<<"***Hurray***\n****Player 1 got Ladder****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
		else if(a==44)
		{
			a=19;
			cout<<"***oops!***\n**** Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
		else if(a==48)
		{
			a=9;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
	
			else if(a==55)
		{
			a=7;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
			else if(a==69)
		{
			a=33;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
			else if(a==83)
		{
			a=19;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
			else if(a==92)
		{
			a=51;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
			else if(a==98)
		{
			a=28;
			cout<<"***oops!***\n****Player 1 have a Snake****\n";
			cout<<"Player 1 is at "<<a<<" now\n";
		}
		cout<<"\n";
		cout<<"            	Player 1 Position					\n";
		cout<<"                      "<<a<<"          \n";
		cout<<"\n";
	int s,dc=0;
		cout<<"Player 2 : press any key for die Rotation\n";
		cin>>s;
		cout<<"\n";
		
		dc=rand()%7;
		if(dc==0)
		dc=1;
		e=e+dc;
		cout<<"\n";
		cout<<dc<<" is Player 2's score\n";
		if(e>100)
		e=e-dc;
		if (e==100)
		break;
			else if(e==21)
		{
			e=82;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==50)
		{
			e=91;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==54)
		{
			e=93;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==62)
		{
			e=96;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==66)
		{
			e=87;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==80)
		{
			e=90;
			cout<<"***Hurray***\n****Player 2 got a Ladder****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==44)
		{
			e=19;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==48)
		{
			e=9;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==55)
		{
			e=7;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}else if(e==69)
		{
			e=e-(69-33);
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		else if(e==83)
		{
			e=19;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"player 2 is at "<<e<<" now\n";
		}
		else if(e==92)
		{
			e=51;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
			else if(e==98)
		{
			e=28;
			cout<<"***oops!***\n****Player 2 got Snake****\n";
			cout<<"Player 2 is at "<<e<<" now\n";
		}
		cout<<"\n";
		cout<<"		Player 2 position is at			\n";
		cout<<"                          "<<e<<"         \n";
		cout<<"\n";
		c++;
	}

	if(a==100)
	cout<<"******Congratulations*****\n"<<"**player 1 won in "<<++c<<" Steps**";
	else if(e==100)
	{
	cout<<"******Congratulations*****\n"<<"**player 2 won in "<<++c<<" Steps**";
		
	}
	return 0;
}
	
}
