#include<stdio.h>
int main()
// day 2
{
	// Variable in C-Programming
	/*
		1. variable declaration
		2. variable initialization
		3. mutability of values
		4. rules of creating name of variable
		5. diff type of value storing
		6. find the size of variable
	*/
	
	// syntax - datatype variable_name = value
	
	/*
		int rollno; // 1. declaration of variable
		int rollno = 103; // 2. initialization of variable
	*/ 
	int rollno = 103;
	//printf("%d\n",rollno);
	rollno = 56; // 3. mutability of variable
	printf("Nihar's roll number on class 12 is: %d\n\n\n\n",rollno);
	
	//4.
	// _myvar; MyVar; myvar; MYVAR; student_name; student123; -- valid name
	// 123var; student name; int void; -- invalid name 
	
	//5.
	int i = 10;
	float f = 10.5;
	double db = 10.50006;
	char c = 'a';
	long int li = 769928123;
	short int si = 12;
	char string = '\t';
	
	printf("The value of i: %d\n",i);
	printf("The value of f: %.1f\n",f);
	printf("The value of db: %.5lf\n",db);
	printf("The value of c: %c\n",c);
	printf("The value of li: %ld\n",li);
	printf("The value of si: %d\n",si);
	printf("The value of string: %c",string);
	printf("\\This is how its working\n\n\n\n");
	
	//6.
	printf("The size of variable i is: %d\n",sizeof(i));
	printf("The size of variable f is: %d\n",sizeof(f));
	printf("The size of variable db is: %d\n",sizeof(db));
	printf("The size of variable c is: %d\n",sizeof(c));
	printf("The size of variable li is: %d\n",sizeof(li));
	printf("The size of variable si is: %d\n\n\n\n",sizeof(si));




	int pa, pt, pe, po;

	pa = pt = pe = po = 45;

	printf("%d\n",pa);
	printf("%d\n",pt);
	printf("%d\n",pe);
	printf("%d\n",po);





	return 0;
	
}