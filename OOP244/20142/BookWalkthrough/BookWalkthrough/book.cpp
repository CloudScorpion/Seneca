 #include <iostream>
 #include <iomanip>
 #include <cstring>
 using namespace std;

 #define STR_MAX 6
 #define MAX_CHAPTERS 4

 class String {
     int no;
     char string[STR_MAX+1];
   public:
     String() {
         no = 0;
         strcpy(string, "");
         cout << '#';
     }
     void operator=(const char* str) {
         no = strlen(str);
         strcpy(string, str);
         cout << '*' << no << '|' << string << '|';
     }
     ~String() {
         cout << '~' << setw(2) << setfill('0') << no <<
          setfill(' ') << '|' << string << '|' << endl;
     }
     void display() const {
         cout << string << endl;
     }
 };

 class Book {
     int nc;
     String title;
     String chapter[MAX_CHAPTERS];
   public:
     Book() {
         nc = 0;
         title = "";              // calls = operator above
     }
     Book(int c, const char* t) {
         nc = 0;
         title = t;               // calls = operator above
         cout << endl;
         for (int i = 0; i < c; i++)
             (*this)++;           // calls post-fix operator below
     }
     ~Book() {
         display();
         cout << "-----------" << endl; // 11 -'s
     }
     void display() const {
         title.display();
         for (int i = 0; i < nc; i++) {
             cout << setw(3) << i + 1 << '.';
             chapter[i].display();
         }
     }
     void operator++() {
         chapter[nc++] = "?";  // calls = operator above
     }
     void operator++(int) {
         chapter[nc++] = "";   // calls = operator above
     }
     void write(int i, const char* str) {
         if (i >= 0 && i < nc)
             chapter[i] = str; // calls = operator above
     }
 };

 int main() {
     Book* book;

     cout << "\n--------------" << endl;  // 14 -'s
     book = new Book(3, "Notes");         // allocate on fresstore

     cout << "\n------------" << endl;    // 12 -'s
     book->write(0, "C++");
     book->write(2, "HTML");
     cout << "\n---------------" << endl; // 15 -'s
     delete book;                         // remove from freestore 
     cout << "-----------" << endl;       // 11 -'s

     return 0;
 }