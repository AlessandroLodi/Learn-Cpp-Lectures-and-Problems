


#include <array>
#include <iostream>
#include <random>
#include <string>
#include <algorithm>
#include <ctime>

enum class Rank
{
	rank_2,
	rank_3,
	rank_4,
	rank_5,
	rank_6,
	rank_7,
	rank_8,
	rank_9,
	rank_10,
	rank_jack,
	rank_queen,
	rank_king,
	rank_ace,

	max_rank

};

enum class Suit
{
	diamond,
	club,
	spade,
	heart,

	max_suit

};

struct Card
{
	Rank rank;
	Suit suit;
};


void printCard(const Card& card)
{
	switch (card.rank)
	{
	case Rank::rank_2:
		std::cout << "2" ;
		break;			 
	case Rank::rank_3:	 
		std::cout << "3" ;
		break;			 
	case Rank::rank_4:	 
		std::cout << "4" ;
		break;			 
	case Rank::rank_5:	 
		std::cout << "5" ;
		break;			 
	case Rank::rank_6:	 
		std::cout << "6" ;
		break;			 
	case Rank::rank_7:	 
		std::cout << "7" ;
		break;			 
	case Rank::rank_8:	 
		std::cout << "8" ;
		break;			 
	case Rank::rank_9:	 
		std::cout << "9" ;
		break;			 
	case Rank::rank_10:	 
		std::cout << "10";
		break;			 
	case Rank::rank_jack:
		std::cout << "J" ;
		break;			 
	case Rank::rank_queen:
		std::cout << "Q" ;
		break;			 
	case Rank::rank_king:
		std::cout << "K" ;
		break;			 
	case Rank::rank_ace: 
		std::cout << "A" ;
		break;
	default:
		std::cout << "?";
		break;
	}
	switch (card.suit)
	{
	case Suit::club:
		std::cout << "C";
		break;
	case Suit::diamond:
		std::cout << "D";
		break;
	case Suit::spade:
		std::cout << "S";
		break;
	case Suit::heart:
		std::cout << "H";
		break;
	default:
		std::cout << "?";
		break;
	}
}

using deck_type = std::array<Card, 52>;
using index_type = deck_type::size_type;

deck_type createDeck(const Card &card)
{
	deck_type deck{};
	index_type idx{};

	auto rank_range{ static_cast<int>(Rank::max_rank) };
	auto suit_range{ static_cast<int>(Suit::max_suit) };
	
	for (int i{ 0 }; i < suit_range; ++i)
	{
		for (int j{ 0 }; j < rank_range; ++j)
		{
			deck[idx].rank = static_cast<Rank>(j);
			deck[idx].suit = static_cast<Suit>(i);
			++idx;
		}
	}
	
	/*
	deck[0].suit = static_cast<Suit>(card.suit);
	deck[0].rank = static_cast<Rank>(card.rank);
	*/

	std::cout << "rank range: " << rank_range << " and suit range: " << suit_range << std::endl;

	return deck;
	

}


void printDeck(const deck_type& deck)
{
	for (const auto &card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}
}

void shuffleDeck(deck_type& deck)
{
	static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(const Card& card)
{

	if (card.rank <= Rank::rank_10)
		return (static_cast<int>(card.rank) + 2);
	switch (card.rank)
	{
	case Rank::rank_jack:
	case Rank::rank_queen:
	case Rank::rank_king:
		return 10;
	case Rank::rank_ace:
		return 11;
	default:
		return 0;
	}
}


int main()
{
	
	return 0;
}