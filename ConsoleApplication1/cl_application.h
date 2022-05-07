#ifndef INC_4_1_1_CL_APPLICATION_H
#define INC_4_1_1_CL_APPLICATION_H
#include "cl_base.h"
#include "child2.h"
#include "child3.h"
#include "child4.h"
#include "child5.h"
#include "child6.h"

#include <string>
using namespace std;
class cl_application : public cl_base
{
	using cl_base::cl_base;
public:
	void bild_tree_objects();	// метода построения дерева
	int exec_app();				// метод, возвращающий целое число
};

#endif