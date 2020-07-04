#include<stdio.h>

int main()
{
	char String[128],string1[128],string2[128],string3[128];
	int i,num=0,let=0,sym=0;

	printf("Please intput the string: ");
	gets(String);

	for(i=0;String[i];i++)
	{
		if(String[i]>='0' && String[i]<='9')
		{
			string1[num]=String[i];
			num++;
		}
		else if((String[i]>='a' && String[i]<='z') || (String[i]>='A' && String[i]<='Z'))
		{
			string2[let]=String[i];
			let++;
		}
		else
		{
			string3[sym]=String[i];
			sym++;
		}
	}
	string1[num]='\0';
	string2[let]='\0';
	string3[sym]='\0';
	
	printf("\nDigistal string length = %d, Digitals: %s\n",num,string1);
	printf("Letter string length = %d, Letters: %s\n",let,string2);
	printf("Symbol string length = %d, Symbols: %s\n",sym,string3);

	return 0;
}
