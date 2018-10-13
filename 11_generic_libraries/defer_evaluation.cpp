//
// Created by zhaojunhe on 2018/10/9.
//

#include <string>
#include "defer_evaluation.hpp"

struct Node {
    std::string value;
    Cont<Node> next;
};

int main() {
    Node node;
}
