project(doublebasepalindromes)

set(HEDEAR_FILES DoubleBasePalindromes.h)
set(SOURCE_FILES DoubleBasePalindromes.cpp DoubleBasePalindromes.cpp DoubleBasePalindromes.h main.cpp)

add_library(libdoublebasepalindromes STATIC ${SOURCE_FILES} main.cpp DoubleBasePalindromes.cpp DoubleBasePalindromes.h)
target_include_directories(libdoublebasepalindromes PUBLIC .)

add_executable(doublebasepalindromes ${SOURCE_FILES} main.cpp DoubleBasePalindromes.cpp DoubleBasePalindromes.h)

target_link_libraries(doublebasepalindromes libdoublebasepalindromes)
