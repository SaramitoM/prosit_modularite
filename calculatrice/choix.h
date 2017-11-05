int choix (int choix)
{
while (choix!=5)
{

            int nbrA;
        nbrA = 0;
        int nbrB;
        nbrB = 0;
        int resultat=0;

        printf("1 addition\n2 soustraction\n3 multiplication\n4 division\n");
        scanf("%d" , &choix);


        printf("entrez vos 2 nombres\n");
        scanf("%d %d", &nbrA, &nbrB);

        switch (choix)
        {

    case 1:
        resultat=addition(nbrA,nbrB);
        break;

    case 2:
        resultat=soustraction(nbrA,nbrB);
        break;

    case 3:
        resultat=multiplication(nbrA,nbrB);
        break;

    case 4:
        resultat=division(nbrA,nbrB);
        break;

    default:
    printf("erreur");
    break;

    return resultat;
}
}
