 #include <iostream>
using namespace std; 

void major (){

string a;



cout << "enter course " << endl; 
cout << "enter:" << endl;
cin >> a; 

if (a == "english" || a == "English" ){
      cout << "                Have a great day   " << endl;
      cout << endl;

}


 else if (a == "filipino" || a == "Filipino" || a == "FILIPINO" ){
      cout << "               MALIGAYANG ARAW" << endl;
      cout<< endl;

}


 else if (a == "math" || a == "Math" || a == "MATH" ){
      cout << "               1+1" << endl;
      cout<< endl;

}




else if (a == "BEED" ){
      cout << "            CHIKADING " << endl;
      cout<< endl;

}

 system ("pause");
  system ("cls");
 
}


int main()
 {
char opt;
do{

	cout <<  "          WMSU IPIL - college of education" << endl;

cout << " [1]SCENARIO 1 EGIDA" << endl;
cout << " [2]exit" <<endl;
cout << "enter option: " << endl;
cin >> opt;
switch (opt) {

case '1':

	major();
	
	break;
case '2':
	cout << "thank you" << endl;
	break;
default:

	cout <<"Invalid option\n";
	 system ("pause");
  system ("cls");
}


} while (opt != '2');

}