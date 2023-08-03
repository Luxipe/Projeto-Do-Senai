#include <iostream>
#include <iostream>
#include <string>
#include <vector>

struct Item {
    std::string name;
    int quantity;
    double price;

    // Construtor
    Item(std::string name, int quantity, double price) : name(name), quantity(quantity), price(price) {}
};

class ShoppingList {
private:
    std::vector<Item> items;

public:
    // Adicionar item à lista
    void addItem(const Item& item) {
        items.push_back(item);
    }

    // Remover item da lista
    void removeItem(int index) {
        if (index >= 0 && index < items.size()) {
            items.erase(items.begin() + index);
        } else {
            std::cout << "Índice inválido." << std::endl;
        }
    }

    // Exibir lista de compras
    void displayList() {
        if (items.empty()) {
            std::cout << "Lista de compras vazia." << std::endl;
            return;
        }

        std::cout << "Lista de compras:" << std::endl;
        for (size_t i = 0; i < items.size(); ++i) {
            std::cout << i + 1 << ". " << items[i].name << " - Quantidade: " << items[i].quantity
                      << " - Preço unitário: " << items[i].price << std::endl;
        }
    }
};

int main() {
    ShoppingList shoppingList;

    // Exemplo de adicionar itens à lista
    shoppingList.addItem(Item("Maçã", 5, 2.5));
    shoppingList.addItem(Item("Arroz", 2, 8.0));
    shoppingList.addItem(Item("Feijão", 3, 4.0));

    // Exibir lista de compras
    shoppingList.displayList();

    // Remover item pelo índice (exemplo: remover o segundo item)
    shoppingList.removeItem(1);

    // Exibir lista atualizada após remover o item
    shoppingList.displayList();

    return 0;
}