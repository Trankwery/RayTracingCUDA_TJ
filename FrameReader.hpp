/** \file FrameReader.hpp
 * \author Tomasz Jakubczyk
 * \brief Plik nag�owkowy klasy FrameReader
 *
 */

#pragma once

#include "CyclicBuffer.hpp"
#include <queue>

/** \brief Klasa maj�ca za zadanie czyta� film
 * z bufora cyklicznego i zwraca� jego klatki klatki
 */
class FrameReader : private queue
{
public:
    /** \brief Default constructor
     * \param CyclicBuffer* bufor cykliczny z kt�rego b�dziemy pobiera� film
     */
    FrameReader(CyclicBuffer*);
    /** Default destructor */
    ~FrameReader();
    /** \brief zwraca pierwszy element i usuwa go z kolejki
     * \return char* adres zwr�conych danych
     */
    char* pop();
    /** \brief zwraca obecn� liczb� klatek gotowych do przetworzenia
     * \return int liczba czekaj�cych element�w
     */
    int size();
    /** \brief wczytuje klatki z bufora cyklicznego
     * \return void
     */
    void readFrames();
private:
};
