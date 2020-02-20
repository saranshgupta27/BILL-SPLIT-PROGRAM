#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{ int transaction[100][4];  int x,i,j,m1,m2,m3,m4,m5;float sum,sum2;
  clrscr();
  cout<<"enter number of transactions"<<endl;
  cin>>x;
  for(i=0;i<x;i++)
  {  for(j=0;j<4;j++)
      { cout<<"amount paid by memember "<<j+1<<" for transaction "<<i+1<<" ";
	cin>>transaction[i][j];
       }
   }    cout<<endl;

   cout<<"ORGANISED TABLE"<<endl;
   for(i=0;i<x;i++)
   { cout<<"ITEM"<<i+1<<"  ";
   for(j=0;j<4;j++)
   {   cout<<transaction[i][j]<<" ";
   } cout<<endl; }
   cout<<endl<<" BILL SPLIT "<<endl;
      for(i=0;i<x;i++)
      for(j=0;j<4;j++)
      sum+=transaction[i][j];

      float total[4];  sum2=0;
      for(j=0;j<4;j++)
    {  for(i=0;i<x;i++)
    { sum2+=transaction[i][j];
     } total[j]=sum2; sum2=0; }

		float average=sum/4.0;
       float balance[4];
     for(i=0;i<4;i++)
     {balance[i]=average-total[i];
     }

float pay[4][4];
  for(i=0;i<4;i++)
 { for(j=0;j<4;j++)
 { pay[i][j]=0;}}

  for(i=0;i<4;i++)
 { if(balance[i]>0)
    { for(j=0;j<4;j++)
      { if (balance[j]<0)
	  { //for(int k=0;balance[j]!=0;k++)
	      float temp=balance[i]+balance[j];
	      if(temp>=0)
	       { pay[i][j]=-balance[j];
		 balance[i]=temp;
		 balance[j]=0;
		}
	       else if(temp<0)
		{ balance[j]=balance[j]+balance[i];
		  pay[i][j]=balance[i];
		  balance[i]=0;
		}
	  }
	}
      }
    }
 for(i=0;i<4;i++)
 { cout<<"M"<<i+1<<" ";
 for(j=0;j<4;j++)
 {if(i==j)
 {continue;}
 else{
 cout<<"M"<<j+1<<": "<<pay[i][j]<<" ";
 }} cout<<endl;
 }
getch();
}
