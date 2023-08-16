# https://github.com/ssloy/tinyrenderer
cmake_minimum_required(VERSION 3.22)
project(SoftRenderer
        VERSION 0.0.1
        DESCRIPTION "Notes of https://github.com/ssloy/tinyrenderer"
        HOMEPAGE_URL ""
        LANGUAGES C CXX
)
add_subdirectory(utility)
set(CMAKE_CXX_STANDARD 17)


set(UTILITY_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/utility/)
message(${UTILITY_INCLUDE_PATH})
set(UTILITY_LIBS tgaimage)

add_subdirectory(src)