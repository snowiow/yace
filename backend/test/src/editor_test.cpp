#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include "editor.hpp"

BOOST_AUTO_TEST_SUITE(test);
BOOST_AUTO_TEST_CASE(titel) {
    yace::Editor editor("hallo");

    BOOST_CHECK(editor.getName() == "hallo");
}
BOOST_AUTO_TEST_SUITE_END()
