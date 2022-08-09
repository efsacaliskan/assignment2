#ifndef SELECTIONALGORITHM
#define SELECTIONALGORITHM

class SelectionAlgorithm {
protected:
    int k;
public:
    virtual int select();
    SelectionAlgorithm(int k);
};
#endif 

