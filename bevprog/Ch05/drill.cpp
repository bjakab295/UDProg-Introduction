#include "../std_lib_facilities.h"
 
 int main () 
 try{
 
  //cout << "Success!\n"; //nagy C
 
  //cout << "Success!\n"; // jó volt
  
  //cout << "Success!\n"; // \ után !
  
  //cout << "Success! \n" ; // succes nem volt ""
  
  /*int res = 7; // string az nem szám
  vector<int> v(10);
  v[5]= res;
  cout << "Success!\n"; */
  
  /*vector <int> v(10);
  v[5] = 7; // ()->[]
  if (v[5]==7) // ()->[] , != -> ==
    cout << "Success!\n"; */
 
  /*bool cond = true;  // ezt a sort hozzá kellett adni
  if (cond)
    cout << "Success!\n";
  else
    cout << "Fail\n"; */
  
  /*bool c = true; // false -> true
  if (c)
    cout << "Success!\n";
  else
    cout << "Fail\n"; */
 
  /*string s = "ape"; // haszontalan
  bool c = true ; // boo+l , egy string az nem true/false
  if (c)
    cout << "Success!\n"; */
  
  /*string s = "ape";
  if (s =="ape") // fool -> ape
    cout << "Success! \n"; */
    
  /*string s = "ape";
  if (s =="ape") // fool -> ape
    cout << "Success! \n"; // +< */ 
    
  /*string s = "ape";
  if (s == "ape") // fool -> ape , '+' nem jó operátor
    cout << "Success! \n"; // + < */
    
  /*vector<char> v(5);
  for (int i = 0; i<v.size(); ++i); // nem 0 kisebb mint v.size hanem i
    cout << "Success! \n"; */
    
  /*vector<char> v(5);
  for (int i = 0; i<=v.size(); ++i); // v.'-'size
    cout << "Success! \n"; */ 
    
  /*string s = "Success!\n";
  for (int i = 0; i<9; ++i) // 6 -> 9 nem volt elég karakter kiiratva
    cout << s[i]; */
    
  /*if (true) //then ment a kukába
    cout << "Success!\n";
  else
    cout << "Fail!\n"; */
    
  /*int x = 2000;
  int c = x; // char -> int
  if (c==2000)
    cout << "Success!\n"; */
    
  /*string s = "Success!\n";
  for (int i = 0; i<9; ++i) // 10 karakter túl sok
    cout << s[i]; */
    
  /*vector<int> v(0); // vetornak kell egy típus , túl sok elem
  for (int i = 0; i<=v.size(); ++i)
    cout << "Success!\n"; */
    
  /*int i = 0;
  int j = 9;
  while (i<10) ++i; // nem a j-t kell növelni
    if (j<i)
      cout << "Success!\n"; */
      
  /*int x = 3; // olyat lehet hogy fixelem az egyenletet?
  double d = 5/(x-2);
  if (d==2*x-1)
    cout << "Success!\n"; */

  /*string s = "Success!\n"; // string után nem kell <char>
  for (int i = 0; i<=9; ++i) //túl sok karaktert irat ki
    cout << s[i]; */

  /*int i = 0;
  int j = 9; // nem volt definiálva j
  while(i<10) ++i; // i-t növelem
    if (j<i)
      cout << "Success!\n"; */

  /*int x = 4;
  double d = 5/(x-2);
  if(d == 5/(x-2)) // ha nem matek fix akkor csak ctrl+c ctrl+v?
    cout << "Success!\n"; */

  cout << "Success!\n"; // nem cin
 
  return 0;
 
 }
 
 catch(exception& e) {
 
  cerr << "error:" << e.what() << "\n";
 
 }