
add_executable(tic_tac_toe main.cpp)

target_include_directories(tic_tac_toe PRIVATE ${CPP_HTTPLIB_INCLUDE_DIRS})
target_link_libraries(tic_tac_toe PRIVATE tic_tac_toe_lib)
target_compile_features(tic_tac_toe PRIVATE cxx_std_17)


