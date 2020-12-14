#include<stdio.h>
#include<string.h>
struct fragment{
	int id;
	int offset;
	int mf;
	char data[100];
	};
void main()
{
	char string[100];
	char sub[50];
	int falg=0,mtu,noOfFrag,i,id,start=0,offset.mf,cnt=0;
	struct fragment f[\0];
	printf("\nenter a string");
	gets(str);
	while(flag==0){
		printf("enter MTU:");
		scanf("%d", &mtu:);
		if((mtu-20)%8==0)
		{
			flag=1;
		}
	}
	netcap=mtu-20;
	noOfFragment=strlen(str)/netcap;
	if(strlen(str)%netcap!=0)
	{
		noOfFrag++;
	}
	for(i=0;i<noOfFrag;i++)
	{
		f[i].id=10;
		f[i].offset=start/8;
		if(i<noOfFrag-1)
		{
			f[i].mf=1;
			while(cnt<netcap)
			{
				sub[cnt]=str[start+cnt];
				cnt++;
			}
			sub[cnt]='\0';
			cnt=0;
			strcpy(f[i].data,sub);
			start=start+netcap;
			}
			else
			{
				f[i].mf=0;
				while(cnt<netcap)
				{
						if((start+cnt)==strlen(str))
						break;
						sub[cnt]=str[start+cnt];
						cnt++;
				}
				sub[cnt]='\0';
				strcpy(f[i].data,sub);
			}
		}
		for(i=0;i<noOfFrag;i++)
		{
			printf("%d %d %d %s",f[i].id,f[i].offset,f[i].mf,f[i].data);
		}
}
