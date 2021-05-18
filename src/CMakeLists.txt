set(MODULE_NAME bin)

message("compile ${MODULE_NAME} For run type ./src/bin")

add_subdirectory(Dziekanat)
add_subdirectory(Human)
add_subdirectory(Location)
add_subdirectory(Loot)

# add the executable
add_executable(
  ${MODULE_NAME} 
  main.cpp)

target_link_libraries(
    ${MODULE_NAME}
  PRIVATE 
    lib::dziekanat
    lib::human
    lib::location
    lib::loot
    lib::relic
)

# add the binary tree to the search path for include files
target_include_directories(
    ${MODULE_NAME}
  PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/Dziekanat"
    "${PROJECT_SOURCE_DIR}/Human"
    "${PROJECT_SOURCE_DIR}/Human/Student"
    "${PROJECT_SOURCE_DIR}/Human/Teacher"
    "${PROJECT_SOURCE_DIR}/Location"
    "${PROJECT_SOURCE_DIR}/Loot"
    "${PROJECT_SOURCE_DIR}/Loot/Relic"
    "${PROJECT_SOURCE_DIR}/Loot/Biwo"
)

set (CMAKE_CXX_FLAGS_INIT "-Wall -Wextra -g -std=c++1z")