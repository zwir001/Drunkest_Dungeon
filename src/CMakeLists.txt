#dodanie zmiennej modul name
set(MODULE_NAME bin)

message("compile ${MODULE_NAME} For run type ./src/bin")

add_subdirectory(Dziekanat)
add_subdirectory(Human)
add_subdirectory(Location)
add_subdirectory(Loot)

# add the executable zbudowanie exeka
# ${zmienna} - wyciągnięcie wartości zmiennej
add_executable(
  ${MODULE_NAME} 
  main.cpp)
# dodaj do libki biblioteki z których korzysta
target_link_libraries(
    ${MODULE_NAME}
  PRIVATE 
    lib::dziekanat
    lib::student
)

# add the binary tree to the search path for include files
target_include_directories(
    ${MODULE_NAME}
  PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}"
)
# sparametryzowanie opcji kompilacji
set (CMAKE_CXX_FLAGS_INIT "-Wall -Wextra -g -std=c++1z")