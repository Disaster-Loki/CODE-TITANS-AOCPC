#include <iostream>
#include <random>

using namespace std;

bool is_power_two(int x)
{
    if (x == 1)
        return (false);
    return (x && !(x & (x - 1)));
}

void    ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

}

int main()
{
    //int num, count = 0; cin >> num;
    //cout << (is_power_two(num) ? "YES" : "NO") << endl;
    // Contar o numero de 1s em um numero
    //while (num > 0)
    //{
    //    count += num & 1;
    //    num = num >> 1;
    //}
    //cout << count << endl;
    // Swap personalizado
    //int a, b; cin >> a >> b;
    //ft_swap(&a, &b);
    //cout << a << endl << b << endl;
    // Gerar numeros aleatorios inteiros
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    for(int i = 0; i < 10; i++)
        cout << dis(gen) << " ";
    cout << endl;
    return (0);
}