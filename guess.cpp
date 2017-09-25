//Author: Xinru Lin
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand (time(NULL));
int randomNumber;
int response;
int distance;
randomNumber=rand() % 10+1;
cout<<"Welcome to this little game!"<<endl;
cout<<"Please guess the computer's number, and your choice should be an integer with interval of 0-10"<<endl;
cin>> response;
if(response==randomNumber)
{
cout<<"You,guessed correctly!You win"<<endl;
}
else if (response!=randomNumber)
{
if(randomNumber>response)
{distance=randomNumber-response;
cout<<"You were off by "<<distance<<",Sorry ,you lose."<<endl;
}
else if (response>randomNumber)
{distance=response-randomNumber;
cout<<"You were off by "<<distance<<",Sorry ,you lose."<<endl;}}
return 0;
}
