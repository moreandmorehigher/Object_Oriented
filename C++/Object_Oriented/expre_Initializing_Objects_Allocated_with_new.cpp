class Acct
{
public:
    // Define default constructor and a constructor that accepts
    // an initial balance.
    Acct() { balance = 0.0;}
    Acct(double init_balance){balance = init_balance;}
private:
    double balance;
};

int main()
{
    Acct *CheckingAcct = new Acct;
    Acct *SavingAcct = new Acct(34.98);
    double *HowMuch = new double {43.0};
    // ...
}