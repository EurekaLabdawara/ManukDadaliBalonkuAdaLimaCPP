#include <iostream>
#include <windows.h>

using namespace std;

void menu()
{
	cout<<"1. Manuk Dadali"<<endl;
	cout<<"2. Laskar Pelangi"<<endl;
}

void garis()
{
	cout<<"-------------------------------------------------------------------"<<endl;
}
void lagu(int nada, int tempo)
{
	int frek, tmp;
	switch (nada)
	{
		case 0:
		frek = 000.00;
		break;
		case 1:
		frek = 130.81; //'c
		break;
		case 2:
		frek = 146.83; //'d
		break;
		case 3:
		frek = 164.81; //'e
		break;
		case 4:
		frek = 174.61; //'f
		break;
		case 5:
		frek = 196.00; //'g
		break;
		case 6:
		frek = 220.00; //'a
		break;
		case 7:
		frek = 246.94; //'b
		break;
		case 8:
		frek = 261.63; //c  == 1
		break;
		case 9:
		frek = 293.66; //d
		break;
		case 10:
		frek = 329.63; //e
		break;
		case 11:
		frek = 349.23; //f
		break;
		case 12:
		frek = 392.00; //g
		break;
		case 13:
		frek = 440.00; //a
		break;
		case 14:
		frek = 493.88; //b
		break;
		case 15:
		frek = 523.25; //c'
		break;
		case 16:
		frek = 587.33; //d'
		break;
		case 17:
		frek = 659.26; //e'
		break;
		case 18:
		frek = 698.46; //f'
		break;
		case 19:
		frek = 783.99; //g'
		break;
		case 20:
		frek = 880.00; //a'
		break;
		case 21:
		frek = 987.77; //b'
		break;
		
	}
	switch (tempo)
	{
		case 1:
		tmp=125;
		break;
		case 2:
		tmp=250;
		break;
		case 3:
		tmp=375;
		break;
		case 4:
		tmp=500;
		break;
		case 5:
		tmp=625;
		break;
		case 6:
		tmp=750;
		break;
		case 7:
		tmp=875;
		break;
		case 8:
		tmp=1000;
		break;
		case 9:
		tmp=1125;
		break;
		case 10:
		tmp=1250;
		break;
		case 11:
		tmp=1375;
		break;
		case 12:
		tmp=1500;
		break;
		case 13:
		tmp=1625;
		break;
		case 14:
		tmp=1750;
		break;
		case 15:
		tmp=1875;
		break;
		case 16:
		tmp=2000;
		break;
		case 24:
		tmp=3000;
		break;
	}
	Beep(frek,tmp);
}

int main()
{
	int pil;
	char pilstart;
	pilstart='N';
	cout<<"Program Memainkan Lagu"<<endl;
	while (pilstart=='N' or pilstart=='n')
	{
	garis();
	cout<<"Menu:"<<endl;
	menu();
	garis();
	cout<<"Pilih Lagu yang akan dimainkan!"<<endl;
	cin>>pil;
	switch (pil)
	{
	case 1:
		{
		lagu (0,6); //#1
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4); 
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (12,2);
		
		lagu (12,4); 
		lagu (0,2);
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4); //#4
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (11,2);
		
		lagu (11,4); 
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); 
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (11,2);
		lagu (11,2);
		
		lagu (11,4); //#7
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); 
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (8,2);
		lagu (8,2);
		
		lagu (8,6); 
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4); //#10
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (12,2);
		
		lagu (12,4); 
		lagu (0,2);
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4);
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (11,2);
		
		lagu (11,4); //#13
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); 
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (8,2);
		lagu (8,2);
		
		lagu (11,4);
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); //#16
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (8,2);
		lagu (8,2);
		
		lagu (8,10);
		lagu (8,2);
		lagu (11,2);
		lagu (12,2);
		
		lagu (13,4);
		lagu (11,2);
		lagu (12,2);
		lagu (0,2);
		lagu (13,2);
		lagu (11,2);
		lagu (12,2);
		
		lagu (13,2); //#19
		lagu (13,2);
		lagu (13,4);
		lagu (0,2);
		lagu (16,2);
		lagu (15,2);
		lagu (13,2);
		
		lagu (12,4);
		lagu (10,2);
		lagu (12,2);
		lagu (0,2);
		lagu (13,2);
		lagu (10,2);
		lagu (13,2);
		
		lagu (12,2);
		lagu (12,2);
		lagu (12,4);
		lagu (0,2);
		lagu (8,2);
		lagu (11,2);
		lagu (12,2);
		
		lagu (13,4); //#22
		lagu (11,2);
		lagu (12,2);
		lagu (0,2);
		lagu (13,2);
		lagu (11,2);
		lagu (12,2);
		
		lagu (13,2);
		lagu (13,2);
		lagu (13,4);
		lagu (0,2);
		lagu (13,2);
		lagu (14,2);
		lagu (15,2);
		
		lagu (16,4);
		lagu (14,2);
		lagu (12,2);
		lagu (0,2);
		lagu (13,2);
		lagu (14,2);
		lagu (16,2);
		
		lagu (15,2); //#25
		lagu (15,2);
		lagu (15,2);
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4);
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (12,2);
		
		lagu (12,4); 
		lagu (0,2);
		lagu (12,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (14,2);
		
		lagu (15,4); //#28
		lagu (14,2);
		lagu (15,2);
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (11,2);
		
		lagu (11,4);
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); 
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (11,2);
		lagu (11,2);
		
		lagu (11,4); //#31
		lagu (0,2);
		lagu (12,2);
		lagu (11,2);
		lagu (10,2);
		lagu (8,2);
		lagu (7,2);
		
		lagu (8,2); 
		lagu (10,2);
		lagu (11,2);
		lagu (12,2);
		lagu (8,2);
		lagu (10,2);
		lagu (8,2);
		lagu (8,2);
		
		lagu (8,16);
		}	
	break;
	case 2:
		{
	lagu (12,4); //#1
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,4);
	lagu (10,4);
	lagu (5,4);
	lagu (5,2);
	lagu (5,2);
	
	lagu (12,4);
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,4);
	lagu (10,2);
	lagu (8,2);
	lagu (9,4);
	lagu (10,2);
	lagu (8,2);
	
	lagu (5,4); //#5
	lagu (8,2);
	lagu (8,6);
	lagu (8,2);
	
	lagu (5,4);
	lagu (8,2);
	lagu (9,8);
	lagu (8,2);
	
	lagu (5,4);
	lagu (8,2);
	lagu (8,6);
	lagu (8,2);
	
	lagu (5,4);
	lagu (8,2);
	lagu (9,6);
	lagu (8,2);
	
	lagu (12,4); //#9
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,12);
	lagu (8,2);
	lagu (8,2);
	
	lagu (12,2);
	lagu (12,2);
	lagu (10,8);
	lagu (9,4);
	
	lagu (8,8);
	lagu (9,6);
	lagu (8,2);
	
	lagu (5,4); //#13
	lagu (8,2);
	lagu (8,2);
	lagu (8,4);
	lagu (8,2);
	lagu (8,2);
	
	lagu (5,4);
	lagu (8,2);
	lagu (9,6);
	lagu (8,2);
	
	lagu (11,4); 
	lagu (10,2);
	lagu (8,2);
	lagu (11,4);
	lagu (10,2);
	lagu (11,2);
	
	lagu (12,16);
	
	//reff:
	lagu (8,4); //#1
	lagu (9,2);
	lagu (10,2);
	lagu (12,4);
	lagu (10,2);
	lagu (9,2);
	
	lagu (8,4);
	lagu (9,2);
	lagu (10,2);
	lagu (12,8);
	
	lagu (8,4);
	lagu (9,2);
	lagu (10,2);
	lagu (12,4);
	lagu (10,2);
	lagu (10,2);
	
	lagu (14,4);
	lagu (15,2);
	lagu (14,2);
	lagu (12,8);
	
	lagu (15,4); //#5
	lagu (14,2);
	lagu (12,2);
	lagu (12,4);
	lagu (8,2);
	lagu (12,2);
	
	lagu (12,4);
	lagu (11,2);
	lagu (10,2);
	lagu (9,8);
	
	lagu (15,4);
	lagu (14,2);
	lagu (12,2);
	lagu (12,4);
	lagu (8,2);
	lagu (12,2);
	
	lagu (12,24);
	
	lagu (11,4);
	lagu (10,2);
	lagu (9,2);
	
	lagu (8,16);
	
	//bait 2
	lagu (12,4); //#1
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,4);
	lagu (10,4);
	lagu (5,4);
	lagu (9,2);
	lagu (8,2);
	
	lagu (12,4);
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,4);
	lagu (10,2);
	lagu (8,2);
	lagu (9,6);
	lagu (8,2);
	
	lagu (5,4); //#5
	lagu (8,2);
	lagu (8,4);
	lagu (8,2);
	lagu (8,2);
	
	lagu (5,4);
	lagu (8,2);
	lagu (9,6);
	lagu (8,2);
	lagu (8,2);
	
	lagu (11,4); 
	lagu (10,2);
	lagu (8,2);
	lagu (11,4);
	lagu (10,2);
	lagu (11,2);
	
	lagu (12,16);
	
	lagu (12,4); //#9
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,12);
	lagu (8,2);
	lagu (8,2);
	
	lagu (12,2);
	lagu (12,2);
	lagu (10,8);
	lagu (9,4);
	
	lagu (11,12);
	lagu (8,2);
	lagu (8,2);
	
	lagu (12,2); //#13
	lagu (12,2);
	lagu (10,8);
	lagu (9,2);
	lagu (8,2);
	
	lagu (9,2);
	lagu (10,10);
	lagu (8,4);
	
	lagu (11,4); 
	lagu (10,2);
	lagu (8,2);
	lagu (11,4);
	lagu (10,2);
	lagu (11,2);
	
	lagu (12,16);
	
	//reff:
	lagu (8,4); //#1
	lagu (9,2);
	lagu (10,2);
	lagu (12,4);
	lagu (10,2);
	lagu (9,2);
	
	lagu (8,4);
	lagu (9,2);
	lagu (10,2);
	lagu (12,8);
	
	lagu (8,4);
	lagu (9,2);
	lagu (10,2);
	lagu (12,4);
	lagu (10,2);
	lagu (10,2);
	
	lagu (14,4);
	lagu (15,2);
	lagu (14,2);
	lagu (12,8);
	
	lagu (15,4); //#5
	lagu (14,2);
	lagu (12,2);
	lagu (12,4);
	lagu (8,2);
	lagu (12,2);
	
	lagu (12,4);
	lagu (11,2);
	lagu (10,2);
	lagu (9,8);
	
	lagu (15,4);
	lagu (14,2);
	lagu (12,2);
	lagu (12,4);
	lagu (8,2);
	lagu (12,2);
	
	lagu (12,24);
	
	lagu (11,4);
	lagu (10,2);
	lagu (9,2);
	
	lagu (8,16);
		}
	break;
	}
	cout<<"Ingin Keluar? [Y/N]"<<endl;
	cin>>pilstart;
	}
	 
}
