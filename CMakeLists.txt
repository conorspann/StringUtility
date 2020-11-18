cmake_minimum_required(VERSION 3.1.0)

project(StringUtility)

add_library(
	stringUtility
	STATIC
	include/string_utility.h
	src/string_utility.cpp
)
