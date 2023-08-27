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
            //-- Check Architecture (Thanks to FreakAnon from Stack Overflow)
            # if defined(__x86_64__) || defined(_M_X64)
                /**
                 * @brief x86 64 Bit Architecture Detected
                 */
                # define ARCHITECTURE 0
                # pragma message \
                "x86 64 Bit Architecture Detected"
            # if defined(i386) || defined(__i386__) || defined(__i386) || defined(_M_IX86)
            /**
                 * @brief x86 64 Bit Architecture Detected
                 */
                # define ARCHITECTURE 1
                # pragma message \
                "x86 32 Bit Architecture Detected"
            # elif defined(__ARM_ARCH_2__)
                /**
                 * @brief ARM2 Architecture Detected
                 */
                # define ARCHITECTURE 2
                # pragma message \
                "ARM2 Architecture Detected"
            # elif defined(__ARM_ARCH_3__) || defined(__ARM_ARCH_3M__)
                /**
                 * @brief ARM3 Architecture Detected
                 */
                # define ARCHITECTURE 3
                # pragma message \
                "ARM3 Architecture Detected"
            # elif defined(__ARM_ARCH_4T__) || defined(__TARGET_ARM_4T)
                /**
                 * @brief ARM4T Architecture Detected
                 */
                # define ARCHITECTURE 4
                # pragma message \
                "ARM4T Architecture Detected"
            # elif defined(__ARM_ARCH_5_) || defined(__ARM_ARCH_5E_)
                /**
                 * @brief ARM5 Architecture Detected
                 */
                # define ARCHITECTURE 5
                # pragma message \
                "ARM5 Architecture Detected"
            # elif defined(__ARM_ARCH_6T2_) || defined(__ARM_ARCH_6T2_)
                /**
                 * @brief ARM6T Architecture Detected
                 */
                # define ARCHITECTURE 6
                # pragma message \
                "ARM6T Architecture Detected"
            # elif defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6ZK__)
                /**
                 * @brief ARM6 Architecture Detected
                 */
                # define ARCHITECTURE -6
                # pragma message \
                "ARM6 Architecture Detected"
            # elif defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)
                # define ARCHITECTURE "ARM7"
            # elif defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)
                # define ARCHITECTURE "ARM7A"
            # elif defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)
                # define ARCHITECTURE "ARM7R"
            # elif defined(__ARM_ARCH_7M__)
                # define ARCHITECTURE "ARM7M"
            # elif defined(__ARM_ARCH_7S__)
                # define ARCHITECTURE "ARM7S"
            # elif defined(__aarch64__) || defined(_M_ARM64)
                # define ARCHITECTURE "ARM64"
            # elif defined(mips) || defined(__mips__) || defined(__mips)
                # define ARCHITECTURE "MIPS"
            # elif defined(__sh__)
                # define ARCHITECTURE "SUPERH"
            # endif // Check Architecture
        # endif // __QSSL_CORE
    # endif // __QSSL_LICENSE_AGREEMENT
# endif // __QSSL_LICENSE
