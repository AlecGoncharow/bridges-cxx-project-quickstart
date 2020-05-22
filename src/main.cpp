/**
 */

#include "Bridges.h"
#include "Array1D.h"
#include "DataSource.h"

using namespace bridges;

int main () {

	auto bridges = new Bridges(1, "YOUR_USER_NAME", "YOUR_API_KEY");

	Array1D<int> a (10);

	bridges->setDataStructure(a);
	bridges->visualize();
}
