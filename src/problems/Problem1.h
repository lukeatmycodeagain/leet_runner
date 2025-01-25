#pragma once

#include "IProblem.h"

class Problem1 : public IProblem
{
public:
    std::string info() override;
    std::string name() override;

private:
    std::string solve(const std::string &input) override;
};