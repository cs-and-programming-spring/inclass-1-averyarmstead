


/***********************************************
* Name: Avery Armstead
* Email: armsteada8@students.rowan.edu
***********************************************
* Purpose: Project 1
***********************************************/

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
