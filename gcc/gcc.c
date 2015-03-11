#include <stdio.h>




void ledmove(void);
void Delay(times);
void print_star(char c,int n);
void agetchar(void);
void hello_word(void);
void sizeof_alltypes(void);
void choice(void);


//**********************************************************
//			main
//		------------------
//***********************************************************

int main(void)
{
//printf("Hello,world!n\n");
	hello_word();
	Delay(100);
//	ledmove();
	choice();
return 0;
}

//*******************************************************
//			choice
//			show and choose
//*******************************************************
void choice()
{
	int c;
	int choice = 0;		/*存放用户选项的变量*/
	while(1)
	{
	printf("\t+-----------------------------------------+\n");
        printf("\t|   Welcome to Vote Management System     |\n");
        printf("\t|		     欢迎进入		  |\n");
	printf("\t|		私人空间，谨慎探索！ 	  |\n");
	printf("\t|-----------------------+-----------------|\n");
        printf("\t|1.Init Candidate File()|2. BrowseIntro() |\n");
        printf("\t|3.ModifyIntro()        |4. SortByVote()  |\n");
        printf("\t+-----------------------+-----------------+\n");
        printf("\t|5. clearvote()         |6. sizeof()      |\n");
        printf("\t+-----------------------+-----------------+\n");
        printf("\t|11.CreatNewUserFile()  |12.AddUser()     |\n");
        printf("\t|13.DelUser()           |14.ModifyUser()  |\n");
        printf("\t|15.SortByUserNum()     | 0. End Program  |\n");
        printf("\t+-----------------------+-----------------+\n");
        printf("\tinput your choice here:");
	printf("\n\t请选择：");
	scanf("%d",&choice);
//	getchar();
		        /*根据用户选项调用相应函数*/
	while((c=getchar()) != '\n')
	{break;}
	switch(choice)
             {
            case 1:
               /* CreatFile();*/
		printf("\ninput your choice here:1\n");
                break;
            case 2:
                /*BrowseIntro();*/
		printf("\nyour choice = 2\n\n");
                break;
            case 3:
                /*ModifyIntro();*/
		printf("\nyour choice = 3\n\n");
                break;
            case 4:
                /*SortByVote();*/
		printf("\nyour choice = 4\n\n");
                break;
            case 5:
                /*ClearVote();*/
		printf("\nyour choice = 5\n\n");
                break;
	    case 6:
		printf("\nyour choice =6\n\n");
		sizeof_alltypes();
		break;
            case 11:
                /*CreatUser();*/
	       printf("\nyour choice = 11\n\n");
                break;
            case 12:
                /*AddUser();*/
		printf("\nyour choice = 12\n\n");
                break;
            case 13:
                /*DelUser();*/
		printf("\nyour choice = 13\n\n");
                break;
            case 14:
                /*ModifyByUserNumber();*/
		printf("\nyour choice = 14\n\n");
                break;
            case 15:
                /*SortByUserNum();*/
		printf("\nyour choice = 15\n\n");
                break;
            case 0:
                exit(0);
            default:
                printf("**********************************************\n");
				printf("$$$$~~~~~~~~~~~~wrong choice!~~~~~~~~~~~$$$$$$\n");
				printf("\t\t请按确认键然后重新选择\n");
				printf("**********************************************\n");
				while((c=getchar()) != '\n')
				{;}
				break;
		}
//	    }
	}
}
//************************************************************
//			Delay time
//************************************************************
void Delay(unsigned int times)
{
	unsigned int i,j;
	for(i=0;i<times;i++)
	{
		for(j=0;j<110;j++)
		{
			j++;j--;
		}
	}
}
//************************************************************
//			hello word
//			**********
//************************************************************
void hello_word()
{
	print_star('*',50);
	printf("		welcome	to my world		\n");
	printf("		-------------------		\n");
//	char *str="I like Linux! I advices you join in the Linux World!";
//	printf("%s",str);	
	print_star('*',50);
	int c;
	int a;
	printf("\n	~@@@@<=>~login:");			/*just fuuny,no usefull*/
	a=getchar();
	printf("\tpassword:");
	printf("%c",a);			/*Note that getchar reads from stdin and is line buffered;this means it will not return until you press ENTER.*/
	while((c = getchar()) != '\n')
	{
		printf("%c",c);
	}
	printf("\t\n\t--------~~~~~~~~~~~~~~~~~~~\n");
	return 0;
}
//*******************************************************************
//				agetchar()
//				----------
//*******************************************************************
void agetchar()
{
	int a,c;
	a=getchar();
//	printf("%c",a);			/*Note that getchar reads from stdin and is line buffered;this means it will not return until you press ENTER.*/
	while((c = getchar()) != '\n')
	{
		printf("doing...\n");
	}
	printf("\n");
	return 0;
}
//****************************************************************
//	定义print_star函数，其功能是输出一行指定数量的字符
//			print_star
//****************************************************************
void print_star(char c,int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%c",c);
	printf("\n");
}

//******************************************************************
//				sizeof()
//				----------
//******************************************************************
void sizeof_alltypes()
{
	print_star('*',50);
	printf("\t~~~~揭秘系统数据类型所占字节数~~~\t\t\n");
	printf("int 所占字节数为%d位。\n",sizeof(int));
	printf("signed int所占字节数为%d位。\n",sizeof(signed int));
	printf("unsigned int所占字节数为%d位。\n",sizeof(unsigned int));
	printf("char所占字节数为%d位。\n",sizeof(char));
	printf("signed char所占字节数为%d位。\n",sizeof(signed char));
	printf("unsigned char所占字节数为%d位。\n",sizeof(unsigned char));
	printf("short所占字节数为%d位。\n",sizeof(short));
	printf("signed short所占字节数为%d位。\n",sizeof(signed short));
	printf("unsigned short所占字节数为%d位。\n",sizeof(unsigned short));
	printf("long所占字节数为%d位。\n",sizeof(long));
	printf("signed long所占字节数为%d位。\n",sizeof(signed long));
	printf("unsigned long所占字节数为%d位。\n",sizeof(unsigned long));
	printf("float所占字节数为%d位。\n",sizeof(float));
	printf("double所占字节数为%d位。\n",sizeof(double));
	print_star('*',50);
	char* pc ="abc";
	int* pi;
//	string* ps;
	char** ppc =&pc;
	void(*pf)();
	sizeof(pf);
	sizeof(pi);
//	sizeof(ps);
	sizeof(ppc);
	print_star('~',40);
	printf("pc='abc'所占字节数%d\n",sizeof(ppc));
	printf("int* pi 所占字节数%d\n",sizeof(pi));
	printf("void(*pf)()所占字节数%d\n",sizeof(pf));
	print_star('~',40);
	int c;
	int a;
//	printf("\n	~@@@@<=>~login:");			/*just fuuny,no usefull*/
//	a=getchar();
//	printf("\tpassword:");
	printf("\n～～～～～～～~按ENTER键退出！～～～～～～～～～～～～～\n");
	printf("%c",a);			/*Note that getchar reads from stdin and is line buffered;this means it will not return until you press ENTER.*/
	while((c = getchar()) != '\n')
	{
//		printf("%c",c);
		;
	}
	return 0;
}
//********************************************************************
//			ledmove
//			0342201411
//********************************************************************
void ledmove(void)
{
char str[]="0342201411";
static int a[10];
int i;
char *p;
for (i=0;i<10;i++) a[i]=0;
for(p=str;*p!='\0';p++)
    {
     i=*p-'0';
     printf("%d\t",i);	
     a[i]++;
     }
for (i=0;i<10;i++)printf("%d\t",a[i]);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	Delay(10);
}
