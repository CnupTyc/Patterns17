#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Pas: public Wagon
{
  public:
    int seats;
    int price;
	int tippas;
  
  public:
    Pas(void) {seats=36; price=0; tippas=0;}; // ���������� �� ���������
    Pas(int n,int m,int l) {seats=n; price=m; tippas=l;}; // ���������� �����������
    virtual int getseats(){return seats;}; // ��������� ���-�� ���� ������
    virtual int getprice() {return price;}; // ��������� ���� ������
    virtual int gettippas() {return tippas;}; // ��������� ���� ������
    virtual void setseats(int j) {seats=j;}; // ��������� ���������� ����
	virtual void setprice(int j) {price=j;}; // ��������� ����
    virtual void settippas(int j) {tippas=j;}; // ��������� ���� ������
	virtual void firstprice(void); // �������������� ����
	virtual Pas::~Pas() {cout << "Destructor(Pas)" << endl;}; //����������
};
