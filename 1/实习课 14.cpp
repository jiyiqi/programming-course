#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct list
{
	int num;
	char name[10];
	char sex[1];
	int age;
	struct list*next;
};


int main()
{
	int answer=0;
	char name2[10];
	struct list*head=NULL;
	struct list*ptr=NULL;
	struct list*prev=NULL;
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

		 if(head==NULL)
		 {
		 head=prev;
		 ptr = head ;
		 }
	     else 
		 { 
		   ptr -> next = prev ;
		   ptr =prev;
		 }
 }

 if(answer==2)
 {
 cout<<"Enter the name of you want to delete:"<<endl;
 cin>>name2;
 int c=1;
	   ptr=head;
	   prev=head;
	   while(ptr!=NULL)
	   {
		   char name3[10]={0};
		   strcpy(name3,ptr->name);
		   if(strcmp(name3,name2)==0)
		   {
			    break;
		   }
		   if(c==2)
		   {
		   prev=prev->next;
		   }
                 c++;
		   ptr=ptr->next;
	   }
	   if(c==1)
	   {
	   head=head->next;
	   }
	   if(c!=1)
	   {
		   if(ptr->next==NULL)
		   {
			   prev->next=NULL;
		   }
		   else
		   {
	        prev->next=ptr->next;
	      }
      }
 }

 if(answer==3)
	   {
	     cout<<"Enter the name you want to search:"<<endl;
	     cin>>name2;
	   prev=head;
	   int c=0;

	   while(prev!=NULL)
	   {
		   char name3[10]={0};
		   strcpy(name3,prev->name);

		   if(strcmp(name3,name2)==0)
		   {
			   	cout<<"NO."<<setw(7)<<"Name"<<setw(6)<<"sex"<<setw(6)<<"age"<<endl;
	           cout<<prev->num<<setw(8)<<prev->name<<setw(6)<<prev->sex<<setw(6)<<prev->age<<endl;
			   c=1;
			   break;
		   }
		   prev=prev->next;
	   }
	       if(c==0)
		   {
		   cout<<"your search data doesn't exist!"<<endl;
		   }
		  
}
	 
       if(answer==4)
 {
		prev= head;
		cout<<"NO."<<setw(7)<<"Name"<<setw(6)<<"sex"<<setw(6)<<"age"<<endl;
     while(prev!= NULL) 
	 {
      cout<<prev->num<<setw(8)<<prev->name<<setw(6)<<prev->sex<<setw(6)<<prev->age<<endl;
     prev= prev->next;
     }
  }
}

	system("pause");
	return 0;
}
