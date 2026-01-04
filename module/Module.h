#pragma once
#include <string>
#include <utility>

class Module {
protected:
    std::string name;

public:
    bool status = false;
    int minCPS = 10;
    int maxCPS = 15;
    int toggleKey = VK_F6;

    explicit Module(std::string n)
        : name(std::move(n)) {}

    virtual ~Module() = default;

    [[nodiscard]] bool getStatus() const {
        return status;
    }

    void setStatus(bool v) {
        status = v;
    }
};
