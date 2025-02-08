#pragma once

#include <vector> 

// * @struct Point
// * @brief Structure to represent a point with coordinates (x, y).
struct Point
{
    int x;
    int y;
};

using Point = struct Point;

/*
 * @brief Function to filter a sequence of points.
 *
 * This function takes an input sequence of points and filters it,
 * adding to the output sequence only unique points and points that are
 * filter_index-th in the sequence.
 *
 * @param input_sequence The input sequence of points.
 * @param output_sequence The output sequence of points, which will be
 * filled with the filtered points.
 * @param filter_index Parameter that determines which points to add to the output
 * sequence.
 */
void filterSequence( const std::vector<Point>& input_sequence, std::vector<Point>& output_sequence, const int filter_index );

/*
 * @brief Function to pint a sequence of points.
 * @param sequence The sequence of points.
*/
void PrintSequence( const std::vector<Point>& sequence );