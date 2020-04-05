#pragma once

#include <string>

//Constants
const int NUM_SUITS = 4;
const int NUM_VALUES = 13;
const int NUM_CARDS = NUM_SUITS * NUM_VALUES;

const std::string SUIT_STRINGS[NUM_SUITS] = { "Spades", "Hearts", "Diamonds", "Clubs" };
const std::string VALUE_STRINGS[NUM_VALUES] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };