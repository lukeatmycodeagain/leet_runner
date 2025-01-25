#include <iostream>
#include "ProblemManager.h"
#include "ProblemRegistry.h"

void usage()
{
    std::cout << "Usage:\n"
             << "./leet_runner execute <problem_id> <input>\n"
             << "./leet_runner verify <problem_id> <input> <expected_output>\n";
}

int main(int argc, char *argv[])
{
    ProblemRegistry::registerProblems();

    ProblemManager manager;

    if (argc > 1)
    {
        std::string command = argv[1];
        if (command == "execute" && argc > 2)
        {
            manager.executeProblem(argv[2], argv[3]);
        }
        else if (command == "verify" && argc > 4)
        {
            manager.verifyProblem(argv[2], argv[3], argv[4]);
        }
        else
        {
            usage();
        }
    }
    else
    {
        usage();
    }
    return 0;
}