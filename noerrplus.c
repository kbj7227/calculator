#include <stdio.h>
#include <string.h>

void plus(char sum[],char a1[],char a2[]);
void rev(char p[], int a);
int main(void)
{
	char a[10][100]={0};
	
   
	for(int i=0;i<2;i++)
	scanf("%s",a[i]);
 
	rev(a[0],strlen(a[0]));
    rev(a[1],strlen(a[1]));	 

  plus(a[2],a[0],a[1]);
  rev(a[2],strlen(a[2]));
      printf("%s",a[2]);
return 0;
}

void plus(char sum[],char a1[],char a2[]) 
{ 
   int carry=0;
   int i,size;
   char a3;
   if(strlen(a1)>strlen(a2)) {
	   size=strlen(a2);
		strcpy(sum, a1);
   }
   else {
	   size=strlen(a1);
	   strcpy(sum, a2);
   }

   for(i=0;i<size;i++)
   { sum[i]=(a1[i]-'0'+a2[i]-'0'+carry)%10+'0';
		 carry=(a1[i]-'0'+a2[i]-'0'+carry)/10;
   }
a3=a1[size-1]-'0'+a2[size-1]-'0';
if(a3==10) sum[size]+='1';
if(sum[size]=='b') sum[size]='2';
 }

void rev(char a[],int size)
{
	int tmp;

	for(int i=0;i<size/2;i++)
	{  
		tmp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=tmp;

	}

}

