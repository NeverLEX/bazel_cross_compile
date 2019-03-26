#pragma once

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#ifndef EXPORT
#define EXPORT __attribute__((visibility("default")))
#endif  // EXPORT

EXPORT int min(int a, int b);
EXPORT int max(int a, int b);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
