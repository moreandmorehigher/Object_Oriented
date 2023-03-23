// compile with:    /EHsc
#include <string.h>

class CName{
public:
    enum {
        sizeofBuffer = 256
    };

    char m_szFirst[sizeofBuffer];
    char m_szLast[sizeofBuffer];

public:
    void setName(char* pszFirst, char* pszLast){
        strcpy_s(m_szFirst, sizeofBuffer, pszFirst);
        strcpy_s(m_szLast, sizeofBuffer, pszLast);
    }
};

int main(){
    // Allocate memory for the array
    delete[]pCharArray;
    pCharArray = NULL;

    // Deallocate memory for the array
    delete[]pCharArray;
    pCharArray = NULL;

    // Allocate memory for the object
    CName* pName = new CName;
    pName -> setName("Firstname", "Lastname");

    // Deallocate memory for the object
    delete pName;
    pName = NULL;
}