#include "ProblemManager.h"

void ProblemManager::registerProblem(const std::string &id, ProblemFactory factory)
{
    problems[id] = factory;
}

void ProblemManager::executeProblem(const std::string &id, const std::string &input)
{
    if (problems.find(id) != problems.end())
    {
        problems[id]()->execute(input);
    }
    else
    {
        std::cerr << "Problem with ID '" << id << "' not found.\n";
    }
}

void ProblemManager::verifyProblem(const std::string &id, const std::string &input, const std::string &expectedOutput)
{
    if (problems.find(id) != problems.end())
    {
        if (problems[id]()->verify(input, expectedOutput))
        {
            std::cout << "Verification passed for problem " << id << ".\n";
        }
        else
        {
            std::cout << "Verification failed for problem " << id << ".\n";
        }
    }
    else
    {
        std::cout << "Problem " << id << " not found.\n";
    }
}