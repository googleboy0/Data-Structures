#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a[109] = {
        977854, 62272, 141662, 365394, 373169, 575437, 406973, 543913, 692807, 614201, 791921, 242551, 401297, 121213, 641363, 111704, 150458, 266331, 563915, 166720, 648662, 718947, 401129, 834846, 415884, 418267, 711356, 594101, 302090, 716976, 713830, 84135, 634478, 784700, 627929, 3098, 85724, 304337, 979818, 929170, 844938, 591534, 315823, 2721, 768917, 416351, 148430, 17334, 706533, 342028, 867901, 159312, 484999, 984841, 768243, 991066, 781974, 910173, 973502, 132398, 536048, 175261, 499367, 67649, 21089, 447345, 767862, 937447, 499005, 789576, 20818, 10893, 695798, 454549, 420751, 465663, 620469, 825382, 619680, 654949, 959649, 779510, 289077, 237713, 915925, 822507, 701637, 249035, 413979, 123420, 735299, 155662, 79436, 200511, 77224, 897071, 702656, 409042, 776035, 251017, 571863, 535465, 458741, 978194, 770866, 408139, 834519, 893672, 603469};

    int n = 109, m = 36;
    long z=1000000007;

    sort(a, a+109);
    int temp = 0, test = 0;
    int x = 0, y = 0;
    for (int i = 1; i <= n / m; i++)
    {
        if (n % m == 0)
        {
            while (x < m)
            {
                test = test + a[y];
                y++, x++;
            }
            temp = temp + i * test;
            test = 0;
            x = 0;
        }
        else
        {

            if (i == n / m)
            {
                while (x <= m)
                {
                    test = test + a[y];
                    y++, x++;
                }
                x = 0;
                temp = temp + i * test;
                test = 0;
            }
            else
            {
                while (x < m)
                {
                    test = test + a[y];
                    y++, x++;
                }
                x = 0;
            }
            temp = temp + i * test;
            test = 0;
        }
    }
    
    cout << temp%z;
}