#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int main(int argc, char* argv[]) {

    auto result = Catch::Session().run(argc, argv);

    return (result < 0xff ? result : 0xff);
}

