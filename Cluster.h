#ifndef CLUSTER_H
#define CLUSTER_H

#include <vector>
using namespace std;

struct TAtividade{
	int ti, tf;
};

class Cluster {
private:
	vector<TAtividade> a;

public:
	Cluster();        
        
        void push(int n1, int n2);
        
	virtual ~Cluster();
};


#endif /* CLUSTER_H */

