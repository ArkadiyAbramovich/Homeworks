cmake_minimum_required(VERSION 3.22)
project(chain_of_responsibility)
add_executable(chain_of_responsibility main.cxx fatal_error_handler.cxx error_handler.cxx warning_handler.cxx unknown_handler.cxx log_message.cxx)