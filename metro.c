#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"
#include "limits.h"

// Pense Bete : Partir de id-1

typedef struct station {
	int id;
	char nomStation[50];
	char ligne[15];
	struct station ** correspondance;
	int nbCorrespondance;
} station;

typedef struct metro
{
	station * stations;
	int nbstations;
} metro;

typedef struct dijk {
	char dejaVu;
	char ligneActuel[11];
	station * stationAvant;
	int poids;
} dijk;

metro creerMetro(){
	int a = 1;

	// Declaration metro
	metro metroBerlin;
	metroBerlin.nbstations = 173;
	metroBerlin.stations = malloc(sizeof(station)*173);
	assert(metroBerlin.stations);

	// Declaration Station

	station *station1 = metroBerlin.stations;
	station1->id = 1;
	strcpy(station1->nomStation, "Uhlandstraße");
	strcpy(station1->ligne, "U1");
	station1->nbCorrespondance=1;
	station1->correspondance = malloc(sizeof(station*)*station1->nbCorrespondance);
	assert(station1->correspondance);

	station *station2 = metroBerlin.stations+a;
	station2->id = 2;
	strcpy(station2->nomStation, "Kurfürsten-damm");
	strcpy(station2->ligne, "U1 U9");
	station2->nbCorrespondance=4;
	a++;
	station2->correspondance = malloc(sizeof(station*)*station2->nbCorrespondance);
	assert(station2->correspondance);

	station *station3 = metroBerlin.stations+a;
	station3->id = 3;
	strcpy(station3->nomStation, "Wittenberplatz");
	strcpy(station3->ligne, "U1 U2 U3");
	station3->nbCorrespondance=4;
	a++;
	station3->correspondance = malloc(sizeof(station*)*station3->nbCorrespondance);
	assert(station3->correspondance);

	station *station4 = metroBerlin.stations+a;
	station4->id = 4;
	strcpy(station4->nomStation, "Nollendorfplatz");
	strcpy(station4->ligne, "U1 U2 U3 U4");
	station4->nbCorrespondance=4;
	a++;
	station4->correspondance = malloc(sizeof(station*)*station4->nbCorrespondance);
	assert(station4->correspondance);

	station *station5 = metroBerlin.stations+a;
	station5->id = 5;
	strcpy(station5->nomStation, "Kurfürstenstraße");
	strcpy(station5->ligne, "U1");
	station5->nbCorrespondance=2;
	a++;
	station5->correspondance = malloc(sizeof(station*)*station5->nbCorrespondance);
	assert(station5->correspondance);

	station *station6 = metroBerlin.stations+a;
	station6->id = 6;
	strcpy(station6->nomStation, "Gleisdreieck");
	strcpy(station6->ligne, "U1 U2");
	station6->nbCorrespondance=4;
	a++;
	station6->correspondance = malloc(sizeof(station*)*station6->nbCorrespondance);
	assert(station6->correspondance);

	station *station7 = metroBerlin.stations+a;
	station7->id = 7;
	strcpy(station7->nomStation, "Möckernbrücke");
	strcpy(station7->ligne, "U1 U7");
	station7->nbCorrespondance=4;
	a++;
	station7->correspondance = malloc(sizeof(station*)*station7->nbCorrespondance);
	assert(station7->correspondance);

	station *station8 = metroBerlin.stations+a;
	station8->id = 8;
	strcpy(station8->nomStation, "Hallesches Tor");
	strcpy(station8->ligne, "U1 U6");
	station8->nbCorrespondance=4;
	a++;
	station8->correspondance = malloc(sizeof(station*)*station8->nbCorrespondance);
	assert(station8->correspondance);

	station *station9 = metroBerlin.stations+a;
	station9->id = 9;
	strcpy(station9->nomStation, "Prinzenstraße");
	strcpy(station9->ligne, "U1");
	station9->nbCorrespondance=2;
	a++;
	station9->correspondance = malloc(sizeof(station*)*station9->nbCorrespondance);
	assert(station9->correspondance);

	station *station10 = metroBerlin.stations+a;
	station10->id = 10;
	strcpy(station10->nomStation, "Kottbusser Tor");
	strcpy(station10->ligne, "U8");
	station10->nbCorrespondance=4;
	a++;
	station10->correspondance = malloc(sizeof(station*)*station10->nbCorrespondance);
	assert(station10->correspondance);

	station *station11 = metroBerlin.stations+a;
	station11->id = 11;
	strcpy(station11->nomStation, "Görlitzer Bahnhof");
	strcpy(station11->ligne, "U1");
	station11->nbCorrespondance=2;
	a++;
	station11->correspondance = malloc(sizeof(station*)*station11->nbCorrespondance);
	assert(station11->correspondance);

	station *station12 = metroBerlin.stations+a;
	station12->id = 12;
	strcpy(station12->nomStation, "Schlesisches Tor");
	strcpy(station12->ligne, "U1");
	station12->nbCorrespondance=2;
	a++;
	station12->correspondance = malloc(sizeof(station*)*station12->nbCorrespondance);
	assert(station12->correspondance);

	station *station13 = metroBerlin.stations+a;
	station13->id = 13;
	strcpy(station13->nomStation, "Warschauer Straße");
	strcpy(station13->ligne, "U1");
	station13->nbCorrespondance=1;
	a++;
	station13->correspondance = malloc(sizeof(station*)*station13->nbCorrespondance);
	assert(station13->correspondance);

	station *station14 = metroBerlin.stations+a;
	station14->id = 14;
	strcpy(station14->nomStation, "Ruhleben");
	strcpy(station14->ligne, "U2");
	station14->nbCorrespondance=1;
	a++;
	station14->correspondance = malloc(sizeof(station*)*station14->nbCorrespondance);
	assert(station14->correspondance);

	station *station15 = metroBerlin.stations+a;
	station15->id = 15;
	strcpy(station15->nomStation, "Olympia-Stadion");
	strcpy(station15->ligne, "U2");
	station15->nbCorrespondance=2;
	a++;
	station15->correspondance = malloc(sizeof(station*)*station15->nbCorrespondance);
	assert(station15->correspondance);

	station *station16 = metroBerlin.stations+a;
	station16->id = 16;
	strcpy(station16->nomStation, "Neu-Westend");
	strcpy(station16->ligne, "U2");
	station16->nbCorrespondance=2;
	a++;
	station16->correspondance = malloc(sizeof(station*)*station16->nbCorrespondance);
	assert(station16->correspondance);

	station *station17 = metroBerlin.stations+a;
	station17->id = 17;
	strcpy(station17->nomStation, "Theodor-Heuss-Platz");
	strcpy(station17->ligne, "U2");
	station17->nbCorrespondance=2;
	a++;
	station17->correspondance = malloc(sizeof(station*)*station17->nbCorrespondance);
	assert(station17->correspondance);

	station *station18 = metroBerlin.stations+a;
	station18->id = 18;
	strcpy(station18->nomStation, "Keiserdamm");
	strcpy(station18->ligne, "U2");
	station18->nbCorrespondance=2;
	a++;
	station18->correspondance = malloc(sizeof(station*)*station18->nbCorrespondance);
	assert(station18->correspondance);

	station *station19 = metroBerlin.stations+a;
	station19->id = 19;
	strcpy(station19->nomStation, "Sophie-Charlotte-Platz");
	strcpy(station19->ligne, "U2");
	station19->nbCorrespondance=2;
	a++;
	station19->correspondance = malloc(sizeof(station*)*station19->nbCorrespondance);
	assert(station19->correspondance);

	station *station20 = metroBerlin.stations+a;
	station20->id = 20;
	strcpy(station20->nomStation, "Bismarckstraße");
	strcpy(station20->ligne, "U2 U7");
	station20->nbCorrespondance=4;
	a++;
	station20->correspondance = malloc(sizeof(station*)*station20->nbCorrespondance);
	assert(station20->correspondance);

	station *station21 = metroBerlin.stations+a;
	station21->id = 21;
	strcpy(station21->nomStation, "Deutsche Oper");
	strcpy(station21->ligne, "U2");
	station21->nbCorrespondance=2;
	a++;
	station21->correspondance = malloc(sizeof(station*)*station21->nbCorrespondance);
	assert(station21->correspondance);

	station *station22 = metroBerlin.stations+a;
	station22->id = 22;
	strcpy(station22->nomStation, "Ernst-Reuter-Platz");
	strcpy(station22->ligne, "U2");
	station22->nbCorrespondance=2;
	a++;
	station22->correspondance = malloc(sizeof(station*)*station22->nbCorrespondance);
	assert(station22->correspondance);

	station *station23 = metroBerlin.stations+a;
	station23->id = 23;
	strcpy(station23->nomStation, "Zoologischer Garten");
	strcpy(station23->ligne, "U2 U9");
	station23->nbCorrespondance=4;
	a++;
	station23->correspondance = malloc(sizeof(station*)*station23->nbCorrespondance);
	assert(station23->correspondance);

	station *station24 = metroBerlin.stations+a;
	station24->id = 24;
	strcpy(station24->nomStation, "Bülowstraße");
	strcpy(station24->ligne, "U2");
	station24->nbCorrespondance=2;
	a++;
	station24->correspondance = malloc(sizeof(station*)*station24->nbCorrespondance);
	assert(station24->correspondance);

	station *station25 = metroBerlin.stations+a;
	station25->id = 25;
	strcpy(station25->nomStation, "Mendelssohn-Bartholdy-Park");
	strcpy(station25->ligne, "U2");
	station25->nbCorrespondance=2;
	a++;
	station25->correspondance = malloc(sizeof(station*)*station25->nbCorrespondance);
	assert(station25->correspondance);

	station *station26 = metroBerlin.stations+a;
	station26->id = 26;
	strcpy(station26->nomStation, "Potsdamer Platz");
	strcpy(station26->ligne, "U2");
	station26->nbCorrespondance=2;
	a++;
	station26->correspondance = malloc(sizeof(station*)*station26->nbCorrespondance);
	assert(station26->correspondance);

	station *station27 = metroBerlin.stations+a;
	station27->id = 27;
	strcpy(station27->nomStation, "Mohrenstraße");
	strcpy(station27->ligne, "U2");
	station27->nbCorrespondance=2;
	a++;
	station27->correspondance = malloc(sizeof(station*)*station27->nbCorrespondance);
	assert(station27->correspondance);

	station *station28 = metroBerlin.stations+a;
	station28->id = 28;
	strcpy(station28->nomStation, "Stadtmitte");
	strcpy(station28->ligne, "U2 U6");
	station28->nbCorrespondance=4;
	a++;
	station28->correspondance = malloc(sizeof(station*)*station28->nbCorrespondance);
	assert(station28->correspondance);

	station *station29 = metroBerlin.stations+a;
	station29->id = 29;
	strcpy(station29->nomStation, "Hausvogtei-platz");
	strcpy(station29->ligne, "U2");
	station29->nbCorrespondance=2;
	a++;
	station29->correspondance = malloc(sizeof(station*)*station29->nbCorrespondance);
	assert(station29->correspondance);

	station *station30 = metroBerlin.stations+a;
	station30->id = 30;
	strcpy(station30->nomStation, "Märkisches Museum");
	strcpy(station30->ligne, "U2");
	station30->nbCorrespondance=2;
	a++;
	station30->correspondance = malloc(sizeof(station*)*station30->nbCorrespondance);
	assert(station30->correspondance);

	station *station31 = metroBerlin.stations+a;
	station31->id = 31;
	strcpy(station31->nomStation, "Klosterstraße");
	strcpy(station31->ligne, "U2");
	station31->nbCorrespondance=2;
	a++;
	station31->correspondance = malloc(sizeof(station*)*station31->nbCorrespondance);
	assert(station31->correspondance);

	station *station32 = metroBerlin.stations+a;
	station32->id = 32;
	strcpy(station32->nomStation, "Alexanderplatz");
	strcpy(station32->ligne, "U2 U5 U8");
	station32->nbCorrespondance=6;
	a++;
	station32->correspondance = malloc(sizeof(station*)*station32->nbCorrespondance);
	assert(station32->correspondance);

	station *station33 = metroBerlin.stations+a;
	station33->id = 33;
	strcpy(station33->nomStation, "Rosa-luxemburg-Platz");
	strcpy(station33->ligne, "U2");
	station33->nbCorrespondance=2;
	a++;
	station33->correspondance = malloc(sizeof(station*)*station33->nbCorrespondance);
	assert(station33->correspondance);

	station *station34 = metroBerlin.stations+a;
	station34->id = 34;
	strcpy(station34->nomStation, "Senelfelderplatz");
	strcpy(station34->ligne, "U2");
	station34->nbCorrespondance=2;
	a++;
	station34->correspondance = malloc(sizeof(station*)*station34->nbCorrespondance);
	assert(station34->correspondance);

	station *station35 = metroBerlin.stations+a;
	station35->id = 35;
	strcpy(station35->nomStation, "Eberwalder Straße");
	strcpy(station35->ligne, "U2");
	station35->nbCorrespondance=2;
	a++;
	station35->correspondance = malloc(sizeof(station*)*station35->nbCorrespondance);
	assert(station35->correspondance);

	station *station36 = metroBerlin.stations+a;
	station36->id = 36;
	strcpy(station36->nomStation, "Schönhauser Alee");
	strcpy(station36->ligne, "U2");
	station36->nbCorrespondance=2;
	a++;
	station36->correspondance = malloc(sizeof(station*)*station36->nbCorrespondance);
	assert(station36->correspondance);

	station *station37 = metroBerlin.stations+a;
	station37->id = 37;
	strcpy(station37->nomStation, "Vinetastraße");
	strcpy(station37->ligne, "U2");
	station37->nbCorrespondance=2;
	a++;
	station37->correspondance = malloc(sizeof(station*)*station37->nbCorrespondance);
	assert(station37->correspondance);

	station *station38 = metroBerlin.stations+a;
	station38->id = 38;
	strcpy(station38->nomStation, "Pankow");
	strcpy(station38->ligne, "U2");
	station38->nbCorrespondance=1;
	a++;
	station38->correspondance = malloc(sizeof(station*)*station38->nbCorrespondance);
	assert(station38->correspondance);

	station *station39 = metroBerlin.stations+a;
	station39->id = 39;
	strcpy(station39->nomStation, "Krumme Lanke");
	strcpy(station39->ligne, "U3");
	station39->nbCorrespondance=1;
	a++;
	station39->correspondance = malloc(sizeof(station*)*station39->nbCorrespondance);
	assert(station39->correspondance);

	station *station40 = metroBerlin.stations+a;
	station40->id = 40;
	strcpy(station40->nomStation, "onkel Toms Hütte");
	strcpy(station40->ligne, "U3");
	station40->nbCorrespondance=2;
	a++;
	station40->correspondance = malloc(sizeof(station*)*station40->nbCorrespondance);
	assert(station40->correspondance);

	station *station41 = metroBerlin.stations+a;
	station41->id = 41;
	strcpy(station41->nomStation, "Oskar-Helene-Heim");
	strcpy(station41->ligne, "U3");
	station41->nbCorrespondance=2;
	a++;
	station41->correspondance = malloc(sizeof(station*)*station41->nbCorrespondance);
	assert(station41->correspondance);

	station *station42 = metroBerlin.stations+a;
	station42->id = 42;
	strcpy(station42->nomStation, "Thielplatz");
	strcpy(station42->ligne, "U3");
	station42->nbCorrespondance=2;
	a++;
	station42->correspondance = malloc(sizeof(station*)*station42->nbCorrespondance);
	assert(station42->correspondance);

	station *station43 = metroBerlin.stations+a;
	station43->id = 43;
	strcpy(station43->nomStation, "Dahlem-Dorf");
	strcpy(station43->ligne, "U3");
	station43->nbCorrespondance=2;
	a++;
	station43->correspondance = malloc(sizeof(station*)*station43->nbCorrespondance);
	assert(station43->correspondance);

	station *station44 = metroBerlin.stations+a;
	station44->id = 44;
	strcpy(station44->nomStation, "Podbielskiallee");
	strcpy(station44->ligne, "U3");
	station44->nbCorrespondance=2;
	a++;
	station44->correspondance = malloc(sizeof(station*)*station44->nbCorrespondance);
	assert(station44->correspondance);

	station *station45 = metroBerlin.stations+a;
	station45->id = 45;
	strcpy(station45->nomStation, "Breitenbachplatz");
	strcpy(station45->ligne, "U3");
	station45->nbCorrespondance=2;
	a++;
	station45->correspondance = malloc(sizeof(station*)*station45->nbCorrespondance);
	assert(station45->correspondance);

	station *station46 = metroBerlin.stations+a;
	station46->id = 46;
	strcpy(station46->nomStation, "Rüdesheimer Platz");
	strcpy(station46->ligne, "U3");
	station46->nbCorrespondance=2;
	a++;
	station46->correspondance = malloc(sizeof(station*)*station46->nbCorrespondance);
	assert(station46->correspondance);

	station *station47 = metroBerlin.stations+a;
	station47->id = 47;
	strcpy(station47->nomStation, "Heidelberger Platz");
	strcpy(station47->ligne, "U3");
	station47->nbCorrespondance=2;
	a++;
	station47->correspondance = malloc(sizeof(station*)*station47->nbCorrespondance);
	assert(station47->correspondance);

	station *station48 = metroBerlin.stations+a;
	station48->id = 48;
	strcpy(station48->nomStation, "Fehrbelliner Platz");
	strcpy(station48->ligne, "U3 U7");
	station48->nbCorrespondance=4;
	a++;
	station48->correspondance = malloc(sizeof(station*)*station48->nbCorrespondance);
	assert(station48->correspondance);

	station *station49 = metroBerlin.stations+a;
	station49->id = 49;
	strcpy(station49->nomStation, "Hohenzollrnplatz");
	strcpy(station49->ligne, "U3");
	station49->nbCorrespondance=2;
	a++;
	station49->correspondance = malloc(sizeof(station*)*station49->nbCorrespondance);
	assert(station49->correspondance);

	station *station50 = metroBerlin.stations+a;
	station50->id = 50;
	strcpy(station50->nomStation, "Spichernstaße");
	strcpy(station50->ligne, "U3 U9");
	station50->nbCorrespondance=4;
	a++;
	station50->correspondance = malloc(sizeof(station*)*station50->nbCorrespondance);
	assert(station50->correspondance);

	station *station51 = metroBerlin.stations+a;
	station51->id = 51;
	strcpy(station51->nomStation, "Augsburger Straße");
	strcpy(station51->ligne, "U3");
	station51->nbCorrespondance=2;
	a++;
	station51->correspondance = malloc(sizeof(station*)*station51->nbCorrespondance);
	assert(station51->correspondance);

	station *station52 = metroBerlin.stations+a;
	station52->id = 52;
	strcpy(station52->nomStation, "Viktoria-Luise-Platz");
	strcpy(station52->ligne, "U4");
	station52->nbCorrespondance=2;
	a++;
	station52->correspondance = malloc(sizeof(station*)*station52->nbCorrespondance);
	assert(station52->correspondance);

	station *station53 = metroBerlin.stations+a;
	station53->id = 53;
	strcpy(station53->nomStation, "Bayerischer Platz");
	strcpy(station53->ligne, "U4 U7");
	station53->nbCorrespondance=4;
	a++;
	station53->correspondance = malloc(sizeof(station*)*station53->nbCorrespondance);
	assert(station53->correspondance);

	station *station54 = metroBerlin.stations+a;
	station54->id = 54;
	strcpy(station54->nomStation, "Rathaus Schöneberg");
	strcpy(station54->ligne, "U4");
	station54->nbCorrespondance=2;
	a++;
	station54->correspondance = malloc(sizeof(station*)*station54->nbCorrespondance);
	assert(station54->correspondance);

	station *station55 = metroBerlin.stations+a;
	station55->id = 55;
	strcpy(station55->nomStation, "Innsbrucker Platz");
	strcpy(station55->ligne, "U4");
	station55->nbCorrespondance=1;
	a++;
	station55->correspondance = malloc(sizeof(station*)*station55->nbCorrespondance);
	assert(station55->correspondance);

	station *station56 = metroBerlin.stations+a;
	station56->id = 56;
	strcpy(station56->nomStation, "Hauptbahnhof");
	strcpy(station56->ligne, "U5");
	station56->nbCorrespondance=1;
	a++;
	station56->correspondance = malloc(sizeof(station*)*station56->nbCorrespondance);
	assert(station56->correspondance);
	station *station57 = metroBerlin.stations+a;
	station57->id = 57;
	strcpy(station57->nomStation, "Bundestag");
	strcpy(station57->ligne, "U5");
	station57->nbCorrespondance=2;
	a++;
	station57->correspondance = malloc(sizeof(station*)*station57->nbCorrespondance);
	assert(station57->correspondance);

	station *station58 = metroBerlin.stations+a;
	station58->id = 58;
	strcpy(station58->nomStation, "Brandenburger Tor");
	strcpy(station58->ligne, "U5");
	station58->nbCorrespondance=2;
	a++;
	station58->correspondance = malloc(sizeof(station*)*station58->nbCorrespondance);
	assert(station58->correspondance);

	station *station59 = metroBerlin.stations+a;
	station59->id = 59;
	strcpy(station59->nomStation, "Schillingstraße");
	strcpy(station59->ligne, "U5");
	station59->nbCorrespondance=2;
	a++;
	station59->correspondance = malloc(sizeof(station*)*station59->nbCorrespondance);
	assert(station59->correspondance);

	station *station60 = metroBerlin.stations+a;
	station60->id = 60;
	strcpy(station60->nomStation, "Strausberger Platz");
	strcpy(station60->ligne, "U5");
	station60->nbCorrespondance=2;
	a++;
	station60->correspondance = malloc(sizeof(station*)*station60->nbCorrespondance);
	assert(station60->correspondance);

	station *station61 = metroBerlin.stations+a;
	station61->id = 61;
	strcpy(station61->nomStation, "Weberwiese");
	strcpy(station61->ligne, "U5");
	station61->nbCorrespondance=2;
	a++;
	station61->correspondance = malloc(sizeof(station*)*station61->nbCorrespondance);
	assert(station61->correspondance);

	station *station62 = metroBerlin.stations+a;
	station62->id = 62;
	strcpy(station62->nomStation, "Frankfurter Tor");
	strcpy(station62->ligne, "U5");
	station62->nbCorrespondance=2;
	a++;
	station62->correspondance = malloc(sizeof(station*)*station62->nbCorrespondance);
	assert(station62->correspondance);

	station *station63 = metroBerlin.stations+a;
	station63->id = 63;
	strcpy(station63->nomStation, "Samariterstraße");
	strcpy(station63->ligne, "U5");
	station63->nbCorrespondance=2;
	a++;
	station63->correspondance = malloc(sizeof(station*)*station63->nbCorrespondance);
	assert(station63->correspondance);

	station *station64 = metroBerlin.stations+a;
	station64->id = 64;
	strcpy(station64->nomStation, "Frankfurter Allee");
	strcpy(station64->ligne, "U5");
	station64->nbCorrespondance=2;
	a++;
	station64->correspondance = malloc(sizeof(station*)*station64->nbCorrespondance);
	assert(station64->correspondance);

	station *station65 = metroBerlin.stations+a;
	station65->id = 65;
	strcpy(station65->nomStation, "Magdalenenstraße");
	strcpy(station65->ligne, "U5");
	station65->nbCorrespondance=2;
	a++;
	station65->correspondance = malloc(sizeof(station*)*station65->nbCorrespondance);
	assert(station65->correspondance);

	station *station66 = metroBerlin.stations+a;
	station66->id = 66;
	strcpy(station66->nomStation, "Lichtenberg");
	strcpy(station66->ligne, "U5");
	station66->nbCorrespondance=2;
	a++;
	station66->correspondance = malloc(sizeof(station*)*station66->nbCorrespondance);
	assert(station66->correspondance);

	station *station67 = metroBerlin.stations+a;
	station67->id = 67;
	strcpy(station67->nomStation, "Friedrishsfelde");
	strcpy(station67->ligne, "U5");
	station67->nbCorrespondance=2;
	a++;
	station67->correspondance = malloc(sizeof(station*)*station67->nbCorrespondance);
	assert(station67->correspondance);

	station *station68 = metroBerlin.stations+a;
	station68->id = 68;
	strcpy(station68->nomStation, "Tierpark");
	strcpy(station68->ligne, "U5");
	station68->nbCorrespondance=2;
	a++;
	station68->correspondance = malloc(sizeof(station*)*station68->nbCorrespondance);
	assert(station68->correspondance);

	station *station69 = metroBerlin.stations+a;
	station69->id = 69;
	strcpy(station69->nomStation, "Biesdorf-Süd");
	strcpy(station69->ligne, "U5");
	station69->nbCorrespondance=2;
	a++;
	station69->correspondance = malloc(sizeof(station*)*station69->nbCorrespondance);
	assert(station69->correspondance);

	station *station70 = metroBerlin.stations+a;
	station70->id = 70;
	strcpy(station70->nomStation, "Elsterwerdear Platz");
	strcpy(station70->ligne, "U5");
	station70->nbCorrespondance=2;
	a++;
	station70->correspondance = malloc(sizeof(station*)*station70->nbCorrespondance);
	assert(station70->correspondance);

	station *station71 = metroBerlin.stations+a;
	station71->id = 71;
	strcpy(station71->nomStation, "Wuhletal");
	strcpy(station71->ligne, "U5");
	station71->nbCorrespondance=2;
	a++;
	station71->correspondance = malloc(sizeof(station*)*station71->nbCorrespondance);
	assert(station71->correspondance);

	station *station72 = metroBerlin.stations+a;
	station72->id = 72;
	strcpy(station72->nomStation, "Kaulsdorf-Nord");
	strcpy(station72->ligne, "U5");
	station72->nbCorrespondance=2;
	a++;
	station72->correspondance = malloc(sizeof(station*)*station72->nbCorrespondance);
	assert(station72->correspondance);

	station *station73 = metroBerlin.stations+a;
	station73->id = 73;
	strcpy(station73->nomStation, "Neue Grottkauer Straße");
	strcpy(station73->ligne, "U5");
	station73->nbCorrespondance=2;
	a++;
	station73->correspondance = malloc(sizeof(station*)*station73->nbCorrespondance);
	assert(station73->correspondance);

	station *station74 = metroBerlin.stations+a;
	station74->id = 74;
	strcpy(station74->nomStation, "Cottbusser Platz");
	strcpy(station74->ligne, "U5");
	station74->nbCorrespondance=2;
	a++;
	station74->correspondance = malloc(sizeof(station*)*station74->nbCorrespondance);
	assert(station74->correspondance);

	station *station75 = metroBerlin.stations+a;
	station75->id = 75;
	strcpy(station75->nomStation, "Hellersdorf");
	strcpy(station75->ligne, "U5");
	station75->nbCorrespondance=2;
	a++;
	station75->correspondance = malloc(sizeof(station*)*station75->nbCorrespondance);
	assert(station75->correspondance);

	station *station76 = metroBerlin.stations+a;
	station76->id = 76;
	strcpy(station76->nomStation, "Louis-Lewin-Straße");
	strcpy(station76->ligne, "U5");
	station76->nbCorrespondance=2;
	a++;
	station76->correspondance = malloc(sizeof(station*)*station76->nbCorrespondance);
	assert(station76->correspondance);

	station *station77 = metroBerlin.stations+a;
	station77->id = 77;
	strcpy(station77->nomStation, "Hönow");
	strcpy(station77->ligne, "U5");
	station77->nbCorrespondance=1;
	a++;
	station77->correspondance = malloc(sizeof(station*)*station77->nbCorrespondance);
	assert(station77->correspondance);

	station *station78 = metroBerlin.stations+a;
	station78->id = 78;
	strcpy(station78->nomStation, "Alt-Tegel");
	strcpy(station78->ligne, "U6");
	station78->nbCorrespondance=1;
	a++;
	station78->correspondance = malloc(sizeof(station*)*station78->nbCorrespondance);
	assert(station78->correspondance);

	station *station79 = metroBerlin.stations+a;
	station79->id = 79;
	strcpy(station79->nomStation, "Borsigwerke");
	strcpy(station79->ligne, "U6");
	station79->nbCorrespondance=2;
	a++;
	station79->correspondance = malloc(sizeof(station*)*station79->nbCorrespondance);
	assert(station79->correspondance);

	station *station80 = metroBerlin.stations+a;
	station80->id = 80;
	strcpy(station80->nomStation, "Holzhauser Straße");
	strcpy(station80->ligne, "U6");
	station80->nbCorrespondance=2;
	a++;
	station80->correspondance = malloc(sizeof(station*)*station80->nbCorrespondance);
	assert(station80->correspondance);

	station *station81 = metroBerlin.stations+a;
	station81->id = 81;
	strcpy(station81->nomStation, "Otisstraße");
	strcpy(station81->ligne, "U6");
	station81->nbCorrespondance=2;
	a++;
	station81->correspondance = malloc(sizeof(station*)*station81->nbCorrespondance);
	assert(station81->correspondance);

	station *station82 = metroBerlin.stations+a;
	station82->id = 82;
	strcpy(station82->nomStation, "Scharnweberstraße");
	strcpy(station82->ligne, "U6");
	station82->nbCorrespondance=2;
	a++;
	station82->correspondance = malloc(sizeof(station*)*station82->nbCorrespondance);
	assert(station82->correspondance);

	station *station83 = metroBerlin.stations+a;
	station83->id = 83;
	strcpy(station83->nomStation, "Kurt-Schumacher-Platz");
	strcpy(station83->ligne, "U6");
	station83->nbCorrespondance=2;
	a++;
	station83->correspondance = malloc(sizeof(station*)*station83->nbCorrespondance);
	assert(station83->correspondance);

	station *station84 = metroBerlin.stations+a;
	station84->id = 84;
	strcpy(station84->nomStation, "Afrikanische Straße");
	strcpy(station84->ligne, "U6");
	station84->nbCorrespondance=2;
	a++;
	station84->correspondance = malloc(sizeof(station*)*station84->nbCorrespondance);
	assert(station84->correspondance);

	station *station85 = metroBerlin.stations+a;
	station85->id = 85;
	strcpy(station85->nomStation, "Rehberge");
	strcpy(station85->ligne, "U6");
	station85->nbCorrespondance=2;
	a++;
	station85->correspondance = malloc(sizeof(station*)*station85->nbCorrespondance);
	assert(station85->correspondance);

	station *station86 = metroBerlin.stations+a;
	station86->id = 86;
	strcpy(station86->nomStation, "Seestraße");
	strcpy(station86->ligne, "U6");
	station86->nbCorrespondance=2;
	a++;
	station86->correspondance = malloc(sizeof(station*)*station86->nbCorrespondance);
	assert(station86->correspondance);

	station *station87 = metroBerlin.stations+a;
	station87->id = 87;
	strcpy(station87->nomStation, "Leopoldplatz");
	strcpy(station87->ligne, "U6 U9");
	station87->nbCorrespondance=4;
	a++;
	station87->correspondance = malloc(sizeof(station*)*station87->nbCorrespondance);
	assert(station87->correspondance);

	station *station88 = metroBerlin.stations+a;
	station88->id = 88;
	strcpy(station88->nomStation, "Wedding");
	strcpy(station88->ligne, "U6");
	station88->nbCorrespondance=2;
	a++;
	station88->correspondance = malloc(sizeof(station*)*station88->nbCorrespondance);
	assert(station88->correspondance);

	station *station89 = metroBerlin.stations+a;
	station89->id = 89;
	strcpy(station89->nomStation, "Reinickendorfer Straße");
	strcpy(station89->ligne, "U6");
	station89->nbCorrespondance=2;
	a++;
	station89->correspondance = malloc(sizeof(station*)*station89->nbCorrespondance);
	assert(station89->correspondance);

	station *station90 = metroBerlin.stations+a;
	station90->id = 90;
	strcpy(station90->nomStation, "Schwartzkopffstraße");
	strcpy(station90->ligne, "U6");
	station90->nbCorrespondance=2;
	a++;
	station90->correspondance = malloc(sizeof(station*)*station90->nbCorrespondance);
	assert(station90->correspondance);

	station *station91 = metroBerlin.stations+a;
	station91->id = 91;
	strcpy(station91->nomStation, "Naturkunde-Museum");
	strcpy(station91->ligne, "U6");
	station91->nbCorrespondance=2;
	a++;
	station91->correspondance = malloc(sizeof(station*)*station91->nbCorrespondance);
	assert(station91->correspondance);

	station *station92 = metroBerlin.stations+a;
	station92->id = 92;
	strcpy(station92->nomStation, "Oranienburger Tor");
	strcpy(station92->ligne, "U6");
	station92->nbCorrespondance=2;
	a++;
	station92->correspondance = malloc(sizeof(station*)*station92->nbCorrespondance);
	assert(station92->correspondance);

	station *station93 = metroBerlin.stations+a;
	station93->id = 93;
	strcpy(station93->nomStation, "Friedrichstraße");
	strcpy(station93->ligne, "U6");
	station93->nbCorrespondance=2;
	a++;
	station93->correspondance = malloc(sizeof(station*)*station93->nbCorrespondance);
	assert(station93->correspondance);

	station *station94 = metroBerlin.stations+a;
	station94->id = 94;
	strcpy(station94->nomStation, "Französische Straße");
	strcpy(station94->ligne, "U6");
	station94->nbCorrespondance=2;
	a++;
	station94->correspondance = malloc(sizeof(station*)*station94->nbCorrespondance);
	assert(station94->correspondance);

	station *station95 = metroBerlin.stations+a;
	station95->id = 95;
	strcpy(station95->nomStation, "Kochstraße");
	strcpy(station95->ligne, "U6");
	station95->nbCorrespondance=2;
	a++;
	station95->correspondance = malloc(sizeof(station*)*station95->nbCorrespondance);
	assert(station95->correspondance);

	station *station96 = metroBerlin.stations+a;
	station96->id = 96;
	strcpy(station96->nomStation, "Mehringdamm");
	strcpy(station96->ligne, "U6 U7");
	station96->nbCorrespondance=4;
	a++;
	station96->correspondance = malloc(sizeof(station*)*station96->nbCorrespondance);
	assert(station96->correspondance);

	station *station97 = metroBerlin.stations+a;
	station97->id = 97;
	strcpy(station97->nomStation, "Platz der Luftbrücke");
	strcpy(station97->ligne, "U6");
	station97->nbCorrespondance=2;
	a++;
	station97->correspondance = malloc(sizeof(station*)*station97->nbCorrespondance);
	assert(station97->correspondance);

	station *station98 = metroBerlin.stations+a;
	station98->id = 98;
	strcpy(station98->nomStation, "Paradestraße");
	strcpy(station98->ligne, "U6");
	station98->nbCorrespondance=2;
	a++;
	station98->correspondance = malloc(sizeof(station*)*station98->nbCorrespondance);
	assert(station98->correspondance);

	station *station99 = metroBerlin.stations+a;
	station99->id = 99;
	strcpy(station99->nomStation, "Tempelhof");
	strcpy(station99->ligne, "U6");
	station99->nbCorrespondance=2;
	a++;
	station99->correspondance = malloc(sizeof(station*)*station99->nbCorrespondance);
	assert(station99->correspondance);

	station *station100 = metroBerlin.stations+a;
	station100->id = 100;
	strcpy(station100->nomStation, "Alt-Templhof");
	strcpy(station100->ligne, "U6");
	station100->nbCorrespondance=2;
	a++;
	station100->correspondance = malloc(sizeof(station*)*station100->nbCorrespondance);
	assert(station100->correspondance);

	station *station101 = metroBerlin.stations+a;
	station101->id = 101;
	strcpy(station101->nomStation, "Kaiserin-Augusta-Straße");
	strcpy(station101->ligne, "U6");
	station101->nbCorrespondance=2;
	a++;
	station101->correspondance = malloc(sizeof(station*)*station101->nbCorrespondance);
	assert(station101->correspondance);

	station *station102 = metroBerlin.stations+a;
	station102->id = 102;
	strcpy(station102->nomStation, "Ullsteinstraße");
	strcpy(station102->ligne, "U6");
	station102->nbCorrespondance=2;
	a++;
	station102->correspondance = malloc(sizeof(station*)*station102->nbCorrespondance);
	assert(station102->correspondance);

	station *station103 = metroBerlin.stations+a;
	station103->id = 103;
	strcpy(station103->nomStation, "Westphalweg");
	strcpy(station103->ligne, "U6");
	station103->nbCorrespondance=2;
	a++;
	station103->correspondance = malloc(sizeof(station*)*station103->nbCorrespondance);
	assert(station103->correspondance);

	station *station104 = metroBerlin.stations+a;
	station104->id = 104;
	strcpy(station104->nomStation, "Alt-Mariendorf");
	strcpy(station104->ligne, "U6");
	station104->nbCorrespondance=1;
	a++;
	station104->correspondance = malloc(sizeof(station*)*station104->nbCorrespondance);
	assert(station104->correspondance);

	station *station105 = metroBerlin.stations+a;
	station105->id = 105;
	strcpy(station105->nomStation, "Rathaus Spandau");
	strcpy(station105->ligne, "U7");
	station105->nbCorrespondance=1;
	a++;
	station105->correspondance = malloc(sizeof(station*)*station105->nbCorrespondance);
	assert(station105->correspondance);

	station *station106 = metroBerlin.stations+a;
	station106->id = 106;
	strcpy(station106->nomStation, "Altstadt Spandau");
	strcpy(station106->ligne, "U7");
	station106->nbCorrespondance=2;
	a++;
	station106->correspondance = malloc(sizeof(station*)*station106->nbCorrespondance);
	assert(station106->correspondance);

	station *station107 = metroBerlin.stations+a;
	station107->id = 107;
	strcpy(station107->nomStation, "Zitadelle");
	strcpy(station107->ligne, "U7");
	station107->nbCorrespondance=2;
	a++;
	station107->correspondance = malloc(sizeof(station*)*station107->nbCorrespondance);
	assert(station107->correspondance);

	station *station108 = metroBerlin.stations+a;
	station108->id = 108;
	strcpy(station108->nomStation, "Haselhorst");
	strcpy(station108->ligne, "U7");
	station108->nbCorrespondance=2;
	a++;
	station108->correspondance = malloc(sizeof(station*)*station108->nbCorrespondance);
	assert(station108->correspondance);

	station *station109 = metroBerlin.stations+a;
	station109->id = 109;
	strcpy(station109->nomStation, "Paulsternstraße");
	strcpy(station109->ligne, "U7");
	station109->nbCorrespondance=2;
	a++;
	station109->correspondance = malloc(sizeof(station*)*station109->nbCorrespondance);
	assert(station109->correspondance);

	station *station110 = metroBerlin.stations+a;
	station110->id = 110;
	strcpy(station110->nomStation, "Rohdamm");
	strcpy(station110->ligne, "U7");
	station110->nbCorrespondance=2;
	a++;
	station110->correspondance = malloc(sizeof(station*)*station110->nbCorrespondance);
	assert(station110->correspondance);

	station *station111 = metroBerlin.stations+a;
	station111->id = 111;
	strcpy(station111->nomStation, "Siemensdamm");
	strcpy(station111->ligne, "U7");
	station111->nbCorrespondance=2;
	a++;
	station111->correspondance = malloc(sizeof(station*)*station111->nbCorrespondance);
	assert(station111->correspondance);

	station *station112 = metroBerlin.stations+a;
	station112->id = 112;
	strcpy(station112->nomStation, "Halemweg");
	strcpy(station112->ligne, "U7");
	station112->nbCorrespondance=2;
	a++;
	station112->correspondance = malloc(sizeof(station*)*station112->nbCorrespondance);
	assert(station112->correspondance);

	station *station113 = metroBerlin.stations+a;
	station113->id = 113;
	strcpy(station113->nomStation, "Jakob-Kaiser-Platz");
	strcpy(station113->ligne, "U7");
	station113->nbCorrespondance=2;
	a++;
	station113->correspondance = malloc(sizeof(station*)*station113->nbCorrespondance);
	assert(station113->correspondance);

	station *station114 = metroBerlin.stations+a;
	station114->id = 114;
	strcpy(station114->nomStation, "Jungfernheide");
	strcpy(station114->ligne, "U7");
	station114->nbCorrespondance=2;
	a++;
	station114->correspondance = malloc(sizeof(station*)*station114->nbCorrespondance);
	assert(station114->correspondance);

	station *station115 = metroBerlin.stations+a;
	station115->id = 115;
	strcpy(station115->nomStation, "Mierendorffplatz");
	strcpy(station115->ligne, "U7");
	station115->nbCorrespondance=2;
	a++;
	station115->correspondance = malloc(sizeof(station*)*station115->nbCorrespondance);
	assert(station115->correspondance);

	station *station116 = metroBerlin.stations+a;
	station116->id = 116;
	strcpy(station116->nomStation, "Richard-Wagner-Platz");
	strcpy(station116->ligne, "U7");
	station116->nbCorrespondance=2;
	a++;
	station116->correspondance = malloc(sizeof(station*)*station116->nbCorrespondance);
	assert(station116->correspondance);

	station *station117 = metroBerlin.stations+a;
	station117->id = 117;
	strcpy(station117->nomStation, "Wilmersdorfer Straße");
	strcpy(station117->ligne, "U7");
	station117->nbCorrespondance=2;
	a++;
	station117->correspondance = malloc(sizeof(station*)*station117->nbCorrespondance);
	assert(station117->correspondance);

	station *station118 = metroBerlin.stations+a;
	station118->id = 118;
	strcpy(station118->nomStation, "Adenauerplatz");
	strcpy(station118->ligne, "U7");
	station118->nbCorrespondance=2;
	a++;
	station118->correspondance = malloc(sizeof(station*)*station118->nbCorrespondance);
	assert(station118->correspondance);

	station *station119 = metroBerlin.stations+a;
	station119->id = 119;
	strcpy(station119->nomStation, "Konstanzer Straße");
	strcpy(station119->ligne, "U7");
	station119->nbCorrespondance=2;
	a++;
	station119->correspondance = malloc(sizeof(station*)*station119->nbCorrespondance);
	assert(station119->correspondance);

	station *station120 = metroBerlin.stations+a;
	station120->id = 120;
	strcpy(station120->nomStation, "Blissestraße");
	strcpy(station120->ligne, "U7");
	station120->nbCorrespondance=2;
	a++;
	station120->correspondance = malloc(sizeof(station*)*station120->nbCorrespondance);
	assert(station120->correspondance);

	station *station121 = metroBerlin.stations+a;
	station121->id = 121;
	strcpy(station121->nomStation, "Berliner Straße");
	strcpy(station121->ligne, "U7");
	station121->nbCorrespondance=4;
	a++;
	station121->correspondance = malloc(sizeof(station*)*station121->nbCorrespondance);
	assert(station121->correspondance);

	station *station122 = metroBerlin.stations+a;
	station122->id = 122;
	strcpy(station122->nomStation, "Eisenacher Staße");
	strcpy(station122->ligne, "U7");
	station122->nbCorrespondance=2;
	a++;
	station122->correspondance = malloc(sizeof(station*)*station122->nbCorrespondance);
	assert(station122->correspondance);

	station *station123 = metroBerlin.stations+a;
	station123->id = 123;
	strcpy(station123->nomStation, "Kleistpark");
	strcpy(station123->ligne, "U7");
	station123->nbCorrespondance=2;
	a++;
	station123->correspondance = malloc(sizeof(station*)*station123->nbCorrespondance);
	assert(station123->correspondance);

	station *station124 = metroBerlin.stations+a;
	station124->id = 124;
	strcpy(station124->nomStation, "Yorckstraße");
	strcpy(station124->ligne, "U7");
	station124->nbCorrespondance=2;
	a++;
	station124->correspondance = malloc(sizeof(station*)*station124->nbCorrespondance);
	assert(station124->correspondance);

	station *station125 = metroBerlin.stations+a;
	station125->id = 125;
	strcpy(station125->nomStation, "Gneisenaustraße");
	strcpy(station125->ligne, "U7");
	station125->nbCorrespondance=2;
	a++;
	station125->correspondance = malloc(sizeof(station*)*station125->nbCorrespondance);
	assert(station125->correspondance);

	station *station126 = metroBerlin.stations+a;
	station126->id = 126;
	strcpy(station126->nomStation, "Südstern");
	strcpy(station126->ligne, "U7");
	station126->nbCorrespondance=2;
	a++;
	station126->correspondance = malloc(sizeof(station*)*station126->nbCorrespondance);
	assert(station126->correspondance);

	station *station127 = metroBerlin.stations+a;
	station127->id = 127;
	strcpy(station127->nomStation, "Hermannplatz");
	strcpy(station127->ligne, "U7 U8");
	station127->nbCorrespondance=4;
	a++;
	station127->correspondance = malloc(sizeof(station*)*station127->nbCorrespondance);
	assert(station127->correspondance);

	station *station128 = metroBerlin.stations+a;
	station128->id = 128;
	strcpy(station128->nomStation, "Rathaus Neukölln");
	strcpy(station128->ligne, "U7");
	station128->nbCorrespondance=2;
	a++;
	station128->correspondance = malloc(sizeof(station*)*station128->nbCorrespondance);
	assert(station128->correspondance);

	station *station129 = metroBerlin.stations+a;
	station129->id = 129;
	strcpy(station129->nomStation, "Karl-Marx-Straße");
	strcpy(station129->ligne, "U7");
	station129->nbCorrespondance=2;
	a++;
	station129->correspondance = malloc(sizeof(station*)*station129->nbCorrespondance);
	assert(station129->correspondance);

	station *station130 = metroBerlin.stations+a;
	station130->id = 130;
	strcpy(station130->nomStation, "Neukölln");
	strcpy(station130->ligne, "U7");
	station130->nbCorrespondance=2;
	a++;
	station130->correspondance = malloc(sizeof(station*)*station130->nbCorrespondance);
	assert(station130->correspondance);

	station *station131 = metroBerlin.stations+a;
	station131->id = 131;
	strcpy(station131->nomStation, "Grenzallee");
	strcpy(station131->ligne, "U7");
	station131->nbCorrespondance=2;
	a++;
	station131->correspondance = malloc(sizeof(station*)*station131->nbCorrespondance);
	assert(station131->correspondance);

	station *station132 = metroBerlin.stations+a;
	station132->id = 132;
	strcpy(station132->nomStation, "Blaschkoallee");
	strcpy(station132->ligne, "U7");
	station132->nbCorrespondance=2;
	a++;
	station132->correspondance = malloc(sizeof(station*)*station132->nbCorrespondance);
	assert(station132->correspondance);

	station *station133 = metroBerlin.stations+a;
	station133->id = 133;
	strcpy(station133->nomStation, "Parchimer Allee");
	strcpy(station133->ligne, "U7");
	station133->nbCorrespondance=2;
	a++;
	station133->correspondance = malloc(sizeof(station*)*station133->nbCorrespondance);
	assert(station133->correspondance);

	station *station134 = metroBerlin.stations+a;
	station134->id = 134;
	strcpy(station134->nomStation, "Britz-Süd");
	strcpy(station134->ligne, "U7");
	station134->nbCorrespondance=2;
	a++;
	station134->correspondance = malloc(sizeof(station*)*station134->nbCorrespondance);
	assert(station134->correspondance);

	station *station135 = metroBerlin.stations+a;
	station135->id = 135;
	strcpy(station135->nomStation, "Johannisthaler Chaussee");
	strcpy(station135->ligne, "U7");
	station135->nbCorrespondance=2;
	a++;
	station135->correspondance = malloc(sizeof(station*)*station135->nbCorrespondance);
	assert(station135->correspondance);

	station *station136 = metroBerlin.stations+a;
	station136->id = 136;
	strcpy(station136->nomStation, "Lipschitzallee");
	strcpy(station136->ligne, "U7");
	station136->nbCorrespondance=2;
	a++;
	station136->correspondance = malloc(sizeof(station*)*station136->nbCorrespondance);
	assert(station136->correspondance);

	station *station137 = metroBerlin.stations+a;
	station137->id = 137;
	strcpy(station137->nomStation, "Wutzkayallee");
	strcpy(station137->ligne, "U7");
	station137->nbCorrespondance=2;
	a++;
	station137->correspondance = malloc(sizeof(station*)*station137->nbCorrespondance);
	assert(station137->correspondance);

	station *station138 = metroBerlin.stations+a;
	station138->id = 138;
	strcpy(station138->nomStation, "Zwickaur Damm");
	strcpy(station138->ligne, "U7");
	station138->nbCorrespondance=2;
	a++;
	station138->correspondance = malloc(sizeof(station*)*station138->nbCorrespondance);
	assert(station138->correspondance);

	station *station139 = metroBerlin.stations+a;
	station139->id = 139;
	strcpy(station139->nomStation, "Rudow");
	strcpy(station139->ligne, "U7");
	station139->nbCorrespondance=1;
	a++;
	station139->correspondance = malloc(sizeof(station*)*station139->nbCorrespondance);
	assert(station139->correspondance);

	station *station140 = metroBerlin.stations+a;
	station140->id = 140;
	strcpy(station140->nomStation, "Wittenau");
	strcpy(station140->ligne, "U8");
	station140->nbCorrespondance=1;
	a++;
	station140->correspondance = malloc(sizeof(station*)*station140->nbCorrespondance);
	assert(station140->correspondance);

	station *station141 = metroBerlin.stations+a;
	station141->id = 141;
	strcpy(station141->nomStation, "Rathaus Reinickendorf");
	strcpy(station141->ligne, "U8");
	station141->nbCorrespondance=2;
	a++;
	station141->correspondance = malloc(sizeof(station*)*station141->nbCorrespondance);
	assert(station141->correspondance);

	station *station142 = metroBerlin.stations+a;
	station142->id = 142;
	strcpy(station142->nomStation, "Karl-Bonhoeffer-Nervenklinik");
	strcpy(station142->ligne, "U8");
	station142->nbCorrespondance=2;
	a++;
	station142->correspondance = malloc(sizeof(station*)*station142->nbCorrespondance);
	assert(station142->correspondance);

	station *station143 = metroBerlin.stations+a;
	station143->id = 143;
	strcpy(station143->nomStation, "Lindauer Allee");
	strcpy(station143->ligne, "U8");
	station143->nbCorrespondance=2;
	a++;
	station143->correspondance = malloc(sizeof(station*)*station143->nbCorrespondance);
	assert(station143->correspondance);

	station *station144 = metroBerlin.stations+a;
	station144->id = 144;
	strcpy(station144->nomStation, "Parcelsus-Bad");
	strcpy(station144->ligne, "U8");
	station144->nbCorrespondance=2;
	a++;
	station144->correspondance = malloc(sizeof(station*)*station144->nbCorrespondance);
	assert(station144->correspondance);

	station *station145 = metroBerlin.stations+a;
	station145->id = 145;
	strcpy(station145->nomStation, "Residenzstraße");
	strcpy(station145->ligne, "U8");
	station145->nbCorrespondance=2;
	a++;
	station145->correspondance = malloc(sizeof(station*)*station145->nbCorrespondance);
	assert(station145->correspondance);

	station *station146 = metroBerlin.stations+a;
	station146->id = 146;
	strcpy(station146->nomStation, "Franz-Neumann-Platz am Schäfersee");
	strcpy(station146->ligne, "U8");
	station146->nbCorrespondance=2;
	a++;
	station146->correspondance = malloc(sizeof(station*)*station146->nbCorrespondance);
	assert(station146->correspondance);

	station *station147 = metroBerlin.stations+a;
	station147->id = 147;
	strcpy(station147->nomStation, "Osloer Straße");
	strcpy(station147->ligne, "U8 U9");
	station147->nbCorrespondance=3;
	a++;
	station147->correspondance = malloc(sizeof(station*)*station147->nbCorrespondance);
	assert(station147->correspondance);

	station *station148 = metroBerlin.stations+a;
	station148->id = 148;
	strcpy(station148->nomStation, "Pankstraße");
	strcpy(station148->ligne, "U8");
	station148->nbCorrespondance=2;
	a++;
	station148->correspondance = malloc(sizeof(station*)*station148->nbCorrespondance);
	assert(station148->correspondance);

	station *station149 = metroBerlin.stations+a;
	station149->id = 149;
	strcpy(station149->nomStation, "Gesundbrunnen");
	strcpy(station149->ligne, "U8");
	station149->nbCorrespondance=2;
	a++;
	station149->correspondance = malloc(sizeof(station*)*station149->nbCorrespondance);
	assert(station149->correspondance);

	station *station150 = metroBerlin.stations+a;
	station150->id = 150;
	strcpy(station150->nomStation, "Voltastraße");
	strcpy(station150->ligne, "U8");
	station150->nbCorrespondance=2;
	a++;
	station150->correspondance = malloc(sizeof(station*)*station150->nbCorrespondance);
	assert(station150->correspondance);

	station *station151 = metroBerlin.stations+a;
	station151->id = 151;
	strcpy(station151->nomStation, "Bernauer Straße");
	strcpy(station151->ligne, "U8");
	station151->nbCorrespondance=2;
	a++;
	station151->correspondance = malloc(sizeof(station*)*station151->nbCorrespondance);
	assert(station151->correspondance);

	station *station152 = metroBerlin.stations+a;
	station152->id = 152;
	strcpy(station152->nomStation, "Rosenthaler Platz");
	strcpy(station152->ligne, "U8");
	station152->nbCorrespondance=2;
	a++;
	station152->correspondance = malloc(sizeof(station*)*station152->nbCorrespondance);
	assert(station152->correspondance);

	station *station153 = metroBerlin.stations+a;
	station153->id = 153;
	strcpy(station153->nomStation, "Weinmeisterstraße");
	strcpy(station153->ligne, "U8");
	station153->nbCorrespondance=2;
	a++;
	station153->correspondance = malloc(sizeof(station*)*station153->nbCorrespondance);
	assert(station153->correspondance);

	station *station154 = metroBerlin.stations+a;
	station154->id = 154;
	strcpy(station154->nomStation, "Jannowitzbrücke");
	strcpy(station154->ligne, "U8");
	station154->nbCorrespondance=2;
	a++;
	station154->correspondance = malloc(sizeof(station*)*station154->nbCorrespondance);
	assert(station154->correspondance);

	station *station155 = metroBerlin.stations+a;
	station155->id = 155;
	strcpy(station155->nomStation, "Heinrich-heine-Straße");
	strcpy(station155->ligne, "U8");
	station155->nbCorrespondance=2;
	a++;
	station155->correspondance = malloc(sizeof(station*)*station155->nbCorrespondance);
	assert(station155->correspondance);

	station *station156 = metroBerlin.stations+a;
	station156->id = 156;
	strcpy(station156->nomStation, "Morizplatz");
	strcpy(station156->ligne, "U8");
	station156->nbCorrespondance=2;
	a++;
	station156->correspondance = malloc(sizeof(station*)*station156->nbCorrespondance);
	assert(station156->correspondance);

	station *station157 = metroBerlin.stations+a;
	station157->id = 157;
	strcpy(station157->nomStation, "Schönleinstraße");
	strcpy(station157->ligne, "U8");
	station157->nbCorrespondance=2;
	a++;
	station157->correspondance = malloc(sizeof(station*)*station157->nbCorrespondance);
	assert(station157->correspondance);

	station *station158 = metroBerlin.stations+a;
	station158->id = 158;
	strcpy(station158->nomStation, "Boddinstraße");
	strcpy(station158->ligne, "U8");
	station158->nbCorrespondance=2;
	a++;
	station158->correspondance = malloc(sizeof(station*)*station158->nbCorrespondance);
	assert(station158->correspondance);

	station *station159 = metroBerlin.stations+a;
	station159->id = 159;
	strcpy(station159->nomStation, "Leinstraße");
	strcpy(station159->ligne, "U8");
	station159->nbCorrespondance=2;
	a++;
	station159->correspondance = malloc(sizeof(station*)*station159->nbCorrespondance);
	assert(station159->correspondance);

	station *station160 = metroBerlin.stations+a;
	station160->id = 160;
	strcpy(station160->nomStation, "Hermannstraße");
	strcpy(station160->ligne, "U8");
	station160->nbCorrespondance=1;
	a++;
	station160->correspondance = malloc(sizeof(station*)*station160->nbCorrespondance);
	assert(station160->correspondance);

	station *station161 = metroBerlin.stations+a;
	station161->id = 161;
	strcpy(station161->nomStation, "Rathaus Steglitz");
	strcpy(station161->ligne, "U9");
	station161->nbCorrespondance=1;
	a++;
	station161->correspondance = malloc(sizeof(station*)*station161->nbCorrespondance);
	assert(station161->correspondance);

	station *station162 = metroBerlin.stations+a;
	station162->id = 162;
	strcpy(station162->nomStation, "Schloßstraße");
	strcpy(station162->ligne, "U9");
	station162->nbCorrespondance=2;
	a++;
	station162->correspondance = malloc(sizeof(station*)*station162->nbCorrespondance);
	assert(station162->correspondance);

	station *station163 = metroBerlin.stations+a;
	station163->id = 163;
	strcpy(station163->nomStation, "Walter-Schreiber-Platz");
	strcpy(station163->ligne, "U9");
	station163->nbCorrespondance=2;
	a++;
	station163->correspondance = malloc(sizeof(station*)*station163->nbCorrespondance);
	assert(station163->correspondance);

	station *station164 = metroBerlin.stations+a;
	station164->id = 164;
	strcpy(station164->nomStation, "Friedrich-Wilhlm-Platz");
	strcpy(station164->ligne, "U9");
	station164->nbCorrespondance=2;
	a++;
	station164->correspondance = malloc(sizeof(station*)*station164->nbCorrespondance);
	assert(station164->correspondance);

	station *station165 = metroBerlin.stations+a;
	station165->id = 165;
	strcpy(station165->nomStation, "Bundesplatz");
	strcpy(station165->ligne, "U9");
	station165->nbCorrespondance=2;
	a++;
	station165->correspondance = malloc(sizeof(station*)*station165->nbCorrespondance);
	assert(station165->correspondance);

	station *station166 = metroBerlin.stations+a;
	station166->id = 166;
	strcpy(station166->nomStation, "Güntzelstraße");
	strcpy(station166->ligne, "U9");
	station166->nbCorrespondance=2;
	a++;
	station166->correspondance = malloc(sizeof(station*)*station166->nbCorrespondance);
	assert(station166->correspondance);

	station *station167 = metroBerlin.stations+a;
	station167->id = 167;
	strcpy(station167->nomStation, "Hansaplatz");
	strcpy(station167->ligne, "U9");
	station167->nbCorrespondance=2;
	a++;
	station167->correspondance = malloc(sizeof(station*)*station167->nbCorrespondance);
	assert(station167->correspondance);

	station *station168 = metroBerlin.stations+a;
	station168->id = 168;
	strcpy(station168->nomStation, "Turmstraße");
	strcpy(station168->ligne, "U9");
	station168->nbCorrespondance=2;
	a++;
	station168->correspondance = malloc(sizeof(station*)*station168->nbCorrespondance);
	assert(station168->correspondance);

	station *station169 = metroBerlin.stations+a;
	station169->id = 169;
	strcpy(station169->nomStation, "Birkenstraße");
	strcpy(station169->ligne, "U9");
	station169->nbCorrespondance=2;
	a++;
	station169->correspondance = malloc(sizeof(station*)*station169->nbCorrespondance);
	assert(station169->correspondance);

	station *station170 = metroBerlin.stations+a;
	station170->id = 170;
	strcpy(station170->nomStation, "Westhafen");
	strcpy(station170->ligne, "U9");
	station170->nbCorrespondance=2;
	a++;
	station170->correspondance = malloc(sizeof(station*)*station170->nbCorrespondance);
	assert(station170->correspondance);

	station *station171 = metroBerlin.stations+a;
	station171->id = 171;
	strcpy(station171->nomStation, "Amrumern Straße");
	strcpy(station171->ligne, "U9");
	station171->nbCorrespondance=2;
	a++;
	station171->correspondance = malloc(sizeof(station*)*station171->nbCorrespondance);
	assert(station171->correspondance);

	station *station172 = metroBerlin.stations+a;
	station172->id = 172;
	strcpy(station172->nomStation, "Nauener Platz");
	strcpy(station172->ligne, "U9");
	station172->nbCorrespondance=2;
	a++;
	station172->correspondance = malloc(sizeof(station*)*station172->nbCorrespondance);
	assert(station172->correspondance);

	station *station173 = metroBerlin.stations+a;
	station173->id = 173;
	strcpy(station173->nomStation, "Spittelmarkt");
	strcpy(station173->ligne, "U2");
	station173->nbCorrespondance=2;
	a++;
	station173->correspondance = malloc(sizeof(station*)*station173->nbCorrespondance);
	assert(station173->correspondance);



	// Correspondance Ligne 1

	*(station1->correspondance) = station2;

	*(station2->correspondance) = station1;
	*(station2->correspondance+1) = station3;
	*(station2->correspondance+2) = station23;
	*(station2->correspondance+3) = station50;

	*(station3->correspondance) = station23;
	*(station3->correspondance+1) = station4;
	*(station3->correspondance+2) = station2;
	*(station3->correspondance+3) = station51;

	*(station4->correspondance) = station3;
	*(station4->correspondance+1) = station5;
	*(station4->correspondance+2) = station24;
	*(station4->correspondance+3) = station52;

	*(station5->correspondance) = station4;
	*(station5->correspondance+1) = station6;

	*(station6->correspondance) = station5;
	*(station6->correspondance+1) = station7;
	*(station6->correspondance+2) = station24;
	*(station6->correspondance+3) = station25;

	*(station7->correspondance) = station6;
	*(station7->correspondance+1) = station8;
	*(station7->correspondance+2) = station124;
	*(station7->correspondance+3) = station96;

	*(station8->correspondance) = station7;
	*(station8->correspondance+1) = station9;
	*(station8->correspondance+2) = station96;
	*(station8->correspondance+3) = station95;

	*(station9->correspondance) = station8;
	*(station9->correspondance+1) = station10;

	*(station10->correspondance) = station9;
	*(station10->correspondance+1) = station11;
	*(station10->correspondance+2) = station156;
	*(station10->correspondance+3) = station157;

	*(station11->correspondance) = station10;
	*(station11->correspondance+1) = station12;

	*(station12->correspondance) = station11;
	*(station12->correspondance+1) = station13;

	*(station13->correspondance) = station12;


	// Correspondance Ligne 2

	*(station14->correspondance) = station15;

	*(station15->correspondance) = station14;
	*(station15->correspondance+1) = station16;

	*(station16->correspondance) = station15;
	*(station16->correspondance+1) = station17;

	*(station17->correspondance) = station16;
	*(station17->correspondance+1) = station18;

	*(station18->correspondance) = station17;
	*(station18->correspondance+1) = station19;

	*(station19->correspondance) = station18;
	*(station19->correspondance+1) = station20;

	*(station20->correspondance) = station19;
	*(station20->correspondance+1) = station21;
	*(station20->correspondance+2) = station116;
	*(station20->correspondance+3) = station117;

	*(station21->correspondance) = station20;
	*(station21->correspondance+1) = station22;

	*(station22->correspondance) = station21;
	*(station22->correspondance+1) = station23;

	*(station23->correspondance) = station22;
	*(station23->correspondance+1) = station167;
	*(station23->correspondance+2) = station2;
	*(station23->correspondance+3) = station3;

	*(station24->correspondance) = station4;
	*(station24->correspondance+1) = station6;

	*(station25->correspondance) = station6;
	*(station25->correspondance+1) = station26;

	*(station26->correspondance) = station25;
	*(station26->correspondance+1) = station27;

	*(station27->correspondance) = station26;
	*(station27->correspondance+1) = station28;

	*(station28->correspondance) = station94;
	*(station28->correspondance+1) = station27;
	*(station28->correspondance+2) = station29;
	*(station28->correspondance+3) = station95;

	*(station29->correspondance) = station28;
	*(station29->correspondance+1) = station173;

	*(station173->correspondance) = station29;
	*(station173->correspondance+1) = station30;

	*(station30->correspondance) = station173;
	*(station30->correspondance+1) = station31;

	*(station31->correspondance) = station30;
	*(station31->correspondance+1) = station32;

	*(station32->correspondance) = station58;
	*(station32->correspondance+1) = station59;
	*(station32->correspondance+2) = station31;
	*(station32->correspondance+3) = station33;
	*(station32->correspondance+4) = station153;
	*(station32->correspondance+5) = station154;

	*(station33->correspondance) = station32;
	*(station33->correspondance+1) = station34;

	*(station34->correspondance) = station33;
	*(station34->correspondance+1) = station35;

	*(station35->correspondance) = station36;
	*(station35->correspondance+1) = station34;

	*(station36->correspondance) = station35;
	*(station36->correspondance+1) = station37;

	*(station37->correspondance) = station36;
	*(station37->correspondance+1) = station38;

	*(station38->correspondance) = station37;


	// Correspondance Ligne 3

	*(station39->correspondance) = station40;

	*(station40->correspondance) = station39;
	*(station40->correspondance+1) = station41;

	*(station41->correspondance) = station40;
	*(station41->correspondance+1) = station42;

	*(station42->correspondance) = station41;
	*(station42->correspondance+1) = station43;

	*(station43->correspondance) = station42;
	*(station43->correspondance+1) = station44;

	*(station44->correspondance) = station43;
	*(station44->correspondance+1) = station45;

	*(station45->correspondance) = station44;
	*(station45->correspondance+1) = station46;

	*(station46->correspondance) = station45;
	*(station46->correspondance+1) = station47;

	*(station47->correspondance) = station46;
	*(station47->correspondance+1) = station48;

	*(station48->correspondance) = station47;
	*(station48->correspondance+1) = station49;
	*(station48->correspondance+2) = station119;
	*(station48->correspondance+3) = station120;

	*(station49->correspondance) = station48;
	*(station49->correspondance+1) = station50;

	*(station50->correspondance) = station49;
	*(station50->correspondance+1) = station51;
	*(station50->correspondance+2) = station2;
	*(station50->correspondance+3) = station160;

	*(station51->correspondance) = station50;
	*(station51->correspondance+1) = station3;


	// Correspondance Ligne U4

	*(station52->correspondance) = station4;
	*(station52->correspondance+1) = station53;

	*(station53->correspondance) = station52;
	*(station53->correspondance+1) = station54;
	*(station53->correspondance+2) = station121;
	*(station53->correspondance+3) = station122;

	*(station54->correspondance) = station53;
	*(station54->correspondance+1) = station55;

	*(station55->correspondance) = station54;


	// Corresponde Ligne U5

	*(station56->correspondance) = station57;

	*(station57->correspondance) = station56;
	*(station57->correspondance+1) = station58;

	*(station58->correspondance) = station57;
	*(station58->correspondance+1) = station32;

	*(station59->correspondance) = station32;
	*(station59->correspondance+1) = station60;

	*(station60->correspondance) = station59;
	*(station60->correspondance+1) = station61;

	*(station61->correspondance) = station60;
	*(station61->correspondance+1) = station61;

	*(station62->correspondance) = station61;
	*(station62->correspondance+1) = station63;

	*(station63->correspondance) = station62;
	*(station63->correspondance+1) = station64;

	*(station64->correspondance) = station63;
	*(station64->correspondance+1) = station65;

	*(station65->correspondance) = station64;
	*(station65->correspondance+1) = station66;

	*(station66->correspondance) = station65;
	*(station66->correspondance+1) = station67;

	*(station67->correspondance) = station66;
	*(station67->correspondance+1) = station68;

	*(station68->correspondance) = station67;
	*(station68->correspondance+1) = station69;

	*(station69->correspondance) = station68;
	*(station69->correspondance+1) = station70;

	*(station70->correspondance) = station69;
	*(station70->correspondance+1) = station71;

	*(station71->correspondance) = station70;
	*(station71->correspondance+1) = station72;

	*(station72->correspondance) = station71;
	*(station72->correspondance+1) = station73;

	*(station73->correspondance) = station72;
	*(station73->correspondance+1) = station74;

	*(station74->correspondance) = station73;
	*(station74->correspondance+1) = station75;

	*(station75->correspondance) = station74;
	*(station75->correspondance+1) = station76;

	*(station76->correspondance) = station75;
	*(station76->correspondance+1) = station77;

	*(station77->correspondance) = station76;


	// Correspondance Ligne U6

	*(station78->correspondance) = station79;

	*(station79->correspondance) = station78;
	*(station79->correspondance+1) = station80;

	*(station80->correspondance) = station79;
	*(station80->correspondance+1) = station81;

	*(station81->correspondance) = station82;
	*(station81->correspondance+1) = station80;

	*(station82->correspondance) = station81;
	*(station82->correspondance+1) = station83;

	*(station83->correspondance) = station82;
	*(station83->correspondance+1) = station84;

	*(station84->correspondance) = station83;
	*(station84->correspondance+1) = station85;

	*(station85->correspondance) = station84;
	*(station85->correspondance+1) = station86;

	*(station86->correspondance) = station85;
	*(station86->correspondance+1) = station87;

	*(station87->correspondance) = station86;
	*(station87->correspondance+1) = station88;
	*(station87->correspondance+2) = station171;
	*(station87->correspondance+3) = station172;

	*(station88->correspondance) = station87;
	*(station88->correspondance+1) = station89;

	*(station89->correspondance) = station88;
	*(station89->correspondance+1) = station90;

	*(station90->correspondance) = station89;
	*(station90->correspondance+1) = station91;

	*(station91->correspondance) = station90;
	*(station91->correspondance+1) = station92;

	*(station92->correspondance) = station91;
	*(station92->correspondance+1) = station93;

	*(station93->correspondance) = station92;
	*(station93->correspondance+1) = station94;

	*(station94->correspondance) = station93;
	*(station94->correspondance+1) = station28;

	*(station95->correspondance) = station28;
	*(station95->correspondance+1) = station8;

	*(station96->correspondance) = station8;
	*(station96->correspondance+1) = station97;
	*(station96->correspondance+2) = station7;
	*(station96->correspondance+3) = station125;

	*(station97->correspondance) = station96;
	*(station97->correspondance+1) = station98;

	*(station98->correspondance) = station97;
	*(station98->correspondance+1) = station98;

	*(station99->correspondance) = station98;
	*(station99->correspondance+1) = station100;

	*(station100->correspondance) = station99;
	*(station100->correspondance+1) = station101;

	*(station101->correspondance) = station100;
	*(station101->correspondance+1) = station102;

	*(station102->correspondance) = station101;
	*(station102->correspondance+1) = station103;

	*(station103->correspondance) = station102;
	*(station103->correspondance+1) = station104;

	*(station104->correspondance) = station103;


	// Correspondance Ligne U7

	*(station105->correspondance) = station106;

	*(station106->correspondance) = station105;
	*(station106->correspondance+1) = station107;

	*(station107->correspondance) = station106;
	*(station107->correspondance+1) = station108;

	*(station108->correspondance) = station107;
	*(station108->correspondance+1) = station109;

	*(station109->correspondance) = station108;
	*(station109->correspondance+1) = station110;

	*(station110->correspondance) = station109;
	*(station110->correspondance+1) = station111;

	*(station111->correspondance) = station110;
	*(station111->correspondance+1) = station112;

	*(station112->correspondance) = station111;
	*(station112->correspondance+1) = station113;

	*(station113->correspondance) = station112;
	*(station113->correspondance+1) = station114;

	*(station114->correspondance) = station113;
	*(station114->correspondance+1) = station115;

	*(station115->correspondance) = station114;
	*(station115->correspondance+1) = station116;

	*(station116->correspondance) = station115;
	*(station116->correspondance+1) = station20;

	*(station117->correspondance) = station20;
	*(station117->correspondance+1) = station118;

	*(station118->correspondance) = station117;
	*(station118->correspondance+1) = station119;

	*(station119->correspondance) = station118;
	*(station119->correspondance+1) = station48;

	*(station120->correspondance) = station48;
	*(station120->correspondance+1) = station121;

	*(station121->correspondance) = station120;
	*(station121->correspondance+1) = station53;
	*(station121->correspondance+2) = station160;
	*(station121->correspondance+3) = station165;

	*(station122->correspondance) = station53;
	*(station122->correspondance+1) = station123;

	*(station123->correspondance) = station122;
	*(station123->correspondance+1) = station124;

	*(station124->correspondance) = station123;
	*(station124->correspondance+1) = station7;

	*(station125->correspondance) = station96;
	*(station125->correspondance+1) = station126;

	*(station126->correspondance) = station125;
	*(station126->correspondance+1) = station127;

	*(station127->correspondance) = station126;
	*(station127->correspondance+1) = station128;
	*(station127->correspondance+2) = station157;
	*(station127->correspondance+3) = station158;

	*(station128->correspondance) = station127;
	*(station128->correspondance+1) = station129;

	*(station129->correspondance) = station128;
	*(station129->correspondance+1) = station130;

	*(station130->correspondance) = station129;
	*(station130->correspondance+1) = station131;

	*(station131->correspondance) = station130;
	*(station131->correspondance+1) = station132;

	*(station132->correspondance) = station131;
	*(station132->correspondance+1) = station133;

	*(station133->correspondance) = station132;
	*(station133->correspondance+1) = station134;

	*(station134->correspondance) = station133;
	*(station134->correspondance+1) = station135;

	*(station135->correspondance) = station134;
	*(station135->correspondance+1) = station136;

	*(station136->correspondance) = station135;
	*(station136->correspondance+1) = station137;

	*(station137->correspondance) = station136;
	*(station137->correspondance+1) = station138;

	*(station138->correspondance) = station137;
	*(station138->correspondance+1) = station139;

	*(station139->correspondance) = station138;


	// Correspondance Ligne U8

	*(station140->correspondance) = station141;

	*(station141->correspondance) = station140;
	*(station141->correspondance+1) = station142;

	*(station142->correspondance) = station141;
	*(station142->correspondance+1) = station143;

	*(station143->correspondance) = station142;
	*(station143->correspondance+1) = station144;

	*(station144->correspondance) = station144;
	*(station144->correspondance+1) = station145;

	*(station145->correspondance) = station144;
	*(station145->correspondance+1) = station146;

	*(station146->correspondance) = station145;
	*(station146->correspondance+1) = station147;

	*(station147->correspondance) = station146;
	*(station147->correspondance+1) = station148;
	*(station147->correspondance+2) = station172;

	*(station148->correspondance) = station147;
	*(station148->correspondance+1) = station149;

	*(station149->correspondance) = station148;
	*(station149->correspondance+1) = station150;

	*(station150->correspondance) = station149;
	*(station150->correspondance+1) = station151;

	*(station151->correspondance) = station150;
	*(station151->correspondance+1) = station152;

	*(station152->correspondance) = station151;
	*(station152->correspondance+1) = station153;

	*(station153->correspondance) = station152;
	*(station153->correspondance+1) = station32;

	*(station154->correspondance) = station32;
	*(station154->correspondance+1) = station155;

	*(station155->correspondance) = station154;
	*(station155->correspondance+1) = station156;

	*(station156->correspondance) = station155;
	*(station156->correspondance+1) = station10;

	*(station157->correspondance) = station10;
	*(station157->correspondance+1) = station127;

	*(station158->correspondance) = station127;
	*(station158->correspondance+1) = station159;

	*(station159->correspondance) = station158;
	*(station159->correspondance+1) = station160;

	*(station160->correspondance) = station159;


	// Correspondance Ligne U9

	*(station161->correspondance) = station162;

	*(station162->correspondance) = station161;
	*(station162->correspondance+1) = station163;

	*(station163->correspondance) = station162;
	*(station163->correspondance+1) = station164;

	*(station164->correspondance) = station163;
	*(station164->correspondance+1) = station165;

	*(station165->correspondance) = station164;
	*(station165->correspondance+1) = station121;

	*(station166->correspondance) = station121;
	*(station166->correspondance+1) = station50;

	*(station167->correspondance) = station23;
	*(station167->correspondance+1) = station168;

	*(station168->correspondance) = station167;
	*(station168->correspondance+1) = station169;

	*(station169->correspondance) = station168;
	*(station169->correspondance+1) = station170;

	*(station170->correspondance) = station169;
	*(station170->correspondance+1) = station171;

	*(station171->correspondance) = station170;
	*(station171->correspondance+1) = station87;

	*(station172->correspondance) = station87;
	*(station172->correspondance+1) = station147;
	return metroBerlin;
}

void afficheStation(metro m){
	int i;
	for(i=0; i < m.nbstations; i++){
		printf("La station %d se nomme : \033[4m%s\033[0m disponible sur la/les ligne(s) : %s.\n",i+1,(m.stations+i)->nomStation, (m.stations+i)->ligne);
	}
	//printf("test %d\n", (*((m.stations)->correspondance+0))->id);
	//printf("Nombre de correspondance de %s est : %d\n", (m.stations+18)->nomStation,(m.stations+(18))->nbCorrespondance);
}

void dijkstra(metro m, int ida, int idb){
	char fini = 1;
	int i;
	int b;
	int c;
	int poids;
	dijk liste[m.nbstations];
	// Init
	for(i=0; i<m.nbstations; i++){
		liste[i].dejaVu = 0;
		liste[i].poids = INT_MAX;
	}
	liste[ida].poids = 0;
	liste[ida].stationAvant = NULL;
	liste[ida].ligneActuel[1] = m.stations->ligne[1];
	liste[ida].dejaVu = 1;

	while(ida != idb){
		printf("%d %d\n", ida, idb);
		for(i=0; i<(m.stations+(i-1))->nbCorrespondance; i++){ 
			b= ((*((m.stations+ida)->correspondance+i))->id);
			printf("Nombre de correspondance de %s est : %d\n", (m.stations+ida)->nomStation,(m.stations+ida)->nbCorrespondance);
			printf("%d \n", b);
			poids = liste[ida].poids+1;
			//test corr dans ce cas poids++
			if(poids < liste[b].poids){
				liste[b].poids = poids;
				liste[b].stationAvant = m.stations+ida;
			}
		}
		poids = INT_MAX;
		for(i=0; i<m.nbstations;i++){
			//printf("%d <? %d \n", liste[i].poids, poids);
			if(!liste[i].dejaVu && liste[i].poids<poids){
				ida = i;
			}
		}
	}
}

void dijkstraPurSansModificationJulie(metro m, int ida, int idb){
	int i;
	int b;
	int poids;
	dijk liste[m.nbstations];

	// Initiation Dijkstra
	for(i=0;i<m.nbstations;i++){
		liste[i].dejaVu = 0;
		liste[i].poids = INT_MAX;
		liste[i].stationAvant = NULL;
	}
	liste[ida].poids = 0;
	liste[ida].ligneActuel[1] = m.stations->ligne[1];
	liste[ida].dejaVu = 1;

	//Dijkstra

	while(ida != idb){
		liste[ida].dejaVu = 1;
		printf("Debut while param : ida : %d idb : %d\n", ida, idb);
		printf("Nombre de correspondance ida : %d\n", (m.stations+ida)->nbCorrespondance);
		// Traitement des correspondances.
		for(i=0; i < (m.stations+ida)->nbCorrespondance; i++){
			b= ((*((m.stations+ida)->correspondance+i))->id-1);
			printf("traitement de la correspondance %d\n", b+1);

			// Erreur Potentiel, id-1 pour l'index 0 ? Trop de confusion. Note a moi même : faire le fucking début de graphes a 0 pour eviter la confusion.

			poids = liste[ida].poids+1;
			printf("%d < %d ?\n", poids, liste[b].poids);
			if(poids < liste[b].poids){
				liste[b].poids = poids;
				liste[b].stationAvant = m.stations+ida;
				printf("poids de %d = %d\n", b, liste[b].poids);
			}

		}
		// 
		poids = INT_MAX;
		for(i=0; i<m.nbstations;i++){
			if(!liste[i].dejaVu && liste[i].poids<poids){
				ida = i;
			}
		}	
	}
	i = idb;
	printf("%d\n", (liste[i].stationAvant)->id);
	// while(liste[i].stationAvant != NULL){
	// 	printf("%s ->", (m.stations+idb)->nomStation);
	// 	idb = (liste[i].stationAvant)->id;

	// }
	printf("Fin de l'algoritme\n");
}

int memeLigne(metro m, int ida, int idb){
	char temp1[11];
	char temp2[11];
	int i;
	int j;

	strcpy(temp1, (m.stations+ida)->ligne);
	strcpy(temp2, (m.stations+idb)->ligne);
	for(j=1; j < 11;j=j+3){
		for(i=1; i < 11;i=i+3){
			printf("%c =? %c\n", temp1[i], temp2[j]);
			if(temp1[i] == temp2[j])
				return 1;
		}
	}
	return 0;
}

int main(){
	metro metroBerlin = creerMetro();
	afficheStation(metroBerlin);
	//dijkstra(metroBerlin, 19, 7);
	dijkstraPurSansModificationJulie(metroBerlin, 1, 2);
}


