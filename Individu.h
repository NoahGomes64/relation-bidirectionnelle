/**
 * @file Individu.h
 * @author N.Gomes
 * @brief Specifie une classe individu en relation réciproque avec sa Voiture
 * @details Ce fichier décrit une classe individu
 * 
 * Un Individu est définie par un nom, prénom et une Voiture
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Classe representant un individu
 * @warning Actuellement un individu conduit au plus une Voiture
 */

class Individu


{
    // ATTRIBUTS
  public:
    /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;         
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;     
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    // Constructeur
    /**
     * @brief Construit un objet individu à partir de son nom, prenom et de sa Voiture
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Retourne identite individu
     * @bug Un espace en trop entre le nom et le prenom
     * @todo Ajouter un attribut pour choisir entre nom et prenom ou prenom nom
     * @return chaine sous la forme nom, prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    /**
     * @brief Definit la Voiture conduite par l'Individu
     * 
     * @param (in) voiture : un pointeur vers l'objet Voiture conduite par l'Individu
     */
    void majMaVoiture(Voiture* voiture);
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H