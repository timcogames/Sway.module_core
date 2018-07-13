#include <boost/test/unit_test.hpp>
#include <sway/core.h>

using namespace sway;

template<typename T, typename U>
struct DecayEquiv : std::is_same<core::detail::unwrap_t<T>, U>::type {
	// Empty
};

BOOST_AUTO_TEST_SUITE(RawType_TestSuite_Unwrap)

BOOST_AUTO_TEST_CASE(RawType_TestCase) {
	BOOST_CHECK((DecayEquiv<int, int>::value));
}

BOOST_AUTO_TEST_SUITE_END()
