cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 

set(PROJECT_NAME test)				 		 
project("${PROJECT_NAME}")			 	


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


include_directories("inc/")			 # указываем, где искать файлы заголовков

add_executable("${PROJECT_NAME}" main.cpp
								 inc/T.hpp
								 inc/S.hpp
								 src/T.cpp
								 src/S.cpp)

								