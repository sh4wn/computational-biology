#include <boost/format.hpp>

#include "../exceptions.h"
#include "base.h"

using namespace compbio;
using std::vector;

Aligner::Aligner(const cost_function_t& cost_func) : cost_function(cost_func)
{
}

const cost_function_t& Aligner::getCostFunction() const
{
    return this->cost_function;
}
