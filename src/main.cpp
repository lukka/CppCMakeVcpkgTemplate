// main.cpp
#include <sqlite3.h>
#include <cstdio>
#include <fmt/core.h>

// main function!
int main()
{
    fmt::print("Hello, world!\n");
    printf("%s\n", sqlite3_libversion());
    return 0;
}