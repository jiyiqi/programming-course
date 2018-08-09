#include<iostream>
#include<string>
using namespace std;
struct list
{
	int num;
	char name[5];
	char sex[1];
	int age;
	struct list*next;
};


int main()
{
	int answer=0;
 
	struct list*head=NULL;
	struct list*ptr=NULL;
	struct list*prev=NULL;
	int cnt = 0 ;
	 head=(list *)malloc(sizeof(list));
	 ptr=(list *)malloc(sizeof(list));
	 head = NULL ;
	while(answer!=5)
	{
	    cout<<"Enter your choice:\n<1>insert\n<2>delete\n<3>search\n<4>print\n<5>exit\n";
	    cin>>answer;
		
	   if(answer==1)
	  {
		  
		  prev=(list *)malloc(sizeof(list));
		  prev -> next = NULL ;

	     cout<<"Enter the NO.:";
	     cin>>prev->num;
	     cout<<"Enter the name:";
	     cin>>prev->name;
	     cout<<"Enter the sex:";
	     cin>>prev->sex;
	     cout<<"Enter the age:";
	     cin>>prev->age;

		 // ptr -> next = prev ;
		 if(head==NULL)
		 {
		 head=prev;
		 ptr = head ;
		 }
	     else 
		 { 
		   ptr -> next = prev ;
		   ptr = ptr -> next ;
		 }

    }
 
       if(answer==4)
 {
		prev= head;
     while(prev!= NULL) 
	 {
      cout<<"No. : "<<prev->num<<endl;
      cout<<"Name : "<<prev->name<<endl;
	  cout<<"sex : "<<prev->sex<<endl;
      cout<<"age : "<<prev->age<<endl;
     prev= prev->next;
     }
  }
}


	system("pause");
	return 0;
}