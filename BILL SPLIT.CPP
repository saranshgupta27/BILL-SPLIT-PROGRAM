#include&lt;iostream.h&gt;
#include&lt;conio.h&gt;
#include&lt;stdio.h&gt;

void main()
{ int transaction[100][4]; int x,i,j,m1,m2,m3,m4,m5;float sum,sum2;
clrscr();
cout&lt;&lt;&quot;enter number of transactions&quot;&lt;&lt;endl;
cin&gt;&gt;x;
for(i=0;i&lt;x;i++)
{ for(j=0;j&lt;4;j++)
{ cout&lt;&lt;&quot;amount paid by memember &quot;&lt;&lt;j+1&lt;&lt;&quot; for transaction &quot;&lt;&lt;i+1&lt;&lt;&quot; &quot;;
cin&gt;&gt;transaction[i][j];
}
} cout&lt;&lt;endl;

cout&lt;&lt;&quot;ORGANISED TABLE&quot;&lt;&lt;endl;
for(i=0;i&lt;x;i++)
{ cout&lt;&lt;&quot;ITEM&quot;&lt;&lt;i+1&lt;&lt;&quot; &quot;;
for(j=0;j&lt;4;j++)
{ cout&lt;&lt;transaction[i][j]&lt;&lt;&quot; &quot;;
} cout&lt;&lt;endl; }
cout&lt;&lt;endl&lt;&lt;&quot; BILL SPLIT &quot;&lt;&lt;endl;
for(i=0;i&lt;x;i++)
for(j=0;j&lt;4;j++)
sum+=transaction[i][j];

float total[4]; sum2=0;

for(j=0;j&lt;4;j++)
{ for(i=0;i&lt;x;i++)
{ sum2+=transaction[i][j];
} total[j]=sum2; sum2=0; }

float average=sum/4.0;

float balance[4];
for(i=0;i&lt;4;i++)
{balance[i]=average-total[i];
}

float pay[4][4];
for(i=0;i&lt;4;i++)
{ for(j=0;j&lt;4;j++)
{ pay[i][j]=0;}}

for(i=0;i&lt;4;i++)
{ if(balance[i]&gt;0)
{ for(j=0;j&lt;4;j++)
{ if (balance[j]&lt;0)
{ //for(int k=0;balance[j]!=0;k++)
float temp=balance[i]+balance[j];
if(temp&gt;=0)
{ pay[i][j]=-balance[j];
balance[i]=temp;
balance[j]=0;
}
else if(temp&lt;0)
{ balance[j]=balance[j]+balance[i];
pay[i][j]=balance[i];
balance[i]=0;
}

}
}
}
}
for(i=0;i&lt;4;i++)
{ cout&lt;&lt;&quot;M&quot;&lt;&lt;i+1&lt;&lt;&quot; &quot;;
for(j=0;j&lt;4;j++)
{if(i==j)
{continue;}
else{
cout&lt;&lt;&quot;M&quot;&lt;&lt;j+1&lt;&lt;&quot;: &quot;&lt;&lt;pay[i][j]&lt;&lt;&quot; &quot;;
}} cout&lt;&lt;endl;
}
getch();
}
