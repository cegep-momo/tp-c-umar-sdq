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
string Book::getBorrowerName() const {
    return borrowerName;
}
bool Book::getAvailability() const {
    return isAvailable;
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
void Book::setBorrowerName(const string& name) {
    borrowerName = name;
}
void Book::setAvailability(bool available) {
    isAvailable = available;
}

// methode check out

void Book::checkOut(const string& borrower) {
    if (!isAvailable)
    {
        cout << "Le livre n'est pas disponible pour le prêt." << endl;
    } else
    {
        isAvailable = false;
        borrowerName = borrower;
    }
}

// methode return book


void Book::returnBook() {
    isAvailable = true;
    borrowerName = "";
}

// methode to string


string Book::toString() const {

    string availabilityStr = isAvailable ? "Disponible" : "Emprunté par " + borrowerName;
    return "Titre: " + title + "\nAuteur: " + author + "\nISBN: " + isbn + "\nStatut: " + availabilityStr;

}

// methode to file format
string Book::toFileFormat() const {
    return title + "|" + author + "|" + isbn + "|";
}

void Book::fromFileFormat(const string& line) {
    
    size_t pos1 = line.find('|');
    size_t pos2 = line.find('|', pos1 + 1);
    size_t pos3 = line.find('|', pos2 + 1);

    title = line.substr(0, pos1);
    author = line.substr(pos1 + 1, pos2 - pos1 - 1);
    isbn = line.substr(pos2 + 1, pos3 - pos2 - 1);

}


