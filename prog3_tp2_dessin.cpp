#include "Point2D.h"
#include "Forme2D.h"
#include "Rect2D.h"
#include "Triangle2D.h"


#include <iostream>

int main()
{
    // On va travailler avec 4 points pour tester la classe Forme2D
    // Les points p1, p2 et p4 seront utilisés pour le triangle
    // Tous les points pour le rectangle
    // Le vecteur servira à instancier les classes Forme2D & Triangle2D
    Point2D p1{ 0.0f, 0.0f, 10.0f, 10.0f, 40.0f };
    Point2D p2{ 0.0f, 1.0f, 10.0f, 10.0f, 40.0f };
    Point2D p3{ 2.0f, 1.0f, 10.0f, 10.0f, 40.0f };
    Point2D p4{ 2.0f, 0.0f, 10.0f, 10.0f, 40.0f };
    std::vector<Point2D> listePoints{ p3, p1, p2 };

    // Tests pour Forme 2D
    // La méthode afficher sera automatiquement testée en affichant après chacune des autres opérations
    std::cout << "Instantiation Forme \n";
    Forme2D forme{ listePoints };
    forme.afficher();

    std::cout << "\nAjout \n";
    forme.ajouterPoint(p4);
    forme.afficher();
    
    std::cout << "\nSuppression \n";
    forme.supprimerPoint();
    forme.afficher();

    std::cout << "\nDessiner \n";
    float* tab = forme.dessiner();
    for (int i = 0; i < forme.bufferSize(); ++i) { std::cout << tab[i] << " "; }
    std::cout << "\n";
    forme.afficher();

    std::cout << "\nPermietre \n";
    std::cout << forme.permietre() << "\n";

    //Tests pour Rect2D
    std::cout << "\nInstantiation Rectangle\n";
    Rect2D rectangle{ {0.0f, 0.0f, 200.0f, 10.0f, 10.0f}, 2.0f, 1.0f, 200.0f, 10.0f, 10.0f };
    rectangle.afficher();

    std::cout << "\nDessiner \n";
    tab = rectangle.dessiner();
    for (int i = 0; i < rectangle.bufferSize(); ++i) { std::cout << tab[i] << " "; }
    std::cout << "\n";
    rectangle.afficher();

    std::cout << "\nPermietre \n";
    std::cout << rectangle.permietre() << "\n";

    std::cout << "\nAire \n";
    std::cout << rectangle.aire();

    //Tests pour Triangle2D
    std::cout << "\nInstantiation triangle\n";
    Triangle2D triangle{ listePoints };
    triangle.afficher();

    std::cout << "\nDessiner \n";
    tab = triangle.dessiner();
    for (int i = 0; i < triangle.bufferSize(); ++i) { std::cout << tab[i] << " "; }
    std::cout << "\n";
    triangle.afficher();

    std::cout << "\nPermietre \n";
    std::cout << triangle.permietre() << "\n";

    std::cout << "\nAire \n";
    std::cout << triangle.aire();

}
