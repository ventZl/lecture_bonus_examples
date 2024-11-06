#include <catch2/catch_test_macros.hpp>
#include "template_decl.h"


TEST_CASE("explicitly instantiated template", "[templates]")
{
    REQUIRE(fibonacci(0) == 0);
    REQUIRE(fibonacci(1) == 1);
    REQUIRE(fibonacci(2) == 1);
    REQUIRE(fibonacci(3) == 2);
    REQUIRE(fibonacci(4) == 3);
    REQUIRE(fibonacci(5) == 5);
}
