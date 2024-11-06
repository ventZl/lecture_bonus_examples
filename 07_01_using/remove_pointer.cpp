#include <catch2/catch_test_macros.hpp>
#include "remove_pointer_impl.h"
#include <type_traits>

/* This set of tests checks if remove_pointer template provides a type that has pointer removed, if it is present */
TEST_CASE("remove pointer from pointer type", "[templates]")
{
    char * buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, char> == true);

}

TEST_CASE("remove pointer from const pointer type", "[templates]")
{
    const char * buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, const char> == true);

}

TEST_CASE("remove pointer from const volatile pointer type", "[templates]")
{
    const volatile char * buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, const volatile char> == true);

}

TEST_CASE("remove pointer from volatile pointer type", "[templates]")
{
    volatile char * buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, volatile char> == true);

}

TEST_CASE("remove pointer from non-pointer type", "[templates]")
{
    char buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, char> == true);

}

TEST_CASE("remove pointer from non-pointer volatile type", "[templates]")
{
    volatile char buffer;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, volatile char> == true);

}

TEST_CASE("remove pointer from non-pointer const type", "[templates]")
{
    const char buffer = 0;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, const char> == true);

}

TEST_CASE("remove pointer from non-pointer const volatile type", "[templates]")
{
    const volatile char buffer = 0;
    using ptrless_T = remove_pointer<typeof(buffer)>::type;
    REQUIRE(std::is_same_v<ptrless_T, const volatile char> == true);

}
