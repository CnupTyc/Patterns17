#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Slu: public Wagon
{
  private:
    int tipslu;
    
  public:
    Slu(void) {tipslu=0;}; // ���������� �� ���������
	Slu(int ptipslu) {tipslu=ptipslu;}; // ����������� �����������
    int gettipslu() {return tipslu;}; // ��������� ���� ������
    virtual void settipslu(int j) {tipslu=j;}; // ��������� ���� ������
	//virtual string print(); // ������ �������� � ������ 
	virtual char *getname (void) {return("Slu");}; //������ �������� ������
	virtual Slu::~Slu() {cout << "Destructor(Pas)" << endl;}; //����������
};
