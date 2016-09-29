/** \file JunkStruct.h
 * \author Tomasz Jakubczyk
 * \brief plik zawierający definicje struktury JunkStruct
 *
 */

#pragma once

extern "C"
{
    /** \brief struktura JunkStruct
     */
    struct JunkStruct
    {
        long int position;/**< pozycja JUNK */
        long int size;/**< rozmiar JUNK */
    };
}
