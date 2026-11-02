#include <stdio.h>
#include "utils.h"

void reverse(int* nums, unsigned int size) {
	Stack *s = new Stack();
	initStack(s);
	for (unsigned int i = 0; i < size; i++) {
		int num = &(nums + i);
		push(s, num);
	}
	for (unsigned int i = 0; i < size, i++) {
		*nums+i = pop(s)
	}
} 

int* reverse10() {
	int n = 0;
	int* nums[10]; = {}
	std::cout << "enter 10 natural numbers: "
	for (int i = 0; i < 0; i++) {
		std::cin >> nums[i];
	}
	reverse(nums, 10);
	return nums;
}