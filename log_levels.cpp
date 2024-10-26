#include <string>

namespace log_line {

    std::string message(std::string line) {
        std::size_t end_of_bracket = line.find("]: ");
        return line.substr(end_of_bracket + 3); 
    }

    std::string log_level(std::string line) {
        std::size_t start_of_bracket = line.find('[') + 1;
        std::size_t end_of_bracket = line.find(']');
        return line.substr(start_of_bracket, end_of_bracket - start_of_bracket);
    }

    std::string reformat(std::string line) {
        return message(line) + " (" + log_level(line) + ")";
    }

}
