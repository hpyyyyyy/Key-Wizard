#ifndef MOUSEDEFINE_H
#define MOUSEDEFINE_H
#include "mydefine.h"
#include <string>
using namespace std;
class MouseDefine:public myDefine
{
public:
    MouseDefine();
    void toObject() override;
    void toString() override;
    int getKeyType();
    int gettime();
    string getName() override;

    void setKeyType();
    void setTime();

private:
    int keyType; //0:左键，1：右键，2：中键
    int time;//间隔时间
    string name;
};

#endif // MOUSEDEFINE_H
