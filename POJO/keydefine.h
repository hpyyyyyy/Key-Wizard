#ifndef KEYDEFINE_H
#define KEYDEFINE_H
#include "mydefine.h"
#include <vector>
#include<string>
using namespace std;
class KeyDefine:public myDefine{
public:
    KeyDefine();
    KeyDefine& toObject() override;
    string toString() override;
    vector<char> getKeys();
    vector<int> getTimes();
    void setName(string name) override;
    string getName() override;
    void setKeys(vector<char> keys);
    void setTimes(vector<int> times);
    void save() override;
    void record();
    void end();


private:
    vector<char>keys; //键的名称，以ascii码存储
    vector<int>times; //两个键之间的时间间隔
    string name;
};

#endif // KEYDEFINE_H
