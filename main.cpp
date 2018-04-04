#include "grman/grman.h"
#include <iostream>

#include "graph.h"

int main()
{
    bool fin=false, fin2=false;
    bool finn=false, finn2=false;
    int cpt=0;
    int cptt=0;
   Sommet s1;
   Sommet s2;

    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du r�pertoire o� se trouvent les images � charger
    grman::set_pictures_path("pics");

    /// Un exemple de graphe
    Graph g;
    g.make_example();


    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement � des frameworks plus avanc�s )
    while ( !key[KEY_ESC] )
    {
        if(cpt>=1)
            cpt++;
        /// Il faut appeler les m�thodes d'update des objets qui comportent des widgets
        g.ajouter_sommet(&fin, &fin2, &cpt);
        ///afficher map aretes
        //g.afficher_aretes();
        ///ajouter arete
        if(cptt>=1)
            cptt++;
        g.ajouter_arete(&finn, &finn2,&cptt, &s1, &s2);

        g.update();

        /// Mise � jour g�n�rale (clavier/souris/buffer etc...)
        grman::mettre_a_jour();

        if(cpt>=51)
            cpt=50;
    }

    g.enregistrer_donnees_som();
    g.enregistrer_donnees_ar();

    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN();


