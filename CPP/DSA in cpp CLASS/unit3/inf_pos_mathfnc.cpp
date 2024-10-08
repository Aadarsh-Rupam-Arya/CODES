#include<iostream>
#include<math.h>
#define MAXSIZE 50

using namespace std;
class stack
{
	public:
	int s[MAXSIZE];
	int top;
	char *ss;
	int n;
	stack()
	{
		top = -1;
	}
	int push(int);
	int pop();
	int isFull();
	int isEmpty();
	
	void calculate(char* ss);
};

void stack::calculate(char* ss)
{
	int n1,n2,n3;
	while(*ss)
	{
		if(*ss == ' ' || *ss == '\t')
		{
			ss++;
			continue;
		}
		if(isdigit(*ss))
		{
			n = *ss-'0';
			push(n);
		}
		else
		{
			n1 = pop();
			n2 = pop();
			switch(*ss)
			{
				case '+':
					n3 = n2+n1;
					break;
					
				case '-':
					n3 = n2-n1;
					break;
					
				case '*':
					n3 = n2*n1;
					break;
					
				case '/':
					n3 = n2/n1;
					break;
					
				case '^':
					n3 = pow(n2,n1);
					break;
					
				default:
					cout<<"Invalid operator";
					exit(1);
			}
			push(n3);
		}
		ss++;
	}
	cout<<"Result: "<<pop();
}
int stack::isFull()
{
	if(top == MAXSIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int stack::isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int stack::push(int x)
{
	if(top == MAXSIZE-1)
	{
		cout<<"Stack is overflow...!"<<endl;
	}
	else
	{
		top++;
		s[top] = x;
	}
}

int stack::pop()
{
	int t = 0;
	if(top == -1)
	{
		cout<<"Stack is underflow"<<endl;
	}
	else
	{
		t = s[top];
		top--;
	}
	return t;
}

int main()
{
	stack one;
	char postfix[50];
	cout<<"Enter postfix expression: ";
	cin.getline(postfix,MAXSIZE);
	one.calculate(postfix);
	
	return 0;
}

