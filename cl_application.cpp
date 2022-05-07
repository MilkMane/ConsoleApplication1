#include "cl_base.h"
#include "child2.h"
#include "child3.h"
#include "child4.h"
#include "child5.h"
#include "child6.h"
#include "cl_application.h"
#include <iostream>
#include <string>
using namespace std;

void cl_application::bild_tree_objects() {
	string parent1;
	string child1;
	int cl_num, readiness1;
	cin >> parent1;
	//creating parent object
	this->set_name(parent1);

	while (true) {
		cin >> parent1;
		if (parent1 == "endtree")break;
		cin >> child1 >> cl_num;
		if (cl_num == 2) child2* ch = new child2(this->get_object_by_name(parent1), child1);
		else if (cl_num == 3) child3* ch = new child3(this->get_object_by_name(parent1), child1);
		else if (cl_num == 4) child4* ch = new child4(this->get_object_by_name(parent1), child1);
		else if (cl_num == 5) child5* ch = new child5(this->get_object_by_name(parent1), child1);
		else if (cl_num == 6) child6* ch = new child6(this->get_object_by_name(parent1), child1);
	}
	string name;
	while (cin >> name >> readiness1) {
		cl_base* ptr = this->get_object_by_name(name);
		ptr->set_readiness(readiness1);
	}

}

int cl_application::exec_app() {
	cout << "Object tree\n";
	this->print_tree();
	cout << "\nThe tree of objects and their readiness\n";
	this->print_tree_ready();
	return 0;
}