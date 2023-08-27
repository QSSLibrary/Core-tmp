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
        # endif // __QSSL_CORE
    # endif // __QSSL_LICENSE_AGREEMENT
# endif // __QSSL_LICENSE
