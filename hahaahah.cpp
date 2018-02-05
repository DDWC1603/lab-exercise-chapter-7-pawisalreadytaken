//compare two strings
//complete the program below. 

#include <iostream>
#include<string>

using namespace std;


int main()
{

	string myName="anna";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program

while	(true)
	{
		string userName;
		cout<<"Enter your name (or 'quit' to exit): ";
		cin >> userName;
		//get the user input for string.
		if(userName=="ari")
	       	{
			cout<<"Hey ari! Welcome back!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else if (userName!=myName )
		{
			cout<<"Aha! its anna ! "<<myName<<endl;
		}
	}
	return 0;
}
