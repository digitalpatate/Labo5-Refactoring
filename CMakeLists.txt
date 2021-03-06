cmake_minimum_required(VERSION 3.13)
project(Labo4)

set(CMAKE_CXX_STANDARD 11)

add_executable(Labo4 main.cpp Customer.cpp Customer.h Movie.cpp Movie.h Rental.h Rental.cpp PriceState.h PriceState.cpp)


include(DownloadProject.cmake)
download_project(PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )


# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
            "${gmock_SOURCE_DIR}/include")
endif()

# Trivial example using gtest and gmock
add_executable(Labo4_test Customer.cpp Customer.h Movie.cpp Movie.h Rental.h CustomerTest.cpp MovieTest.cpp Rental.cpp PriceState.h PriceState.cpp PriceStateTest.cpp RentalTest.cpp)

target_link_libraries(Labo4_test gtest gmock_main)
