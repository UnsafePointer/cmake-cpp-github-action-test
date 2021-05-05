add_library(libruby
    src/Emulator.cpp)
target_compile_features(libruby PUBLIC cxx_std_17)
target_compile_options(libruby PRIVATE -Werror -Wall -Wextra)

target_include_directories(libruby PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE src)
