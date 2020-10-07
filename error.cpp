 #include "std_lib_facilities.h"
 
 int main () 
 try{
 
 	//cout << "Succes!\n"; //nagy C
 
 	//cout << "Succes!\n"; // jó volt
 	
 	//cout << "Succes!\n"; // \ után !
 	
 	//cout << "Succes! \n" ; // succes nem volt ""
 	
 	/*int res = 7; // string az nem szám
 	vector<int> v(10);
 	v[5]= res;
 	cout << "Succes!\n"; */
 	
 	/*vector <int> v(10);
 	v[5] = 7; // ()->[]
 	if (v[5]==7) // ()->[] , != -> ==
 		cout << "Succes!\n"; */
 
 	/*bool cond = true;  // ezt a sort hozzá kellett adni
 	if (cond)
 		cout << "Succes!\n";
 	else
 		cout << "Fail\n"; */
 	
 	/*bool c = true; // false -> true
 	if (c)
 		cout << "Succes!\n";
 	else
 		cout << "Fail\n"; */
 
 	/*string s = "ape"; // haszontalan
 	bool c = true ; // boo+l , egy string az nem true/false
 	if (c)
 		cout << "Succes!\n"; */
 	
 	/*string s = "ape";
 	if (s =="ape") // fool -> ape
 		cout << "Succes! \n"; */
 		
 	/*string s = "ape";
 	if (s =="ape") // fool -> ape
 		cout << "Succes! \n"; // +< */ 
 		
 	/*string s = "ape";
 	if (s == "ape") // fool -> ape , '+' nem jó operátor
 		cout << "Succes! \n"; // + < */
 		
 	/*vector<char> v(5);
 	for (int i = 0; i<v.size(); ++i); // nem 0 kisebb mint v.size hanem i
 		cout << "Succes! \n"; */
 		
 	/*vector<char> v(5);
 	for (int i = 0; i<=v.size(); ++i); // v.'-'size
 		cout << "Succes! \n"; */ 
 		
 	/*string s = "Succes!\n";
 	for (int i = 0; i<9; ++i) // 6 -> 9 nem volt elég karakter kiiratva
 		cout << s[i]; */
 		
 	/*if (true) //then ment a kukába
 		cout << "Succes!\n";
 	else
 		cout << "Fail!\n"; */
 		
 	/*int x = 2000;
 	int c = x; // char -> int
 	if (c==2000)
 		cout << "Succes!\n"; */
 		
 	/*string s = "Succes!\n";
 	for (int i = 0; i<9; ++i) // 10 karakter túl sok
 		cout << s[i]; */
 		
 	/*vector<int> v(0); // vetornak kell egy típus , túl sok elem
 	for (int i = 0; i<=v.size(); ++i)
 		cout << "Succes!\n"; */
 		
 	/*int i = 0;
 	int j = 9;
 	while (i<10) ++i; // nem a j-t kell növelni
 		if (j<i)
 			cout << "Succes!\n"; */
 			
 	int x = 2; //21 ez kell még és a többi
 	double d = 5/(x-2);
 	if (d==2*x+0.5)
 		cout << "Succes!\n";
 
 	return 0;
 
 }
 
 catch(exception& e) {
 
 	cerr << "error:" << e.what() << "\n";
 
 }
