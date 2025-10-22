#include "book.h"
#include <iostream>

using namespace std;

//const par def.
Book::Book():title(), author(), isbn() {
}
//const avec params.
Book::Book(const string& title, const string& author, const string& isbn)
: title(title), author(author), isbn(isbn) {

}

Book::Book(){}

