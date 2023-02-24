#include <iostream>
using namespace std;

//function to search
// void Search(int (&array)[])
// {
// 	int choice;
// 	cout<<"\n\n1. SEARCH BY INDEX NUMBER";
// 	cout<<"\n2. SEARCH BY NUMBER";
// 	cout<<"\nENTER YOUR CHOICE : ";
}

int main() 
{
	srand(time(0));
	int choice;
	int x,y;
	int lowerLimit = -100;
	int upperLimit = 100;
	cout<<"\nENTER X VALUE OF ARRAY : ";
	cin>>x;
	cout<<"\nENTER Y VALUE OF ARRAY : ";
	cin>>y;
	int array[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			array[i][j]=lowerLimit+(rand()%(upperLimit-lowerLimit+1));
		}
	}
	//display array
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout<<array[i][j]<<" ";	
		}
		cout<<endl;
	}
	// cout<<"\n\nOPTIONS";
	// cout<<"\n1. SEARCH";
	// cout<<"\nENTER YOUR CHOICE : ";
	// cin>>choice;
	// switch(choice)
	// {
	// 	case 1:
	// 	Search(array);
	// 	break;
	// 	default:
	// 	cout<<"\nINVALID OPTION";
	// }
}