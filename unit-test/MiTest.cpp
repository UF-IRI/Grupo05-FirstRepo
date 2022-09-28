#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

TEST(funciones, numeroMenor)
{
	ASSERT_THAT(menor(7, 3), 3);
	ASSERT_THAT(menor(7, 4), 4);
	ASSERT_TRUE(menor(7, 3), 7); //probamos assert_false, pero lo rebota
	ASSERT_THAT(menor(5, 3), 3);
}

TEST(funciones, numeroMultiplicacion)
{
	ASSERT_THAT(multiplicacion(7, 3), 21);
	ASSERT_TRUE(multiplicacion(7, 3), 21);
	ASSERT_TRUE(multiplicacion(7, 3), 21);
	ASSERT_TRUE(multiplicacion(7, 3), 21);
	
}