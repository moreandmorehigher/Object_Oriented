#ifndef BOOK_H
#define BOOK_H

using std::string;

class Book {
private:
    string isbn;
    string title;
    string author;
public:
    Book(){};
    Book(string is, string tr, string au);
    string getTitle();
    string getIsbn();
};
#endif