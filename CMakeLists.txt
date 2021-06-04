# minimum cmake versin. to chack type $cmake --version 
cmake_minimum_required(VERSION 3.12)

# set the project name
project(Drunkest_Dungeon)
# dopisanie wiadomości
message("compile ${CMAKE_PROJECT_NAME} project")
# dodaj folder do kompilacji
add_subdirectory(src)