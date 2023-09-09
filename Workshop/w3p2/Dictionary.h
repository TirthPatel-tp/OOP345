#ifndef SDDS_DICTIONARY_H
#define SDDS_DICTIONARY_H

#include <iostream>
#include <iomanip>
#include <string>

namespace sdds {
	class Dictionary
	{
		std::string m_term{};
		std::string m_definition{};
	public:
		const std::string& getTerm() const { return m_term; }
		const std::string& getDefinition() const { return m_definition; }
		Dictionary(const std::string& term, const std::string& definition) : m_term{ term }, m_definition{ definition } {}

		// TODO: Code the missing prototype functions and operators
		//       that the class needs in order to work with the Queue class.
		//       Implement them in the Dictionary.cpp file.

		Dictionary();
		void set(const std::string& term, const std::string& def);
		std::ostream& display(std::ostream& ostr = std::cout) const;
		bool operator==(const Dictionary& dict) const;
	};
	std::ostream& operator<<(std::ostream& ostr, const Dictionary& dict);
}

#endif 