#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int add(){// function for addition 
    	

	int a; //declearing variable
    int sum= 0; // declearing variable and inislized its value 0
    int tnum = 0; //declearing another variable equal to 0
   cout << "For Addition " << endl; //message print on screen
    cout << "Enter first number  " <<endl;//message print on screen
    cin >>a;
    while(a != -1){ //using while loop 
    	sum =sum+ a;
    	tnum++;
    	    	cout << "Enter another number or -1 to find answer " << endl;
    	cin >>a;
	}
cout << "Total number you entered "<< tnum <<endl; // print total number on screen 
cout << "Sum is : " <<sum; //print Addition  on screen
	}

int sub(){ // function for addition 
		int a,b,sub; //declearing variable
	cout << "For Substraction " << endl ; //message print on screen
		cout<<"Enter Ist number " << endl;  //message print on screen
		cin>>a; // taking value form user 
          cout<<"Enter 2nd  number " << endl;  //message print on screen
	    	cin>>b; // taking value form user 
	    		sub=a-b; // formula save value of a and  b store in sub 
	    	cout << "Substraction of " << a << " - " << b << " is " << sub << endl; // result print on screen 
}

int mul(){ // function for addition 
		int a,b,mul; //declearing variable
	cout << "For Multiplying " << endl ; //message print on screen
		cout<<"Enter Ist number " << endl;  //message print on screen
		cin>>a; // taking value form user 
          cout<<"Enter 2nd  number " << endl;  //message print on screen
	    	cin>>b; // taking value form user 
	    		mul=a*b; // formula save value of a and  b store in mul 
	    	cout << "Multiplying  of " << a << " * " << b << " is " << mul << endl; // result print on screen 
}

int div(){ // function for addition 
		int a,b,div; //declearing variable
	cout << "For Division " << endl ; //message print on screen
		cout<<"Enter Ist number " << endl;  //message print on screen
		cin>>a; // taking value form user 
          cout<<"Enter 2nd  number " << endl;  //message print on screen
	    	cin>>b; // taking value form user 
	    		div=a/b; // formula save value of a and  b store in div 
	    	cout << "Division of " << a << " / " << b << " is " << div << endl; // result print on screen 
}


int rem(){ // function for addition 
		int a,b,rem; //declearing variable
	cout << "For Reaminder " << endl ; //message print on screen
		cout<<"Enter Ist number " << endl;  //message print on screen
		cin>>a; // taking value form user 
          cout<<"Enter 2nd  number " << endl;  //message print on screen
	    	cin>>b; // taking value form user 
	    		rem=a%b; // formula save value of a and  b store in rem 
	    	cout << "Reaminder of " << a << " % " << b << " is " << rem << endl; // result print on screen 
}

int per(){ // function for addition 
		int a,b,c,per; //declearing variable
	cout << "For Percentage " << endl ; //message print on screen
		cout<<"Enter Ist number " << endl;  //message print on screen
		cin>>a; // taking value form user 
          cout<<"Enter 2nd  number " << endl;  //message print on screen
	    	cin>>b; // taking value form user 
	    		per=100*a/b; // formula save value of a and  b store in per 
	    	cout << "Reaminder of " << a << " % " << b << " is " << per << endl; // result print on screen 
}

int about(){ // function for addition 
		cout << endl<< "This caluclator is created by lablnet"<<endl << "thanks for using this software" <<endl<< "visit website https:/lablnet.tk  " << endl;//message print on screen
}
int avg(){
    int a; //declearing variable
    int atotal= 0; // declearing variable and inislized its value 0
    int numbera = 0; //declearing another variable equal to 0
        	cout << "For average " << endl; //message print on screen
    cout << "Enter first number   or -1 to to find answer " <<endl;//message print on screen
    cin >>a;
    while(a != -1){ //using while loop 
    	atotal =atotal+ a;
    	numbera++;
    	    	cout << "Enter another number or -1 to find answer " << endl;
    	cin >>a;
	}
cout << "Total number you entered "<< numbera <<endl; // print total number on screen 
cout << "Average is : " <<atotal/numbera; //print average on screen

}
int vowelorconsonant(){ // function  for VOWEL and CONSONANT 
	char v; //declearing character data type variable
	cout << "Please enter any chractor " << endl; //message print on screen
	v=getch(); // taking value form user using c built in function
	switch (v){ // using switch message 
    case  'a':  //given the condition to computer
    	cout <<"\""<< v <<"\"s vowel" << endl; //message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'b'://given the condition to computer
		    	cout <<"\""<< v <<"\"  is consonant"<< endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'c'://given the condition to computer
    	    	cout <<"\""<< v <<"\"  is consonant"<< endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'd'://given the condition to computer
		    	cout <<"\""<< v <<"\"  is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'e'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'f'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'g'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'h'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'i'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'j': //given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'k'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'l'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'm'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'n'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'o'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'p'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'q'://given the condition to computer
		    	cout <<"\""<< v <<"\"  is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'r'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  's':   //given the condition to computer
	 	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  't'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'u'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'v'://given the condition to computer
	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;	 //break the this condition
    case  'w': //given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'x'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'y'://given the condition to computer
	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;	 //break the this condition
    case  'z'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'A'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'B'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'C'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'D'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'E'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'F'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;//break the this condition
	case  'G':    //given the condition to computer
	 	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'H'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'I'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'J'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'K'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'L':    //given the condition to computer	
	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'M'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'N'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'O'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'P'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'Q'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'R'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'S'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
    case  'T'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'U'://given the condition to computer
		    	cout <<"\""<< v <<"\" is vowel" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'V'://given the condition to computer
	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;	 //break the this condition
    case  'W'://given the condition to computer
    	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'X'://given the condition to computer
		    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break; //break the this condition
	case  'Y'://given the condition to computer
	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;	 //break the this condition
    case  'Z'://given the condition to computer
	    	cout <<"\""<< v <<"\" is consonant" << endl;//message promot in screen when condition meet this the user input
    	break;	 //break the this condition
    	case '+'://given the condition to computer
    		cout <<"\""<< v <<"\" is addition sign please enter character " << endl;//message promot in screen when condition meet this the user input
	    	case '-'://given the condition to computer
    	cout <<"\""<< v <<"\" is substraction sign  please enter chrarctor "<< endl;//message promot in screen when condition meet this the user input
    		break; //break the this condition
        	case '*'://given the condition to computer
    		cout <<"\""<< v <<"\" is multiplying sign  please enter chrarctor "<< endl;//message promot in screen when condition meet this the user input
    		break; //break the this condition
     	case '/'://given the condition to computer
    		cout <<"\""<< v <<"\" is division sign  please enter chrarctor "<< endl;//message promot in screen when condition meet this the user input
    		break; //break the this condition
     	case ' '://given the condition to computer
    		cout <<"\""<< v <<"\" is space that is not allowed please enter chrarctor "<< endl;//message promot in screen when condition meet this the user input
    		break; //break the this condition
  	 case '\n'://given the condition to computer
  	 	cout <<"\""<< v <<"\" you press enter please enter character " <<endl;//message promot in screen when condition meet this the user input
  	 	break; //break the this condition
  	 	case '.'://given the condition to computer
  	 		cout <<"\""<< v <<"\" is dot please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break; //break the this condition
  	 		case '='://given the condition to computer
  	 			cout <<"\""<< v <<"\" is equal to sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 			break; //break the this condition
  	  	 		case '!'://given the condition to computer
  	 			cout <<"\""<< v <<"\" is not character sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break; //break the this condition
    		case '@'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is at sign please enter character " << endl;//message promot in screen when condition meet this the user input
  			break; //break the this condition
		case '#'://given the condition to computer
  	   	 		cout <<"\""<< v <<"\" is pound sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 	break; //break the this condition
	 		case '$'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is dollar sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 	break; //break the this condition
	    		case '%'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is percentage or module sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 	break; //break the this condition
			case '^'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is power sign e.g: 10^4=400. please enter character " << endl;//message promot in screen when condition meet this the user input
  		break; //break the this condition
			case '&'://given the condition to computer
  	 		cout <<"\""<< v <<"\" is and sign (boolean) please enter character " << endl;//message promot in screen when condition meet this the user input
  	 	break; //break the this condition
		case '('://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break; //break the this condition
  	 		case ')'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break; //break the this condition
			 		case '['://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break; //break the this condition
				case ']'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
  					case '{'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	 		
  	 			case '}'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is bracket please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
  	 	case '|'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is and operator please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition		
			case '?'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is question mark please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition
 		case '>'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is greater then sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
			case '<'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is less then sign please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
			case ','://given the condition to computer
  	 	cout <<"\""<< v <<"\" is comma please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
			case '\''://given the condition to computer
  	 	cout <<"\""<< v <<"\" is back slash please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
			case ';'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is semicolon please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
		case ':'://given the condition to computer
  	 	cout <<"\""<< v <<"\" is colon please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition	
			case '"'://given the condition to computer
  	 	cout <<"\""<< v <<"\"is quation mark please enter character " << endl;//message promot in screen when condition meet this the user input
  	 		break;  //break the this condition			   		   	 			
    	default: //default condition ...
    		cout <<"\""<< v <<"\" is number please enter character " << endl;//message promot in screen when condition meet this the user input all above conditions.
	}
}

int squareroot() { /*function for square root*/
	float  sq;    /* declerr variable*/
	cout << "For find square root" << endl; //print message on screen 
	cout <<"Enter any number find square root " << endl;//print message on screen 
	cin >> sq ;//taking user input 
	cout << "Square Root is " <<sqrt(sq);//print message on screen and using c biltin function sqrt..
	return 0;//return to function
}

int quiz(){
	char name[100];
	cout << " Enter your name and get your secret number!" << endl;
	cin >> name ;
}

int main () // main function
{
	int a,b,c; /*declearing variables*/
    char x; /*declearing variables*/
    char repeat; //declearing variables
   do {//start do while loop
   cout << "      This is a simple calculator that is created by malik umer farooq " << endl;//print message on screen 
   cout << "    ******************************************************************** " << endl;//print message on screen 
   cout << "                         Version 40.0.9 " << endl;//print message on screen 
   cout << "                        ::::::::::::::::::  " << endl;//print message on screen 
   cout << "                    Thanks for using my software " << endl;//print message on screen 
   cout << "                   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  " << endl;//print message on screen 
   cout << "                  WELCOME TO LABLNET SOFTWAR " << endl;//print message on screen 
   cout << "                |||||||||||||||||||||||||||||||||||||||||| " << endl;//print message on screen 
    cout << "Press 'a' for Addition " << endl;//print message on screen 
    cout << "Press 's' for Subtraction " << endl;//print message on screen 
    cout << "Press 'm' for Multiplication " << endl;//print message on screen 
    cout << "Press 'd' for Division " << endl; //print message on screen 
    cout << "Press 'v' for Average " << endl;//print message on screen 
    cout << "Press 'e' for Remainder between two number " << endl;//print message on screen 
  cout << "Press 'h' for Find square root of any number " << endl; //print message on screen 
    cout << "Press 'p' for Percentage " << endl;//print message on screen 
  cout << "Press 'c' for VOWEL and CONSONANT" << endl;//print message on screen 
  cout << "Press 'u' for checking character is upper or lower  case " << endl;//print message on screen 
    cout << "Press 'z' for About " << endl;//print message on screen 
     x=getch(); // taking input form users

  if(x=='a'){ //using conditional statement
  	add(); // calling to functon
  }
  
    if(x=='s'){//using conditional statement
  	sub();// calling to functon
  	
	  }
  	   if(x=='m'){//using conditional statement
 mul();// calling to functon
  	
	  }
  	   if(x=='d'){//using conditional statement
  	  div();// calling to functon
  }
  
  if(x=='p'){//using conditional statement
  	  	per();// calling to functon
  }
    
      if(x=='e'){//using conditional statement
rem();// calling to functon
  }
    if(x=='z'){//using conditional statement
    	about();// calling to functon
	}

if(x=='v'){//using conditional statement
	avg();// calling to functon
}
if (x=='c'){//using conditional statement
	vowelorconsonant();// calling to functon
}
if(x=='h'){//using conditional statement
	squareroot();// calling to functon
}
if(x=='u'){//using conditional statement
cout << endl << "COMMING SOON" << endl; //message on screen print
}
 cout << endl <<" Enter \"r\"for repeat"; //for repeat program
	repeat=getch(); // form user value
}	while(repeat=='r');//end the while loop
}
