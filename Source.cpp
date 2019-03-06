


/***********************************************
* Name: Avery Armstead
* Email: armsteada8@students.rowan.edu
***********************************************
* Purpose: Project 1
***********************************************/
//3 continued
#include <iostream>
#include <string>
using namespace std; 

int main()
// #1
{
    int r,c;
    for (r=1; r<=3; r++)
    {
    for (c=1; c<=5; c++)
    {
        cout<<r;
    }
        cout<<endl;
    }
}

//#2
{
    int r,c;
    for (r=1; r<=3; r++)
    {
    for (c=1; c<=5; c++)
    {
        cout<<c;
    }
        cout<<endl;
    }
}

//#3
{
    int r,c;
    for (r=1; r<=6; r++)
    {
    for (c=1; c<=5; c++)
    {
        cout<<c;
    }
        cout<<endl;
    }
}

//#5
{
	int minutes, startTime;
	string Day; 
	double cost, rate;
	{
		cout << "Enter military time of the call: ";
		cin >> startTime;
		while(startTime < 0 || startTime >= 2400)
		{
			cout << "Invalid";
			cout << "Enter military time of the call: ";
			cin >> startTime;
		}
		cout << "Enter length of the call in minutes: ";
		cin >> minutes;
		cout << "Enter the day of the week: ";
		cin >> Day;
		if(Day == "monday" || "m" 
		|| Day == "tuesday" || Day == "t"  
		|| Day =="wednesday" || Day == "w" 
		|| Day =="thursday" || Day == "r"
		|| Day == "friday" || Day =="f")
		{ 
			if (startTime >= 800 && startTime <= 1800) 
				rate = 0.4; 
			else 
				rate = 0.25;
			cost = minutes * rate;
			cout << "Rate for the call was " << " " << rate << " a minute"<< endl
				<< "Your total cost: " << " " << cost << endl;
		}
		else if(Day =="saturday" || Day =="s" || Day =="sunday" || Day =="u")
		{
			rate = 0.15;
			cost = minutes * rate;
			cout << "Rate for the call was " << " " << rate << " a minute"<< endl
				<< "Your total cost: " << " " << cost;
		}
		else
			cout << "Invalid." << endl;

	return 0;
}
}
*************************************************************************************************
//Assignment1
#include <iostream>
#include <string>
using namespace std;

int main()
//#1
{
  double mpg, gallons, miles;
  char redo;
  double MPG = 0.264179;
  
  do
  {
  cout << "Enter number of miles traveled: ";
  cin >> miles;
  cout << "Enter amount of gas in liters: ";
  cin >> gallons;
  
  mpg = miles / (gallons*MPG);
  
  cout << "The amount of gas milage used is " << mpg << endl;
  
  cout << "Would you like to redo? (yes=1, no=0) ";
  cin >> redo;
  
 }while (redo == '1');
	return 0,
}
//2
{ 
int num, n, i, x;

    cout << "Enter a prime number less than 10000: ";
    cin >> n;
    
        for ( num=2; num<=n ; num++ )
        {
            x=0;
            
                for ( i=2; i<=num/2; i++)
            {
            if( num%i == 0)
            {
                x++;
                break;
            }
        }
        if(x==0 && num!= 1)
        
            cout << num << " ";
    }
            }
