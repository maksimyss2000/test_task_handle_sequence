#include "handle_sequence.h"

#include <iostream> 

int main() {
    std::vector<Point> input_sequence = {
        {1, 10}, {2, 11}, {3, 11}, {4, 11}, {5, 11},
        {6, 10}, {7, 11}, {8, 11}, {9, 11}, {10, 11},
        {11, 10}
    };

    std::vector<Point> output_sequence{};

    std::cout << "Original: ";
    PrintSequence(input_sequence);
    std::cout << std::endl;

    int filter_index{ 3 };
    filterSequence(input_sequence, output_sequence, filter_index);

    std::cout << "Result with filter_index = " << filter_index << ": ";
    PrintSequence(output_sequence);
    std::cout << std::endl;

    output_sequence.clear();

    filter_index = 4;
    filterSequence(input_sequence, output_sequence, filter_index);
    
    std::cout << "Result with filter_index = " << filter_index << ": ";
    PrintSequence(output_sequence);
    std::cout << std::endl;

    return 0;
}