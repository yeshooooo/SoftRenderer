
project(tgaimage
        VERSION 0.0.1
        LANGUAGES C CXX
        DESCRIPTION "Add cmake support for tagimage"
        HOMEPAGE_URL ""

)

set(SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/tgaimage.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/tgaimage.cpp"
)
add_library(tgaimage STATIC ${SOURCE_FILES})
target_include_directories(tgaimage PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})