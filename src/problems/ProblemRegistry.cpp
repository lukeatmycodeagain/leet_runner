#include "ProblemRegistry.h"

void ProblemRegistry::registerProblems()
{
    ProblemManager::getInstance().registerProblem("1", []
                                                  { return std::make_unique<Problem1>(); });
}
