#ifndef SIGMOID_H
#define SIGMOID_H

#include "../layer.h"

class Sigmoid: public Layer {
public:
	void forward(const Matrix& bottom);
	void backward(const Matrix& bottom, const Matrix& grad_top);
};

#endif /* SIGMOID_H */