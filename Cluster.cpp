#include "Cluster.h"

Cluster::Cluster() {
}

void Cluster::push(int n1, int n2){
    TAtividade atv;
    atv.ti = n1;
    atv.tf = n2;
    
    a.push_back(atv);
}

Cluster::~Cluster() {
}

