// stack implementation using array


// #include<iostream>
// #include<string.h>
// #define MAXSIZE 5
// using namespace std;


// class Stack{
//     char arr[MAXSIZE];
//     int top ;

//     public : 

//     Stack(){
//         top = -1 ;
//     }
//     void push(char);
//     // void pop();
//     char pop();
//     void isfull();
//     // void isempty();
//     char isempty();
//     // void gettop();
//     char gettop();

//     char isp(char);     // in stack priority
//     char icp(char);     // incomming priority
//     void infix_to_postfix(char infix[50] );
//     void disp();

// };

// void Stack :: disp(){
//         cout<<"The stack is : ";
//         for(int i = 0 ; i < MAXSIZE ; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// void Stack:: push(char x){
//     // check overflow and then insert;
//     if (top == MAXSIZE - 1 ){
//         // cout<<"Stack is overflow\n";
//     }
//     else{
//         top++;
//         // int k ;
//         // cout<<"Enter the value to insert in stack : ";
//         // cin>>k;.
//         arr[top] = x; 
//         // cout<<"Elem inserted ot stack\n";
//     }

// }

// // char Stack:: push(char x){
// //     // check overflow and then insert;
// //     if (top == MAXSIZE - 1 ){
// //         cout<<"Stack is overflow\n";
// //     }
// //     else{
// //         top++;
// //         // int k ;
// //         // cout<<"Enter the value to insert in stack : ";
// //         // cin>>k;.
// //         arr[top] = x; 
// //         cout<<"Elem inserted ot stack\n";
// //     }
// // }

// // void Stack:: pop(){
// //     char t ;
// //     if(top == -1){
// //         cout<<"Stack is underflow\n";
// //     }
// //     else{
// //         t = arr[top];
// //         top--;
// //         cout<< t <<endl;    
// //     }
// // }

// char Stack:: pop(){
//     char t ;
//     if(top == -1){
//         // cout<<"Stack is underflow\n";
//         return 0 ;
//     }
//     else{
//         t = arr[top];
//         top--;
//         // cout<< t <<endl; 
//         return t ;   

//     }
// }

// void Stack :: isfull(){
//     if(top == MAXSIZE-1){
//         cout<<"Is full\n";
//     }
//     else{
//         cout<<"Threre is space for "<< MAXSIZE - top - 1<<" elements\n";
//     }
// }

// // void Stack :: isempty(){
// //     if(top == -1){
// //         cout<<"Is Empty\n";
// //     }
// //     else{
// //         cout<<"There is elem "<<top+1<<" present in it\n";
// //     }
// // }

// char Stack :: isempty(){
//     if(top == -1){
//         cout<<"Is Empty\n";
//     }
//     else{
//         // cout<<"There is elem "<<top+1<<" present in it\n";
//         return top+1;
//     }
// }

// // void Stack :: gettop(){
// //     // cout<<"The top elem is : "<<arr[top]<<endl;
// // }

// char Stack :: gettop(){

//     // cout<<"The top elem is : "<<arr[top]<<endl;

//     return arr[top];
// }

// char Stack :: isp(char c){     // in stack priority
   
//     switch (c)
//     {
//     case '+':
//     case '-':
//         return 1 ;
//     case '*':
//     case '/':
//         return 2 ;
//     case '(':
//         return 0 ;
//     case '^':
//         return 3 ;
//     case '#':           // this is for using as the least elem ;
//         return -1 ;

//     default:
//         break;
//     }

// }

// char Stack :: icp(char c){    // incomming priority
   
//     switch (c)
//     {
//     case '+':
//     case '-':
//         return 1 ;
//     case '*':
//     case '/':
//         return 2 ;
//     case '(':
//         return 4 ;
//     case '^':
//         return 4 ;
    
//     default:
//         break;
//     }

// }

// void Stack :: infix_to_postfix(char infix[50]){
    
//     Stack s ;
    
//     int i = 0 ;
//     s.push('#');
//     char ch ,x ;
//     while(infix[i]!='\0' || infix[i]!=' '){  // '\0' or  ' ' both are same ;
//         ch = infix[i];
//         i++;

//         if(ch >= 'a' && ch <= 'z' ){
//             cout<<ch;   // just display ch ;
//         }
//         else if ( ch == ')' ){
//         while( s.gettop() != '(' ){
//                 char x = s.pop();
//                 cout<<x; 
//         }
//         s.pop();
//         }
//         else{
//             while( isp(s.gettop()) >= icp(ch)){
//                 char x = s.pop();
//                 cout<<x;
//         }
//             s.push(ch);
//         }
//     }
//     while(!s.isempty()){
//          x= s.pop();
//         if(x!= '#'){
//             cout<<x ;
//         }
        
//     }


// }

               
                

// int main()
// {
//    Stack obj ;

//     char inf[50];

//     cout<<"Enter infix expression: ";
//     cin>>inf;

//     obj.infix_to_postfix(inf);











// //    obj.push('a');
// //    obj.push('b');
// //    obj.push('c');
// //    obj.push('d');
// //    obj.push('e');
// // for(int i = 0 ; i<9 ; i++ ){
// //     obj.pop();
// // }


// //    cout<<obj.pop()<<endl;
// //    cout<<obj.pop()<<endl;
// //    obj.push(4);
// //    obj.push(5);
// //    obj.push(6);
// //    obj.push(7);

//     // obj.disp();
//     // obj.isfull();
//     // obj.isempty();
//     // obj.gettop();

                
                
//     return 0;
// }




#include<iostream>
#define MAXSIZE 6
using namespace std;

class Stack
{
	char s[MAXSIZE];
	int top;
	public:
	Stack()
	{
		top=-1;
	}
	void push(char x);
	char pop();
	
	
	bool isEmpty();
	bool isFull();
	
	
	char getTop();
	
	
	char isp(char);
	char icp(char);
	
	
	void infix_to_postfix(char infix[50]);

};



void Stack::infix_to_postfix(char infix[50])
{
	Stack s;
	int i=0;
	char ch,x;
	s.push('#');
	while(infix[i]!='\0')
	{
		ch=infix[i];
		i++;
		if(ch>='a'&&ch<='z')
		{
			cout<<ch;
		}
		else if(ch==')')
		{
			while(s.getTop()!='(')
			{
				x=s.pop();
				cout<<x;
			}
			s.pop();
		}
		else
		{
			while(isp(s.getTop())>=icp(ch))
			{
				x=s.pop();
				cout<<x;
			}
			s.push(ch);
		}
	}
	while(!s.isEmpty())
	{
		x=s.pop();
		if(x!='#')
		 cout<<x;
	}
	
}
char Stack::isp(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '(':
			return 0;
		case '^':
			return 3;
		case '#':
			return -1;
	}
}



char Stack::icp(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '(':
			return 0;
		case '^':
			return 3;
		case '#':
			return -1;
	}
}




bool Stack :: isFull()
{
	if(top==MAXSIZE-1)
		return true;
	else
		return false;
}

bool Stack :: isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}



void Stack::push(char x)
{
	if(top==MAXSIZE-1)
	{
		cout<<"Stack is full, it will overflow!!"<<endl;
	}
	else
	{
		top++;
		s[top]=x;
	}
}


char Stack::pop()
{
	char t='\0';
	if(top==-1)
	{
		cout<<"Stack is empty, it is overflow!!"<<endl;
	}
	else
	{
		t=s[top];
		top--;
	}
	return t;
}

char Stack :: getTop()
{
	char t='\0';
	if(top==-1)
	{
		cout<<"Stack is empty, it is underflow!!"<<endl;
	}
	else
	{
		t=s[top];
		return t;
	}
}


int main()
{
	Stack obj1;
	char inf[50];
	cout<<"Enter infix expression : ";
	cin>>inf;
	obj1.infix_to_postfix(inf);
	return 0;
}
