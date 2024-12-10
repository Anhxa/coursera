/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief this file has all function declarations from stats.c
 *
 * @author Aneesha Gupta
 * @date 10/12/2024
 *
 */
#ifndef STATS_H
#define STATS_H

#define SIZE 40

/**
 * @brief Prints the statistics of an array.
 * 
 * This function computes and prints the minimum, maximum, mean, 
 * and median of a given array.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 */
void print_statistics(unsigned char array[], unsigned int length);

/**
 * @brief Prints the elements of an array.
 * 
 * This function iterates through the array and prints each element
 * separated by a space.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 */
void print_array(unsigned char array[], unsigned int length);

/**
 * @brief Finds the median of an array.
 * 
 * This function assumes the array is already sorted in descending order
 * and calculates the median based on its length.
 * 
 * @param array The sorted array of unsigned char data.
 * @param length The length of the array.
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char array[], unsigned int length);

/**
 * @brief Finds the mean of an array.
 * 
 * This function calculates the mean value by summing all the elements
 * and dividing by the length of the array.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 * @return The mean value of the array.
 */
unsigned char find_mean(unsigned char array[], unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 * 
 * This function iterates through the array to find the largest value.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 * @return The maximum value in the array.
 */
unsigned char find_maximum(unsigned char array[], unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 * 
 * This function iterates through the array to find the smallest value.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 * @return The minimum value in the array.
 */
unsigned char find_minimum(unsigned char array[], unsigned int length);

/**
 * @brief Sorts an array in descending order.
 * 
 * This function modifies the given array by arranging its elements
 * from largest to smallest.
 * 
 * @param array The array of unsigned char data.
 * @param length The length of the array.
 */
void sort_array(unsigned char array[], unsigned int length);

#endif // STATS_H
