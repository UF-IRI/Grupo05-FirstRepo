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
	ASSERT_FALSE(multiplicacion(7, 3), 22);
	ASSERT_FALSE(multiplicacion(7, 3), 20);
	ASSERT_FALSE(multiplicacion(7, 3), 19);

}