
/*Excercise 5_1:As written, getint treats a + or - not followed by a digit as a valid representation of zero. Fix it to push such a character back on the input.*/
#include <ctype.h>
#include <stdio.h> 

#define SIZE 1000
#define BUFSIZE 100

int getint(int* );
int getch(void);
void ungetch(int); 
char buf[BUFSIZE];
int bufp = 0;

/* getinit: get next integer from input into *pn */
int getint(int *pn)
{
	int c, sign; 

	while(isspace (c = getch())); /*skip white space*/
	{

	}
	if(!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		printf("is this true\n");
		ungetch(c);
		return 0; 
	}
	sign = (c == '-') ? -1:1; 
	if (c == '+' || c == '-')
		c = getch(); 
	for (*pn = 0; isdigit(c); c=getch())
	{
		*pn = 10* *pn + (c - '0');
	}
	*pn *= sign;
	if (c!=EOF)
	{
		ungetch(c);
	}

	return c; 
}



void ungetch(int c)
{
	if(bufp >= BUFSIZE)
	{
		printf("ungetch: too maany characters\n");
	}
	else 
		buf[bufp++] = c; 
}

int getch(void)
{
	return (bufp >0) ? buf[--bufp] : getchar(); 
}

int main()
{
	int index_one, array[SIZE];

	for (index_one = 0; index_one<SIZE && getint(&array[index_one]) != EOF; index_one++)
	{
		printf("storing in n=%d, getint %d\n",index_one,array[index_one]);
	}

	printf("storing in index_one = %d, getint %d\n",index_one,array[index_one]);

	for(int index_two = 0; index_two <= index_one; index_two++)
	{
		printf("%d", array[index_two]);
	}

	return 0; 
}
