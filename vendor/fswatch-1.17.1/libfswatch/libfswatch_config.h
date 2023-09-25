/* libfswatch/libfswatch_config.h.  Generated from libfswatch_config.h.in by configure.  */
/* libfswatch/libfswatch_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#define HAVE_CFLOCALECOPYCURRENT 1

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#define HAVE_CFPREFERENCESCOPYAPPVALUE 1

/* Define to 1 if you have the <CoreServices/CoreServices.h> header file. */
#define HAVE_CORESERVICES_CORESERVICES_H 1

/* Define to 1 if you have the <cstdlib> header file. */
#define HAVE_CSTDLIB 1

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define if <atomic> is available. */
#define HAVE_CXX_ATOMIC 1

/* Define if <mutex> is available. */
#define HAVE_CXX_MUTEX 1

/* Define if the thread_local storage specified is available. */
#define HAVE_CXX_THREAD_LOCAL 1

/* Define if std::unique_ptr in <memory> is available. */
#define HAVE_CXX_UNIQUE_PTR 1

/* CygWin API present. */
/* #undef HAVE_CYGWIN */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `cygwin_create_path', and to 0
   if you don't. */
/* #undef HAVE_DECL_CYGWIN_CREATE_PATH */

/* Define to 1 if you have the declaration of `FindCloseChangeNotification',
   and to 0 if you don't. */
/* #undef HAVE_DECL_FINDCLOSECHANGENOTIFICATION */

/* Define to 1 if you have the declaration of `FindFirstChangeNotification',
   and to 0 if you don't. */
/* #undef HAVE_DECL_FINDFIRSTCHANGENOTIFICATION */

/* Define to 1 if you have the declaration of `FindNextChangeNotification',
   and to 0 if you don't. */
/* #undef HAVE_DECL_FINDNEXTCHANGENOTIFICATION */

/* Define to 1 if you have the declaration of `inotify_add_watch', and to 0 if
   you don't. */
/* #undef HAVE_DECL_INOTIFY_ADD_WATCH */

/* Define to 1 if you have the declaration of `inotify_init', and to 0 if you
   don't. */
/* #undef HAVE_DECL_INOTIFY_INIT */

/* Define to 1 if you have the declaration of `inotify_rm_watch', and to 0 if
   you don't. */
/* #undef HAVE_DECL_INOTIFY_RM_WATCH */

/* Define to 1 if you have the declaration of `kevent', and to 0 if you don't.
   */
#define HAVE_DECL_KEVENT 1

/* Define to 1 if you have the declaration of `kqueue', and to 0 if you don't.
   */
#define HAVE_DECL_KQUEUE 1

/* Define to 1 if you have the declaration of `port_create', and to 0 if you
   don't. */
/* #undef HAVE_DECL_PORT_CREATE */

/* Define to 1 if you have the declaration of `ReadDirectoryChangesW', and to
   0 if you don't. */
/* #undef HAVE_DECL_READDIRECTORYCHANGESW */

/* Define to 1 if you have the declaration of `WaitForSingleObject', and to 0
   if you don't. */
/* #undef HAVE_DECL_WAITFORSINGLEOBJECT */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if the file events are supported by macOS FSEvents API. */
#define HAVE_FSEVENTS_FILE_EVENTS 1

/* Define if the FSEventStreamSetDispatchQueue function is supported by macOS
   FSEvents API. */
#define HAVE_FSEVENTS_FSEVENTSTREAMSETDISPATCHQUEUE 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `c' library (-lc). */
#define HAVE_LIBC 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* "macOS is at least the specified version" */
#define HAVE_MACOS_GE_10_10 1

/* "macOS is at least the specified version" */
#define HAVE_MACOS_GE_10_5 1

/* "macOS is at least the specified version" */
#define HAVE_MACOS_GE_10_7 1

/* "macOS is at least the specified version" */
#define HAVE_MACOS_GE_10_9 1

/* Define to 1 if you have the `modf' function. */
#define HAVE_MODF 1

/* Define to 1 if you have the <port.h> header file. */
/* #undef HAVE_PORT_H */

/* Realpath present. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `st_mtime' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_MTIME 1

/* Define to 1 if `st_mtimespec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_MTIMESPEC 1

/* Define to 1 if you have the <sys/cygwin.h> header file. */
/* #undef HAVE_SYS_CYGWIN_H */

/* Define to 1 if you have the <sys/event.h> header file. */
#define HAVE_SYS_EVENT_H 1

/* Define to 1 if you have the <sys/inotify.h> header file. */
/* #undef HAVE_SYS_INOTIFY_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <unordered_map> header file. */
#define HAVE_UNORDERED_MAP 1

/* Define to 1 if you have the <unordered_set> header file. */
#define HAVE_UNORDERED_SET 1

/* Windows API present. */
/* #undef HAVE_WINDOWS */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "fswatch"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enrico.m.crisostomo@gmail.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "fswatch"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "fswatch 1.17.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "fswatch"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/emcrisostomo/fswatch"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.17.1"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.17.1"

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */
