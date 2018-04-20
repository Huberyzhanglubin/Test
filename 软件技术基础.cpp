#include <iostream>
#include<string.h>
using namespace std;
void charcount(char filepath[])
{
	FILE *fp=NULL;
	FILE *fp1;
	fp1=fopen("result.txt","w");
	int c=0;
	char ch;
	char *filepath3=filepath;
	int k=strlen(filepath);
	*(filepath3+k-1)='\0';
	if((fp=fopen(filepath3,"r"))==NULL)
	{
		fprintf(fp1,"file read failure.");
		exit(0);
		
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		c++;
		ch=fgetc(fp);
		
	}
	c--;
	fprintf(fp1,"字符数：%d.\n",c);
	fclose(fp);fclose(fp1);
	
 } 
 void wordcount(char filepath[])
 {
 	FILE *fp=NULL;
	FILE *fp1;
	fp1=fopen("result.txt","w");
	int w=0;
	char ch;
	char *filepath3=filepath;
	int k=strlen(filepath);
	*(filepath3+k-1)='\0';
	if((fp=fopen(filepath3,"r"))==NULL)
	{
		fprintf(fp1,"file read failure.");
		exit(0);
		
	}	
 	ch=fgetc(fp);
 	while (ch!=EOF)
 	{
 		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')||ch==' ')
		 {
		 	while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
		 	{
		 		ch=fgetc(fp);
			 }
	        w++;	
			 ch=fgetc(fp);
		 }
		 else
		 {
		 	ch=fgetc(fp);
		 
		 }
		 
		 
 		
	 }
	w--;
	 fprintf(fp1,"单词数：%d.\n",w);
	 fclose(fp);fclose(fp1);
 }
 void linecount (char filepath[])
 {
 	FILE *fp=NULL;
	FILE *fp1;
	fp1=fopen("result.txt","w");
	int l=1;
	char ch;
	char *filepath3=filepath;
	int k=strlen(filepath);
	*(filepath3+k-1)='\0';
	if((fp=fopen(filepath3,"r"))==NULL)
	{
		fprintf(fp1,"file read failure.");
		exit(0);
		
	}	
 	ch=fgetc(fp);
 	while (ch!=EOF)
 	{
 		if(ch=='\n')
 		{
 			l++;
 			ch=fgetc(fp);
		 }
		 else
		 {
		 	ch=fgetc(fp);
		 }
 		
	 }
	 l--;
	 fprintf(fp1,"总行数：%d.\n",l);
	 fclose(fp);fclose(fp1);
 	
 }
 void muiltiplecount(char filepath[])
 {
 	FILE *fp;
	FILE *fp1;
	fp1=fopen("result.txt","w");
	char ch;
	char *filepath3=filepath;
	int k=strlen(filepath);
	*(filepath3+k-1)='\0';
	int c=0,e=0,n=0;
		if((fp=fopen(filepath3,"r"))==NULL)
	{
		printf("file read failure.");
		exit(0);
		
	}	
 	ch=fgetc(fp);
 	while (ch!=EOF)
 	{
 		if(ch=='{'||ch=='}')
 		{
 			e++;
 			ch=fgetc(fp);
		 }
		 else if(ch=='\n')
		 {
		 	ch=fgetc(fp);
		 	while(ch=='\n')
		 	{
		 		e++;
		 		ch=fgetc(fp);
		 		
			 }
		 }
 		 else if(ch=='/')
		 {
		 	ch=fgetc(fp);
		 	if (ch=='/')
		 	while(ch!='\n')
		 	{
	
		 		ch=fgetc(fp);	 		
			 }
			 n++;
			 ch=fgetc(fp);
		 }
		 else
		 {
		   c++;
		   while(ch!='{'&&ch!='}'&&ch!='\n'&&ch!='/'&&ch!=EOF)
		   {
		   	ch=fgetc(fp);
		   }
	     }
	 }
 	fprintf(fp1,"代码行：%d.\n",c);
 	fprintf(fp1,"空行：%d.\n",e);
 	fprintf(fp1,"注释行：%d.\n",n);
 	fclose(fp);fclose(fp1);
 	
 }
 int main()
 {
 	char ss[100],filepath[50];
 	gets(ss);
 	int count=strlen(ss);
 	strncpy(filepath,ss + 10,count - 10);
 	filepath[count-9]='\0';
 	int iosk=1;
 	while(iosk)
 	{
 	 int i=7;
	 if ((ss[i]=='-')&&(ss[i + 1]=='c'))
	     {
	       charcount(filepath);
		   break; 	
	 	
		 }	
	if ((ss[i]=='-')&&(ss[i+1]=='w'))
	     {
	       wordcount(filepath);
		   break; 	
	 	
		 }	
    if ((ss[i]=='-')&&(ss[i+1]=='l'))
	     {
	       linecount(filepath);
		   break; 	
	 	
		 }	
	if ((ss[i]=='-')&&(ss[i+1]=='a'))
	     {
	       muiltiplecount(filepath);
		   break; 	
	 	
		 }
	else 
	{cout<<"no function"<<endl;
	break;}
	 }
	 return 0;
 }
 

