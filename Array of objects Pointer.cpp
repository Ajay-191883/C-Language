#include<iostream>

using namespace std;
class ShopItem
{
private:
    int id;
    float price;
public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void getData() {
        cout << "The Id of this item is " << id << endl;
        cout << "The Price of this item is " << price << endl;
        cout << "********************************************" << endl;
    }

};

int main()
{
    int size = 2;
    int x, i;
    float y;
    ShopItem* item = new ShopItem[size];
    ShopItem* initialItem = item;
    for (i = 0; i < size; i++) {
        cout << "Enter Id & Price of item " << i + 1 << endl;
        cin >> x >> y;
        item->setData(x, y);
        item++;
    }

    for (i = 0; i < size; i++) {
        initialItem->getData();
        initialItem++;
    }

    return 0;
}