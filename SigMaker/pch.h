#pragma once

#define __IDP__                
#define __NT__
#define __EA64__
#define __X64__          

#ifdef __NT__
#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#endif // #ifdef __NT__

#pragma warning( push )  
#pragma warning( disable : 4267 )
#pragma warning( disable : 4244 )
#include <ida.hpp>
#include <expr.hpp>
#include <loader.hpp>
#include <search.hpp> // find_binary
#include <diskio.hpp>
#pragma warning( pop ) 

#ifdef __NT__
#include <Windows.h>

#pragma comment(lib, "ida.lib")
#pragma comment(lib, "pro.lib")
#pragma comment(lib, "Kernel32.lib")
#endif // #ifdef __NT__