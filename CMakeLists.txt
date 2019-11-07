cmake_minimum_required (VERSION 3.9)
project (compile_time_util)      
	  
add_executable(ex_code_inc_cnt "")

target_include_directories(ex_code_inc_cnt PUBLIC include/compile_time_util/)

target_sources(ex_code_inc_cnt 
	PRIVATE
		include/compile_time_util/compile_time_util.h
		include/compile_time_util/code_inc_cnt.h)
			


add_subdirectory(examples)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ex_code_inc_cnt)	

install(TARGETS ex_code_inc_cnt DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/install)



                                  
