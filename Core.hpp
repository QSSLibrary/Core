# ifndef QSSL_CORE
    //-- Check QSSL License
    # ifndef QSSL_LICENSE
        # include "License.hpp"
        # if (QSSL_LICENSE_AGREEMENT == false)
            # define COMPILE_TIME NULL
            # define COMPILE_DATE NULL
            # error First You Must Read License in Path "Core/License.hpp" and Make Related Flag to True
        # else 
            # define INCLUDE_TIME __TIME__
            # define INCLUDE_DATE __DATE__
        # endif // QSSL_LICENSE_AGREEMENT
    # endif // QSSL_LICENSE
    /**
     * @file Core.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSS Open Source Astronomy and Astrophysics Library's Core
     * @date 2024-01-06
     */
    # define QSSL_CORE
# endif // QSSL_CORE