/*
Jose Luis David
21611118
Project A
 */

putInMemory(int segment, int address, char character);

int getLength(char word[]);

void writeLine(int address, char msg[], int color);

int main()
{

    writeLine(0x8000, "                            SISTEMAS OPERATIVOS I                              ", 0x09);
    writeLine(0x80A0, "                      UNIVERSIDAD TECNOLOGICA CENTROAMERICANA                  ", 0x02);
    writeLine(0x8140, "                      21611118 - Jose Luis David Arriaga                       ", 0x03);
    writeLine(0x81E0, "                          MI PRIMER SISTEMA OPERATIVO                          ", 0x04);
    writeLine(0x8280, "-------------------------------------------------------------------------------", 0x05);
    writeLine(0x8320, "******************************** Hola Mundo !! ********************************", 0x06);
    writeLine(0x83C0, "******************************** Hello Word !! ********************************", 0x07);
    writeLine(0x8460, "******************************** Hej verden !! ********************************", 0x08);
    writeLine(0x8500, "******************************** Hej verden !! ********************************", 0x09);
    writeLine(0x85A0, "******************************** Hallo wereld !! ******************************", 0xA);
    writeLine(0x8640, "******************************** Hola Mundo !! ********************************", 0x01);
    writeLine(0x86E0, "******************************** Hello World !! *******************************", 0x02);
    writeLine(0x8780, "******************************** Hola Mon !! **********************************", 0x03);
    writeLine(0x8820, "******************************** Kumusta kalibutan !! *************************", 0x04);
    writeLine(0x88C0, "******************************** Moni mdziko !! *******************************", 0x05);
    writeLine(0x8960, "******************************** Saluton mondo !! *****************************", 0x06);
    writeLine(0x8A00, "******************************** Tere maailm !! *******************************", 0x07);
    writeLine(0x8AA0, "******************************** Kumusta mundo !! *****************************", 0x08);
    writeLine(0x8B40, "******************************** Hei maailma !! *******************************", 0x09);
    writeLine(0x8BE0, "******************************** Salut monde !! *******************************", 0x04);
    writeLine(0x8C80, "******************************** Hallo wrald !! *******************************", 0x05);
    writeLine(0x8D20, "******************************** Ola mundo !! *********************************", 0x06);
    writeLine(0x8DC0, "******************************** Hallo Welt !! ********************************", 0x07);
    writeLine(0x8E60, "******************************** Bonjou mond lan !! ***************************", 0x08);
    writeLine(0x8F00, "                    UNIVERSIDAD TECNOLOGICA CENTROAMERICANA (UNITEC)           ", 0x09);

    return 0;
}

int getLength(char word[])
{
    int pos = 0;
    while (word[pos] != '\0')
        pos++;
    return;
}

void writeLine(int address, char msg[], int color)
{
    int x, length;
    char character;
    length = getLength(msg);
    for (x = 0; x < length; x++)
    {
        character = msg[x];
        putInMemory(0xB000, address, character);
        putInMemory(0xB000, address + 1, color);
        address = address + 2;
    }
}
