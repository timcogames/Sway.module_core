#ifndef SWAY_CORE_MISC_FORMAT_H
#define SWAY_CORE_MISC_FORMAT_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

#include <string>
#include <vector>
#include <cstdarg> // va_start, va_end, std::va_list
#include <stdio.h> // vsnprintf

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(core)
NAMESPACE_BEGIN(misc)

inline std::string format(lpcstr_t const fmt, ...) {
	auto temp = std::vector<s8_t>();
	auto size = std::size_t(100);
	std::va_list args;
	while (temp.size() <= size) {
		temp.resize(size + 1);
		va_start(args, fmt);
		int nsize = vsnprintf(temp.data(), temp.size(), fmt, args);
		va_end(args);

		if (nsize < 0)
			return std::string();

		size = static_cast<std::size_t>(nsize);
	}

	return std::string(temp.data(), size);
}

NAMESPACE_END(misc)
NAMESPACE_END(core)
NAMESPACE_END(sway)

#endif // SWAY_CORE_MISC_FORMAT_H
