#include <iostream>
#include <string>
using namespace std;
void sort(char a[][20],int j)
{
	 char word[20],word1[20],word2[20];
	 for (int m=0; m<=j; m++)
    {
        for (int n=m+1; n<=j; n++)
        {
          if (strcmp(a[m], a[n]) == 1)
            {
                strcpy(word, a[m]);
                strcpy(a[m], a[n]);
                strcpy(a[n], word);
            }
        }
		
        if(a[m][0] != '\0')
           cout<<a[m]<<endl;
    }
}
int main( )
{
	char b[100]={ };
	cout<<"Enter a string terminted by #:"<<endl;
    gets(b);
    char a[100][20] = {'\0'};
 
	int i=0,j=0,k=0;
	for (i=0; b[i]!='#'; i++)
    {   
		if(b[i] != ' '&&b[i]!=','&&b[i]!='.')
        {
            a[j][k] = b[i];
            k++;
        }
        else
        {
            j++;
            k=0;
        }
		
    }

	cout<<"original:"<<endl;
	  for (i=0; i<=j; i++)
    {
          if(a[i][0] != '\0')
           cout<<a[i]<<endl;
	 }

	  cout<<"sort:"<<endl;
      sort(a,j);
	system("pause");
	return 0;
}