#ifndef ADDER_H
#define ADDER_H

namespace ADDER
{
    class Adder{
        int op1, op2;
    public:
        Adder(int a, int b);
        int process();
    };

    class Calculator{
    public:
        void run();
    };
}

#endif /* ADDER_H */