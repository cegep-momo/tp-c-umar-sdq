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
//destrc.
Book::Book(){}

//get

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return isbn;
}
//set
void Book::setTitle(const string& title) {
    this->title = title;
}
void Book::setAuthor(const string& author) {
    this->author = author;
}
void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

