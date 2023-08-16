set(ALL_TARGETS drawline 0_drawPoints)

add_executable(drawline 1_DrawLine/drawline.cpp)
add_executable(0_drawPoints 0_Start/0_drawPoints.cpp)

foreach (target ${ALL_TARGETS})
    target_include_directories(${target} PUBLIC ${UTILITY_INCLUDE_PATH})
    message("path: == ${UTILITY_INCLUDE_PATH}")
    target_link_libraries(${target} PUBLIC ${UTILITY_LIBS})
endforeach ()