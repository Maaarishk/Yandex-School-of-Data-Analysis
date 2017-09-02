#include <iostream>
#include <utility>
#include <vector>

void read_input(std::vector<int>* v) {
    int element;
    while (std::cin >> element) {
        (*v).push_back(element);
        if (element == 0) {
            break;
        }
    }
}

int gcd(const int a, const int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    if (a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(b - a, a);
    }
}

void reverse(std::vector<int>* v) {
    for (int i = 0; i < (*v).size() / 2; ++i) {
        std::swap((*v)[i], (*v)[(*v).size() - 1 - i]);
    }
}

void write_output(std::vector<int>* v) {
    for (int i = 0; i < (*v).size(); ++i) {
        std::cout << (*v)[i];
        if (i + 1 < (*v).size()) {
            std::cout << std::endl;
        }
    }
}

int main() {
    std::vector<int> v;
    read_input(&v);
    reverse(&v);
    write_output(&v);
}
