#pragma once

#if defined(_WIN32)
// Not doing this breaks std::max
#define NOMINMAX
#include <Windows.h>
#define PATH_MAX MAX_PATH

typedef int mode_t;
#define ALWAYS_INLINE __forceinline
bool isatty(int a) {
	return true;
}
// glibc uses 'mtim' ms uses 'mtime'
#define st_mtim st_mtime
#define st_mtim st_mtime
#define st_mtim st_mtime

#else

#define ALWAYS_INLINE // TODO
#endif

