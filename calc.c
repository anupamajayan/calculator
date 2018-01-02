#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct values
{
char value1[20];
int value2;
int value3;
int ans;
};

int r=0,i;
char b[20],a[]="add",c[]="subtract",d[]="multiply",e[]="divide",f[]="addans",g[]="subtractans",h[]="multiplyans",j[]="divideans";

void addition(struct values*);
void additionans(struct values*);
void subtraction(struct values*);
void subtractionans(struct values*);
void multiplication(struct values*);
void multiplicationans(struct values*);
void divide(struct values*);
void divideans(struct values*);
void scan(struct values*);
void scanans(struct values*);
void scan(struct values*q)
{
scanf("%d%d",&q->value2,&q->value3);
}

void scanans(struct values*q)
{
scanf("%d",&q->value2);
}

void main()
{
struct values *v,*p;
	p=v;
	printf("welcome\n");
label:	scanf("%s",v->value1);
	printf("\n");
	strcpy(b,v->value1);
	if((strcmp(a,b))==0)
		{
		scan(v);
		addition(p);
		goto label;
		}
	else if((strcmp(c,b))==0)
		{
		scan(v);
		subtraction(p);
		goto label;
		}
	else if((strcmp(d,b))==0)
		{
		scan(v);
		multiplication(p);
		goto label;
		}
	else if((strcmp(e,b))==0)
		{
		scan(v);
		divide(p);
		goto label;
		}
	else if((strcmp(f,b))==0)
		{
		scanans(v);
		additionans(p);
		goto label;
		}
	else if((strcmp(g,b))==0)
		{
		scanans(v);
		subtractionans(p);
		goto label;
		}
	else if((strcmp(h,b))==0)
		{
		scanans(v);
		multiplicationans(p);
		goto label;
		}
	else if((strcmp(j,b))==0)
		{
		scanans(v);
		divideans(p);
		goto label;
		}
	else
		{
		goto label;
		}
}

void addition(struct values*p)
{
	int x,y,z;
	x=p->value2;
	y=p->value3;
	z=x+y;
	p->ans=z;
	printf("%d\n",z);
}

void subtraction(struct values*p)
{
        int x,y,z;
        x=p->value2;
        y=p->value3;
        z=x-y;
        p->ans=z;
        printf("%d\n",z);
}

void multiplication(struct values*p)
{
        int x,y,z;
        x=p->value2;
        y=p->value3;
        z=x*y;
        p->ans=z;
        printf("%d\n",z);
}

void divide(struct values*p)
{
        int x,y,z;
        x=p->value2;
        y=p->value3;
        z=x/y;
        p->ans=z;
        printf("%d\n",z);
}

void additionans(struct values*p)
{
		int x,y,z;
		x=p->ans;
		y=p->value2;
		z=x+y;
		p->ans=z;
		printf("%d\n",z);
}

void subtractionans(struct values*p)
{
        int x,y,z;
        x=p->ans;
        y=p->value2;
        z=x-y;
        p->ans=z;
        printf("%d\n",z);
}

void multiplicationans(struct values*p)
{
        int x,y,z;
        x=p->ans;
        y=p->value2;
        z=x*y;
        p->ans=z;
        printf("%d\n",z);
}

void divideans(struct values*p)
{
        int x,y,z;
        x=p->ans;
        y=p->value2;
        z=x/y;
        p->ans=z;
        printf("%d\n",z);
}

