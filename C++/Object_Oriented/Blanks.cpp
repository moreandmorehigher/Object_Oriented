#include <malloc.h>
#include <memory.h>

class Blanks
{
public:
    Blanks(){}
    void *operator new(size_t stAllocateBlock, char chInit);
};

void *Blanks::operator new(size_t stAllocateBlock, char chInit)
{
    void *pvTemp = malloc(stAllocateBlock);
    if(pvTemp != 0) memset(pvTemp, chInit, stAllocateBlock);
    return pvTemp;
}
// For discrete objects of type Blanks, the global operator new function
// is hidden. Therefore, the following code allocats an object of type
// Blanks and initializes it to 0ax5
int main()
{
    Blanks *a5 = new(0ax5) Blanks;
    return a5 != 0;
}