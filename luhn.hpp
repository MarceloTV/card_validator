#ifndef LUHN
#define LUHN

bool card_validator(std::string credit_card)
{

	int result = 0, array[4][4], count = 0;

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++, count++)
        {
			int z = credit_card.at(count) - '0';
            if (y == 1 || y == 3)
            {
                array[x][y] = 0;
                result += z;
            }
			else
            {
                array[x][y] = z;
            }
        }

        for (int y = 0; y < 4; y++)
        {
            if (y == 0 || y == 2)
            {
                int value = array[x][y] * 2;
                if (value > 9)
                {
                    array[x][y + 1] = value % 10;
                    value /= 10;
                    array[x][y] = value;
                }
                else
                {
                    array[x][y] = value;
                }
            }
        }

        for (int y = 0; y < 4; y++)
        {
            result += array[x][y];
        }
    }

    return result % 10 == 0;
}

#endif
