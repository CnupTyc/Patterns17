#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Wagon
{
  private:
    int n;
  public:
    Wagon(void);  // ���������� �� ���������
    Wagon(int pn);  // ����������� �����������
    Wagon(Wagon *aWagon);  // ����������� �����������
	virtual Wagon::~Wagon(void) {cout << "Destructor called" << endl;};  //����������
};






