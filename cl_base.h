#ifndef INC_4_1_1_CL_BASE_H
#define INC_4_1_1_CL_BASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
	string name; //Переменная с именем объекта
	cl_base* parent;	//указатель на объект класса cl_base
	int readiness = 0;		//Переменная с индексом
public:
	vector <cl_base*> children;//Вектор дочерних объектов
	cl_base(cl_base* parent, string name = "application");//Перегрузка конструктора
	void set_name(string name);//Метод задания имени 
	void set_parent(cl_base* parent);//Метод задания родителя
	cl_base* get_parent();//Метод, возвращающий ссылку на объект класса cl_base
	string get_name();// Метод получения Имени
	void print_tree(int depth = 0);//Метод Вывода дерева на экран
	void print_tree_ready(int depth = 0);
	//создано
	void set_readiness(int data);
	cl_base* get_object_by_name(string name);//Метод возвращающий сслыку на объект через имя
};

#endif