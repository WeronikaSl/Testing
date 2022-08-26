#include "pch.h"
#include <queue>

//1. Sprawdzić czy nowo utworzona kolejka jest pusta
//2. Sprawdzic czy jak dodamy kilka elementów (push) to size sie zmieni na prawidlowa wartosc
//3. Sprawdzic czy jak wywołamy pop na kolejce z elemntami to zmniejszy sie jej rozmiar
//4. Sprawdzic czy jak za pomoca push włożyły elementy o zadanych wartosciach to po wywołaniu pop odpowiednio będzie ustawiony front
//5. Sprawdzic czy jak wrzucimy 5 elementów i potem 5 razy wywołamy pop to kolejka bedzie pusta. (polecam uzyc petli for)
//5*. Swap (samego swapa czy się zamienia)

//1
TEST(QueueTest, TestNewQueueIsEmpty) 
{
	std::queue<int> testedQueue;
	EXPECT_TRUE(testedQueue.empty());
}

//2
TEST(SizeTest, IfSizeMethodWorks)
{
	std::queue<int> testedQueue;
	testedQueue.push(1);
	testedQueue.push(4);
	testedQueue.push(7);
	testedQueue.push(8);

	EXPECT_EQ(4, testedQueue.size());
}

//3
TEST(SizeTest, IfPopWorks)
{
	std::queue<int> testedQueue;
	testedQueue.push(1);
	testedQueue.push(4);
	EXPECT_EQ(2, testedQueue.size());
	testedQueue.pop();
	EXPECT_EQ(1, testedQueue.size());
}

//4
TEST(FrontTest, IfFrontWorks)
{
	std::queue<int> testedQueue;
	testedQueue.push(1);
	testedQueue.push(4);
	testedQueue.push(7);

	EXPECT_EQ(1, testedQueue.front());
	testedQueue.pop();
	EXPECT_EQ(4, testedQueue.front());

}

//5
TEST(PopTest, IfPopWorks)
{
	std::queue<int> testedQueue;
	for (int i = 0; i < 5; ++i)
	{
		testedQueue.push(i);
	}
	for (int i = 0; i < 5; ++i)
	{
		testedQueue.pop();
	}

	EXPECT_TRUE(testedQueue.empty());

}

//5*
TEST(SwapTest, IfSwapTest)
{
	std::queue<int> testedQueue1;
	testedQueue1.push(1);
	testedQueue1.push(2);
	std::queue<int> testedQueue2;
	testedQueue2.push(3);
	testedQueue2.push(4);

	std::swap(testedQueue1, testedQueue2);

	EXPECT_EQ(3, testedQueue1.front());
	EXPECT_EQ(4, testedQueue1.back());
	EXPECT_EQ(1, testedQueue2.front());
	EXPECT_EQ(2, testedQueue2.back());

}