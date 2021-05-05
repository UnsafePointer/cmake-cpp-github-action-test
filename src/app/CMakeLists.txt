add_executable(ruby src/main.cpp)
target_compile_features(ruby PRIVATE cxx_std_17)
target_compile_options(ruby PRIVATE -Werror -Wall -Wextra)

target_link_libraries(ruby PRIVATE libruby)
