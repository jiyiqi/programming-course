#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
const int race=70;
void moveTortoise(int & turtlePtr)
{
   int x = (1 + rand() % 10);
   if ( x >= 1 && x <= 5 )       
      turtlePtr += 3;
   if ( x == 6 || x == 7 )  
      turtlePtr -= 6;
   else                           
      ( turtlePtr )++;
   
   if ( turtlePtr < 1 )
      turtlePtr = 1;
   else if ( turtlePtr > race )
      turtlePtr = race;
}

void moveHare(int &rabbitPtr)
{
   int y = (1 + rand() % 10);

   if( y>= 1 &&y<=2)
    rabbitPtr=rabbitPtr;
   else if(y>=3&&y<=4)
    rabbitPtr+=9;
   else if(y==5)
    rabbitPtr-=12;
   else if(y>=6&&y<=8)
    rabbitPtr+=1;
   else
    rabbitPtr-=2;
   if(rabbitPtr<1)
    rabbitPtr=1;
   else if(rabbitPtr> race)
    rabbitPtr= race;

}

void printCurrentPositions(int &bunnyPtr,int &snapperPtr)
{
   if ( bunnyPtr == snapperPtr ) 
      cout << setw( bunnyPtr ) << "OUCH!!!";      
  if ( bunnyPtr < snapperPtr ) 
     { 
		 cout << setw( bunnyPtr ) << "H" 
             << setw( snapperPtr - bunnyPtr ) << "T";
    }
   else
    {
		cout << setw( snapperPtr ) << "T" 
           << setw( bunnyPtr - snapperPtr ) << "H";
   }
   cout << endl;

}

int main()
{
int tor=1;
int hare=1;
int timer=0;
srand(time(0));

  while ( tor != race && hare != race ) 
  {
    moveTortoise(tor);
    moveHare(hare);
    printCurrentPositions(tor,hare);
      timer++;
   }
if(tor>=hare)
{
 cout<<"tor win"<<endl;
}
else
	{
		cout<<"hare win"<<endl;
	 }
cout << "TIME ELAPSED = " << timer << " seconds" << endl;
system("pause");
return 0;
}