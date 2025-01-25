#pragma once

#include <unordered_map>
#include <string>
#include <memory>
#include <functional>
#include "IProblem.h"

class ProblemManager
{
public:
    ProblemManager() = default;
    using ProblemFactory = std::function<std::unique_ptr<IProblem>()>;

    static ProblemManager &getInstance()
    {
        static ProblemManager instance;
        return instance;
    }

    void registerProblem(const std::string &id, ProblemFactory factory);

    void executeProblem(const std::string &id, const std::string &input);

    void verifyProblem(const std::string &id, const std::string &input, const std::string &expectedOutput);

private:
    std::unordered_map<std::string, ProblemFactory> problems;
};
