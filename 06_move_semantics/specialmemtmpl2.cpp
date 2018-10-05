//
// Created by zhaojunhe on 2018/10/5.
//

#include <string>
#include <iostream>

class Person {
private:
    std::string name;
public:
    template<typename STR>
    explicit Person(STR &&n):name(std::forward<STR>(n)) {
        std::cout << " TMPL-CONSTR for '" << name << "'\n";
    }

    Person(Person const &p) : name(p.name) {
        std::cout << "COPY-CONSTR Person '" << name << "'\n";
    }

    Person(Person &&p) : name(std::move(p.name)) {
        std::cout << "MOVE-CONSTR Person '" << name << "'\n";
    }
};

int main() {
    std::string s = "sname";
    Person p1(s);
    Person p2("tmp");

//    Person p3(p1); ERROR. Because the member template is a better match.
    Person p4(std::move(p1));
}
