

class PowerManager{
    public:
    PowerManager(){}
    virtual ~PowerManager(){}
    virtual int getPowerState();
    virtual int getPowerMode();
};
