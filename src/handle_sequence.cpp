
#include <iostream> 

#include "handle_sequence.h"

void filterSequence( const std::vector<Point>& input_sequence, std::vector<Point>& output_sequence, const int filter_index )
{
    if( input_sequence.empty() )
    {
        return;
    }

    if( !output_sequence.empty() )
    {
        output_sequence.clear();
    }


    output_sequence.push_back(input_sequence[0]);

    int index_subsequence{ 1 };

    for(int index = 1; index < input_sequence.size(); ++index)
    {
        if( input_sequence[index].y == input_sequence[index - 1].y ) 
        {
            ++index_subsequence;
            if( index == input_sequence.size() - 1 || input_sequence[index + 1].y != input_sequence[index].y )
            {
                /* the last element of subsequence */
                output_sequence.push_back(input_sequence[index]);
            }
            else if( index_subsequence % filter_index == 0 )
            { 
                output_sequence.push_back(input_sequence[index]);
            }
        } 
        else
        {
            output_sequence.push_back(input_sequence[index]);
            index_subsequence = 1;
        }
    }
}

void PrintSequence( const std::vector<Point>& sequence )
{
    for (const auto& point : sequence) 
    {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
}