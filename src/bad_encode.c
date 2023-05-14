#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"中文字符\n");

    return 0;
}
