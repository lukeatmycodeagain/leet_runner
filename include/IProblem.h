#pragma once

#include <string>
#include <iostream>

class IProblem
{
public:
    virtual ~IProblem() = default;
    
    virtual void execute(const std::string &input)
    {
        std::cout << name() << ": " << std::endl;
        std::cout << "  ";
        std::cout << info() << std::endl;
        std::cout << "  ";
        std::cout << "  ";
        std::cout << "Input: " << input;
        std::cout << "  ";
        std::cout << "  ";
        std::string output = solve(input);
        std::cout << "Output: " << output;
    }

    virtual bool verify(const std::string &input, const std::string &expectedOutput)
    {
        std::string output = solve(input);
        return output == expectedOutput;
    }
    
    virtual std::string info() = 0; // all problems must describe the problem
    virtual std::string name() = 0; // all problems must have a short name
private:
    virtual std::string solve(const std::string &input) = 0;
};