#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

using std::string;

class BookManager {
private:
	Book swBook[10];
	int index = 0;
public:
	BookManager() {};
	void addBook(Book src);
	string searchIsbnByTitle(string str);
};

#endif // !BOOKMANAGER_H