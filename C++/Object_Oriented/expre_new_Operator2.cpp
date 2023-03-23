// C2660 expected
class A {
public:
    A(int) {throw "Fail";}
};
void F(void){
    try{
        // heap memory pointed to by pal will be deallocated
        // by calling ::operator delete(void*)
        A* pal = new A(10);
    } catch (...) {
    }
    try {
        // This will call :: operator new(size_t, char*, int).
        // When A::A(int) does a throw, we should call
        // ::operator delete(void*, char*, int) to deallocate
        // the memory pointed to by pa2. Since
        // ::operator delete(void*, char*, int) has not been implemented.
        // memory will be leaked when the deallocation can't occur.

        A* pa2 = new(__FILE__, __LINE__) A(20);
    } catch (...) {
    }
}

int main(){
    A a;
}