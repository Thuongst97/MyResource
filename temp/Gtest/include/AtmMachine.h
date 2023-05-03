#include <bits/stdc++.h>

class AtmMachine{
    public:
    AtmMachine(Banker& banker) : mBanker(banker){}
    virtual bool credit(int account, int amount);
    virtual int checkBalance(int account);
    private:
    Banker* mBanker;
};