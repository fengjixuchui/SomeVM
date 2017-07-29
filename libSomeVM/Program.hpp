#pragma once

#include "libSomeVM.hpp"

#include <vector>
#include <iosfwd>

#include "Function.hpp"
#include "Value.hpp"

namespace svm
{
	struct SVM_API Program
	{
		std::vector<Value> constants;
		std::vector<Function> functions;

		// return the amount of bytes read/written
		std::uint64_t load(std::istream& input);
		std::uint64_t write(std::ostream& output) const;
	};
}
