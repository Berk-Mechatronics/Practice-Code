// ConsoleApplication.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cmath>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<cctype>
#include<string>
#include<conio.h>
#include<list>

//#define val 15;
//#define floatVal 15.3;
//#define charVal 'K';
//int functionofMul(int, int);
//int functionevenorodd(int);
//void functionofswap(int &, int &);

using namespace std;
//int n(int m);
//void display(char = '#', int = 1);

/*class acnt {
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_acnt();
	void show_acnt();
	void modify();
	void dep(int);
	void draw(int);
	void report()const;
	int retacno()const;
	int retdeposit() const;
	char rettype() const;
};

void acnt::create_acnt() {
	cout << "\nEnter The account No: ";	cin >> acno;
	cout << "\n\nEnter the name of the account Holder: "; cin.ignore();	cin.getline(name, 50);
	cout << "\nEnter the type of account (C/S)"; cin >> type; type = toupper(type);
	cout << "\nEnter The Initial amount(>=500 for Saving and >= 1000 for current ) : ";	cin >> deposit;
	cout << "\n\n\nAccount Successfully Created..";
}

void acnt::show_acnt() {cout << "\nAccount Number : " << acno;	cout << "\nAccount Holder : ";	cout << name;	cout << "\nType of The Account : " << type;	cout << "\nAccount Balance : " << deposit;}
void acnt::modify() {create_acnt();}
void acnt::dep(int x) { deposit += x; }
void acnt::draw(int x) { deposit -= x; }
void acnt::report() const{cout << acno << setw(10) << " " << name << setw(10) << " "<< type << setw(6) << deposit << endl;}
int acnt::retacno()const { return acno; }
int acnt::retdeposit() const { return deposit; }
char acnt::rettype()const { return type; }



void write_acnt();
void display_sp(int);
void modify_acnt(int);
void delete_acnt(int);
void display_all();
//void deposit_withdraw(int, int);
//void intro();
*/

//int variableN = 400;
//int VariableM = 500;
//
//void swap(int** n, int** m) {
//	*n = &variableN;
//	*m = &VariableM;
//}
//void output() {
//	cout << "N = " << variableN << endl;
//	cout << "M = " << VariableM << endl;
//}


	/*void swap(int *n, int *m) {
		int alpha;
		alpha = *n;
		*n = *m;
		*m = alpha;
	}
	void sort(int* data, int size) {
		int beta;
		for (beta = 0; beta < size - 1;beta++) {
			int charlie;
			for (charlie = beta + 1;charlie < size;charlie++) {
				if (data[beta] > data[charlie]) {
					swap(&data[beta], &data[charlie]);
			}
			
			}
		}
	}

	const int max_int = 10;*/

//#define class struct;
//
//struct Player {
//public:
//	int x, y;
//	int speed;
//
//	void move(int xa, int ya) {
//		xa = x * speed;
//		ya = y * speed;
//		cout << "The x axis: " << xa<<"\n\n";
//		cout << "The y axis: " << ya;
//	}
//
//
//
//};

//void compareOperation(string stringn, string stringm)
//{
//	// This returns a value that is less than 0 (stringn is smaller then stringm
//	if ((stringn.compare(stringm)) < 0)
//		cout << stringn << " is smaller than " << stringm << endl;
//	// This returns 0. Here stringn is being comapared to stringn, itself
//	if ((stringn.compare(stringn)) == 0)
//		cout << stringn << " is equals to " << stringn << endl;
//	else
//		cout << "Strings didn't match ";
//}
//
//class channel {
//
//	string Name;
//	string Ownername;
//	int subscribers;
//	list<string> publishervideotitles;
//
//public:
//	//constructors 
//	channel(string name, string ownerName) {
//		Name = name;
//		Ownername = ownerName;
//		subscribers = 0;
//	}
//
//	void getInfo(){
//		cout << "name: " << Name << "\n";
//		cout << "owner name: " << Ownername << "\n";
//		cout <<"Subscribers: " << subscribers << "\n";}
//};
//
//class youtubechannel : public channel {
//public:
//	youtubechannel(string name, string ownername) :channel(name, ownername) {
//
//	}
//
//
//};


class Insturment {
public:
	virtual void MakeSound() {
		cout << "The Insturment is playing right now...\n";
	}

};

class Accordion :public Insturment {

public:
	void MakeSound() {
		cout << "The Accordion is playing right now...\n";
	}
};

int main(void)
{
	//CHAPTER1:
	//Problem1: We read about the ASCII character set, print your desired character ASCII values from A to Z.

	/*char wanted;
	cout << "Enter your desired character to print its value: ";
	cin >> wanted;
	cout << "According to ASCII character set, value of " << wanted << " is : " <<
		(int)wanted;*/

	//Problem2: Write a program in C++ that uses five output statements to print the pattern
	/*cout << "A\n";
	cout << "AA\n";
	cout << "AAA\n";
	cout << "AAAA\n";
	cout << "AAAAA\n";*/

	/*int num1, num2, num3;

	
	cout << "Please enter any three random numbers: ";
	cin >> num1 >> num2 >> num3;

	
	cout << "Ascending order: " << std::endl;
	cout << std::min({ num1, num2, num3 }) << std::endl;
	cout << std::min({ std::max(num1, num2), std::max(num1, num3), std::max(num2, num3) }) << std::endl;
	cout << std::max({ num1, num2, num3 }) << std::endl;

	cout << "Descending order: " << std::endl;
	cout << std::max({ num1, num2, num3 }) << std::endl;
	cout << std::min({ std::max(num1, num2), std::max(num1, num3), std::max(num2, num3) }) << std::endl;
	cout << std::min({ num1, num2, num3 }) << std::endl;*/


	//CHAPTER2:

	//Summation
	/*int fint, sint,suma;

	cout << "What are the first and Second integer value :";
	cin >> fint >> sint;
	fint += sint;
	cout << fint << "+" << sint << "=" << fint;*/

	//Problem1: Your program must read four integers from the keyboard, calculate their sum and their average and it should print the answer on the screen.
	
	/*int fint, sint, tint, frint, sum;
	float av;

	cout << "Give four integer: ";
	cin >> fint >> sint>>tint>>frint;

	sum = fint + sint + tint+ frint;
	av = sum / 4;
	cout << "Summation: " << sum << " Average: " << av;*/

	//Problem2; Your program must read the temperature in Celsius and change it into Fahrenheit, using the following equation :

	//float celc, fahre;
	//cout << "What is the Celsius: ";
	//cin >> celc;
	//fahre = ((celc * 9.0) / 5.0) + 32;
	//cout << "The Celcius: " << celc << " The Fahrenheit: " << fahre;

	//Problem3: Write a program that reads a measurement in Inches and print the values
	
	//int foot,Yard;
	//float Centimeter, Meter, Inches;

	//cout << "Give Inches: ";
	//cin >> Inches;
	//foot = 12 * Inches;
	//Centimeter = 2.54 * Inches;
	//Meter = 39.37 * Inches;
	//Yard = 36 * Inches;
	//
	//cout << "Inches is " << Inches << "\nFoot: " << foot << "\nCentimeter: " << Centimeter << "\nMeter: " << Meter << "\nYard: " << Yard<<"\n\n\n\n";

	////Problem4: Rectengular
	//float val1,val2,area;
	//
	//cout << "What is the length of the sides: ";
	//cin >> val1 >> val2;
	//area = val1 * val2;
	//cout << "This is the area: " << area;
	
	
	//Chapter3: Functions

	//int num1, num2;
	//cout << "What: ";
	//cin >> num1 >> num2;
	//cout << "Multiplication: " << functionofMul(num1, num2);
	//int val;

	///*cin >> val;
	//double m = sqrt(val);
	//cout << m;*/

	/*cout << " Enter an integer: ";
	int m;
	cin >> m;
	int digit = n(m);
	cout << " Least Significant digit is: " << digit << endl;*/
	


	//cout << "No Argument passed: ";
	//display();
	//cout << "First Argument passed: ";
	//display('#');
	//cout << "Both Arguments passed: ";
	//display('$', 5);
	//int m;
	//cout << "Give a number pls: ";
	//cin >> m;
	//cout << "The number of "<< m <<" if ı is even the answer is 0 otherwise is odd and the answer is 1: " << functionevenorodd(m);
	

	//Prolem: To understand if else statement more precisely, we may write a program that reads an integer and prints weather the integer in positive or negative.
	//int m,n,t;
	//cout << "Number: ";
	//cin >> m>>n>>t;
	//cout << "The maximum value is " << max(max(m, n),t); 
	
	//Problem: Write a C++ program that reads operand and operator from the user and prints the answer.
	
	/*char operand;
	int number1, number2;
	cout << "Select the Operand: ";
	cin >> operand;
	cout << "Give a two numbers: ";
	cin >> number1 >> number2;
	try {
		switch (operand)
		{
		case '+':
			cout << "The summation is: " << number1 + number2;
			break;
		case '*':
			cout << "The multiplication is: " << number1 * number2;
			break;
		case '/':
			cout << "The dividing is: " << number1 / number2;
			break;
		case '%':
			cout << "The % is: " << number1 % number2;
			break;
		default:
			cout << "Change the operand\n\n\n\n";
			break;
		}
	}
	catch(int number1)
	{
	int number2;
	cout << "Select the Operand: ";
	cin >> operand;
	cout << "Give a two numbers: ";
	cin >> number1 >> number2;}*/


	//char ch;
	//int num;
	//intro();
	//do {
	//	system("cls");
	//	cout << "\n\n\n\tMAIN MENU";
	//	cout << "\n\n\t01. NEW ACCOUNT";
	//	cout << "\n\n\t02. DEPOSIT AMOUNT";
	//	cout << "\n\n\t03. WITHDRAW AMOUNT";
	//	cout << "\n\n\t04. BALANCE ENQUIRY";
	//	cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
	//	cout << "\n\n\t06. CLOSE AN ACCOUNT";
	//	cout << "\n\n\t07. MODIFY AN ACCOUNT";
	//	cout << "\n\n\t08. EXIT";
	//	cout << "\n\n\tSelect Your Option (1-8) ";
	//	cin >> ch;
	//	system("cls");
	//	switch (ch)
	//	{
	//	case'1':
	//		write_acnt();
	//		break;
	//	case'2':
	//		cout << "\n\n\tEnter The account No. : "; cin >> num;deposit_withdraw(num, 1);
	//		break;
	//	case'3':
	//		cout << "\n\n\tEnter The account No. : "; cin >> num;deposit_withdraw(num, 2);
	//		break;
	//	case'4':
	//		cout << "\n\n\tEnter The account No. : "; cin >> num;
	//		display_sp(num);
	//		break;
	//	case'5':
	//		display_all();
	//		break;
	//	case'6':
	//		cout << "\n\n\tEnter The account No. : "; cin >> num;
	//		delete_acnt(num);
	//		break;
	//	case'7':
	//		cout << "\n\n\tEnter The account No. : "; cin >> num;
	//		modify_acnt(num);
	//		break;
	//	case'8':
	//		cout << "\n\n\tThanks for using bank managemnt system";
	//		break;
	//	default:cout << "\a";
	//	}
	//	cin.ignore();
	//	cin.get();
	//} while (ch != '8');

	/*int n[5];
	int sum = 0;
	cout << "Given a 5 number: ";
	for (int j = 0;j < 5;j++) {
		cin >> n[j];
		sum += n[j];
	}
	cout << "The summation is " << sum;*/
	
	/*int alpha[10][10], beta, charlie, n, m;
	cout << "Enter size of row and column: ";
	cin >> beta >> charlie;
	cout << "Enter elements of matrices(row wise)" << endl;

	for (int n = 0;0 < beta;n++) {
		for (int m = 0;0 < charlie;m++) {
			cin >> alpha[n][m];
		}
	}
	cout << "Displaying matrix" << endl;
	for (n = 0;n < beta;n++)
	{
		for (m = 0;m < charlie;m++)
			cout << alpha[n][m] << " ";
		cout << endl;
	}*/

	//int r, c, alpha[100][100], beta[100][100], sum[100][100], i, j;
	//cout << "Enter number of rows (between 1 and 100): ";
	//cin >> r;
	//cout << "Enter number of columns (between 1 and 100): ";
	//cin >> c;
	//cout << endl << "Enter elements of 1st matrix: " << endl;
	//for (i = 0; i < r; ++i)
	//	for (j = 0; j < c; ++j)
	//	{
	//		cout << "Enter element a" << i + 1 << j + 1 << " : ";
	//		cin >> alpha[i][j];
	//	}
	//cout << endl << "Enter elements of 2nd matrix: " << endl;
	//for (i = 0; i < r; ++i)
	//	for (j = 0; j < c; ++j)
	//	{
	//		cout << "Enter element b" << i + 1 << j + 1 << " : ";
	//		cin >> beta[i][j];
	//	}
	//for (i = 0; i < r; ++i)
	//	for (j = 0; j < c; ++j)
	//		sum[i][j] = alpha[i][j] + beta[i][j];


	//cout << endl << "Sum of two matrix is: " << endl;
	//for (i = 0; i < r; ++i)
	//	for (j = 0; j < c; ++j)
	//	{
	//		cout << sum[i][j] << " ";
	//		if (j == c - 1)
	//			cout << endl;
	//	}
	
	//int variable = 19;
	//int *pointer = 14;
	//pointer = &variable;
	//
	//cout << "Value at variable = " << variable << endl;
	//cout << "Value at *pointer = " << *pointer << endl;
	//cout << "Value at pointer = " << pointer << endl;

	//int value = 9;
	//int val = 11;
	//int *ptr = &value;
	//int *zort = &val;
	//int rampage = *ptr;
	//int pompaya = *zort;


	/*int *testN = 0;
	int *testM = 0;
	swap(&testN, &testM);
	*testN = 69;
	*testM = 96;
	output();*/
	
	
	
//int integer[max_int];
//int o;
//	
//
//cout << "Enter ten integers you want to sort :" << endl;
//
//for (o = 0;0 < max_int && cin >> integer[o];o++);
//int num = o;
//sort(integer, num);
//
//cout << "Your Sorted data is" << endl;
//cout << "===================" << endl;
//for (int o = 0; o < num; o++)
//	cout << integer[o] << endl;
//cout << "===================" << endl;



	//Player player;
	//player.x = 5;
	//player.y = 3;
	//player.speed = 2;
	//player.move(3, 4);

	//
	//char yourfirstchar[100];
	//cout << "Enter a sitring";
	//cin >> yourfirstchar;
	//cout << "Y: " << yourfirstchar;
	//
	
	
	
	/*
	
	string string;
	cout << "Kindly enter your name: ";
	getline(cin,string);
	cout << " " << endl << endl << endl << endl;
	cout << "Hello " << string << "!" << endl;
	cout << "Nice to meet you!" << endl;
	cout << "We welcome you to the world of C++!" << endl;
	
	
	*/
	
	
	
	
	/*string stringn("Alpha");
	string stringm("Beta");
	compareOperation(stringn, stringm);
	return 0;*/
			
	//
	//channel channel1("Berk","Berk Robotics");
	/*channel.name = "Berk Robotics";
	channel.ownername = "Berk";
	channel.subscribers = 5;
	channel.publishervideotitles = { "C++\n","ROS\n","MATLAB\n","C\n", "EMBEDDED\n"};*/
	/*
	cout <<"name: " << channel1.Name << "\n";
	cout << "owner name: " << channel1.Ownername << "\n";*/
	//cout <<"Subscribers: " << channel.subscribers << "\n";
	//cout << "videos: ";

	/*for (string lis :) {
		cout << lis;
	}	*/
	
	
	Insturment* i1 = new Accordion();
	i1->MakeSound();

		
	
	






	return 0;
}



//int functionofMul(int num1, int num2)
//{
//	int num3 = num1 * num2;
//	return num3;
//}

//int n(int m)
//{
//	return (m % 10);
//}
//void display(char c, int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		cout << c;
//	}
//	cout << endl;
//}
//int functionevenorodd(int number1) {
//	int number3;
//
//	if (number1 %2 ==0) {
//		number3 = number1 % 2;
//	}
//	else {
//		number3 = number1 % 2;
//	}
//	return number3;
//}
//void functionofswap(int &number1, int &number2) {
//}
//void write_acnt() {	acnt ac;ofstream outFile;outFile.open("Account.dat", ios::binary | ios::app);
//	ac.create_acnt();outFile.write(reinterpret_cast<char*>(&ac), sizeof(acnt));	outFile.close();}
//
//void display_sp(int x) { acnt ac; bool flag = false; ifstream inFile; inFile.open("Account.dat", ios::binary); 
//	if (!inFile) {cout << "File could not be open !! Press any Key...";return;}
//	cout << "\nBALANCE DETAILS\n";
//
//	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(acnt)))
//	{
//		if (ac.retacno() == x)
//		{
//			ac.show_acnt();
//			flag = true;
//		}
//	}
//	inFile.close();
//	if (flag == false)
//	cout << "\n\nAccount number does not exist";
//}
//
//void modify_acnt(int x) {
//	bool found = false;
//	acnt ac;
//	fstream File;
//	File.open("Account.dat", ios::binary | ios::app | ios::out);
//	if (!File)
//	{
//		cout << "File could not be open !! Press any Key...";
//		return;
//	}
//	while (!File.eof() && found == false)
//	{
//		File.read(reinterpret_cast<char*> (&ac), sizeof(acnt));
//		if (ac.retacno() == x)
//		{
//			ac.show_acnt();
//			cout << "\n\nEnter The New Details of account" << endl;
//			ac.modify();
//			int pos = (-1) * static_cast<int>(sizeof(acnt));
//			File.seekp(pos, ios::cur);
//			File.write(reinterpret_cast<char*> (&ac), sizeof(acnt));
//			cout << "\n\n\t Record Updated";
//			found = true;
//		}
//	}
//	File.close();
//	if (found == false)
//		cout << "\n\n Record Not Found ";
//}
//
//void delete_acnt(int x){
//	acnt ac;
//	ifstream inFile;
//	ofstream outFile;
//	inFile.open("account.dat", ios::binary);
//	if (!inFile)
//	{
//		cout << "File could not be open !! Press any Key...";
//		return;
//	}
//	outFile.open("Temp.dat", ios::binary);
//	inFile.seekg(0, ios::beg);
//	while (inFile.read(reinterpret_cast<char*> (&ac),
//		sizeof(acnt)))
//	{
//		if (ac.retacno() != x)
//		{
//			outFile.write(reinterpret_cast<char*> (&ac), sizeof(acnt));
//		}
//	}
//	inFile.close();
//	outFile.close();
//	remove("account.dat");
//	rename("Temp.dat", "account.dat");
//	cout << "\n\n\tRecord Deleted ..";
//}
//
//void display_all(){}
//void deposit_withdraw(int x,int y){}
//void intro(){}
// 
// 
// 
// 
// 
//int pointer(Player& player, int x, int y) {
//	player.x 
//		player.y
//}
//CTRL+K+C(U)




//modbus similatörü, mod rs-sim, parametrik değil interaktif değil. easymodbus = Modbus protockol tamamı yok. READ FİLE WRİTE FİLE. içine script yazılabilecek bir interaktif simulatörü.  Adres değişmesi. Aldığı veriye göre davranış değişsin. 
















