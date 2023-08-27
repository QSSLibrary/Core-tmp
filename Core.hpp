//-- Check License Macro
# ifndef __QSS_LICENSE
    # include "License.hpp"
    //-- Check License Read Status
    # if (__QSSL_LICENSE_AGREEMENT == false)
        # error "First You Must Read License in Path 'Core/License.hpp' and Make Related Macro State to True"
    # else 
        /**
         * @brief Compile Time of Your Project
         */
        # define COMPILE_TIME __TIME__
        /**
         * @brief Compile Date of Your Project
         */
        # define COMPILE_DATE __DATE__
        //-- Check QSSL Core Macro
        # ifndef __QSSL_CORE
            /**
             * @attention Read Before Downloading, Copying, Installing or Using.
             * @attention by Downloading, Copying, Installing or Using this Library, You Agree to the License !
             * @brief QSS Open Source Astronomy and Astrophysics Library's Core
             * @note Enjoy Using this Library
             * @date 2023-08-27
             */
            # define __QSSL_CORE
            //-- Check C++ Version
            # if  __cplusplus < 201103L
                # error "This Library Can Only be Compiled on C++11 Above"
            # endif // Check C++ Version
            //-- Check Operating System
            # if defined(unix) || defined(__unix) || defined(__unix__)              \
            || defined(__linux) || defined(__linux) || defined(__gnu_linux__)       \
            || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
                /**
                 * @brief Project's Operating System is Unix-Based
                 */
                # define PROJECT_OPERATING_SYSTEM 0
                # pragma message \
                "Unix Based Operating System Detected"
            # elif defined(__APPLE__) || defined(__MACH__)
                /**
                 * @brief Project's Operating System is MacOS
                 */
                # define PROJECT_OPERATING_SYSTEM 1
                # pragma message \
                "Mac Operating System Detected"
            # elif defined(_WIN32) || defined(_WIN64)                               \
            || defined(__CYGWIN__) || defined(__WIN32__) || defined(__WINDOWS__)
                /**
                 * @brief Project's Operating System is Windows
                 */
                # define PROJECT_OPERATING_SYSTEM 2
                # pragma message \
                "Windows Operating System Detected"
            # elif defined(__ANDROID__)
                /**
                 * @brief Project's Operating System is Android
                 */
                # define PROJECT_OPERATING_SYSTEM -1
                # pragma message \
                "Android Operating System Detected"
                # error "QSSL Does Not Work with Android NDK for Now"
            # else
                /**
                 * @brief Project's Operating System is Unknown
                 */
                # define PROJECT_OPERATING_SYSTEM -2
                # pragma message \
                "Unknown Operating System Detected, if It Seems Wrong to You Please Open an Issue on Github"
                # error "Invalid Operating System for QSSL"
            # endif // Check Operating System
            //-- Check Compiler
            # if defined(__GNUC__)
                /**
                 * @brief Project's Compiler is GCC (GNU Compiler Collection)
                 */
                # define PROJECT_COMPILER 0
                # pragma message \
                "GCC (GNU Compiler Collection) Compiler Detected"
            # elif defined(__clang__)
                /**
                 * @brief Project's Compiler is Clang (LLVM-Based)
                 */
                # define PROJECT_COMPILER 1
                # pragma message \
                "Clang (LLVM-Based) Compiler Detected"
            # elif defined(__MINGW32__) || defined(__MINGW64__)
                /**
                 * @brief Project's Compiler is Windows MinGW
                 */
                # define PROJECT_COMPILER 2
                # pragma message \
                "Windows MinGW Compiler Detected"
                # error "QSSL Does Not Work with Windows MinGW Compiler Currently"
            # elif defined(_MSC_VER)
                /**
                 * @brief Project's Compiler is Microsoft Visual C++
                 */
                # define PROJECT_COMPILER 3
                # pragma message \
                "Microsoft Visual C++ Compiler Detected"
                # error "QSSL Does Not Work with Microsoft Visual C++ Compiler Currently"
            # else
                /**
                 * @brief Project's Compiler is Unknown
                 */
                # define PROJECT_COMPILER -2
                # pragma message \
                "Unknown Compiler Detected, if It Seems Wrong to You Please Open an Issue on Github"
                # error "Invalid Operating System for QSSL"
            # endif
        # endif // __QSSL_CORE
    # endif // __QSSL_LICENSE_AGREEMENT
# endif // __QSSL_LICENSE
