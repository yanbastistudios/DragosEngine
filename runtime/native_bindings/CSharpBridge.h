#pragma once

#ifdef _WIN32
  #define DRAGOS_API __declspec(dllexport)
#else
  #define DRAGOS_API
#endif

extern "C" {
    DRAGOS_API void Native_Log(const char* message);
}