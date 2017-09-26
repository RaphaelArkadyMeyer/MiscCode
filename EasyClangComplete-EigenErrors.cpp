#include <iostream>
#include "Eigen/Dense"

void foo(const Eigen::Vector3f vec){
	// "called object type 'Eigen::Vector3f' (aka 'int') is not a function or function pointer"
	float x = vec(0) + vec(1) + vec(2);
}

int main(){
	// "excess elements in scalar initializer"
	const Eigen::Vector3f vec(1, 1, 1);
}
