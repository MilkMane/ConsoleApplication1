#ifndef INC_4_1_1_CL_BASE_H
#define INC_4_1_1_CL_BASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
	string name; //���������� � ������ �������
	cl_base* parent;	//��������� �� ������ ������ cl_base
	int readiness = 0;		//���������� � ��������
public:
	vector <cl_base*> children;//������ �������� ��������
	cl_base(cl_base* parent, string name = "application");//���������� ������������
	void set_name(string name);//����� ������� ����� 
	void set_parent(cl_base* parent);//����� ������� ��������
	cl_base* get_parent();//�����, ������������ ������ �� ������ ������ cl_base
	string get_name();// ����� ��������� �����
	void print_tree(int depth = 0);//����� ������ ������ �� �����
	void print_tree_ready(int depth = 0);
	//�������
	void set_readiness(int data);
	cl_base* get_object_by_name(string name);//����� ������������ ������ �� ������ ����� ���
};

#endif