#include <stdio.h>
enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main()

{
    enum week today;
    today=wednesday;
    printf("%d day",today+1);
    return 0;
}
