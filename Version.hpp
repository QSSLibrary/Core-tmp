# ifndef __QSSL_VERSION
    /**
     * @brief Release Name of QSSL, Current Release : Nove
     * @note Nova of QSSL, Beginning of Illumination to the Computer Age Where Digital and Celestial Realms Converge
     * @note QSSL-Nova is the First Release of QSS Library that Contains these Contents :
     * @note 1. Celestial Objects
     * @note 2. Astronomical Conversions
     * @note 3. Large Numbers Operations
     * @note 4. Celestial Trigonometry
     * @note 5. Coordinate Systems
     */
    # define __QSSL_RELEASE_NAME "QSSL-Nova"
    /**
     * @brief Major Version of QSSL Library
     * @note Major Version Represents Significant Update of 
     * Library, It Usually Introduces Major Features, 
     * Changes or Improvements.
     */
    # define __QSSL_MAJOR_VERSION 0
    /**
     * @brief Minor Version of QSSL Library
     * @note Minor Version Represents Less Extensive Updates
     * Compared to Major Version But Still Brings Notable
     * Additions, Optimizations and Bug Fixes 
     */
    # define __QSSL_MINOR_VERSION 1
    /**
     * @brief Patch Version of QSSL Library
     * @note Patch Version Represents Fixed Issues or
     * Smaller Updates of Library
     */
    # define __QSSL_PATCH_VERSION 0
    /**
     * @brief Helper for Converting into String
     */
    # define __QSSL_CONV_TO_STRING_HELPER(_INPUT) #_INPUT
    /**
     * @brief Method to Convert into String
     */
    # define __QSSL_CONV_TO_STRING(_INPUT) \
        __QSSL_CONV_TO_STRING_HELPER(_INPUT)
    /**
     * @brief QSSL String Version
    */
    # define __QSSL_VERSION_STR                         \
        __QSSL_CONV_TO_STRING(__QSSL_MAJOR_VERSION) "." \
        __QSSL_CONV_TO_STRING(__QSSL_MINOR_VERSION) "." \
        __QSSL_CONV_TO_STRING(__QSSL_PATCH_VERSION)
    /**
     * @brief QSSL Concatenated Version
     */
    # define __QSSL_VERSION_CONCAT   \
        __QSSL_MAJOR_VERSION ## . ## \
        __QSSL_MINOR_VERSION ## . ## \
        __QSSL_PATCH_VERSION
    /**
     * @file Version.hpp
     * @author Ramtin Kosari
     * @brief QSSL Open Source Astronomy and Astrophysics 
     * Library's Version
     * @date 2023-07-05
     */
    # define __QSSL_VERSION __QSSL_VERSION_STR
    /**
     * @brief Enummeration of String Version Usage Indexes
     */
    enum Version {
        /**
         * @brief Major Version Index
         */
        _VER_MAJOR = 0,
        /**
         * @brief Minor Version Index
         */
        _VER_MINOR = 2,
        /**
         * @brief Patch Version Index
         */
        _VER_PATCH = 4
    };
# endif // QSSL_VERSION

