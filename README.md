# SunFollow

Maquette d'un panneau solaire qui se met face au soleil et le suit toute la journée.
Projet de BTS CIEL (option Informatique et Réseaux).

## Comment ça marche

- Deux photorésistances (LDR), une en haut et une en bas du panneau, mesurent la lumière reçue.
- Une carte Arduino UNO compare les deux valeurs (entrées A0 et A1).
- Si un capteur reçoit plus de lumière que l'autre, un servomoteur (broche D9) fait tourner le panneau jusqu'à ce que les deux reçoivent la même chose.
- Une petite cloison noire entre les capteurs fait de l'ombre sur celui qui est du côté opposé au soleil.

## Contenu du dépôt

| Dossier ou fichier | Rôle |
|---|---|
| `index.html` | Simulation 3D interactive de la maquette (soleil, panneau, capteurs, schéma, programme) |
| `arduino/sunfollow/sunfollow.ino` | Programme Arduino |
| `docs/SunFollow_budget_composants.xlsx` | Liste d'achats et budget des composants |

## Voir la simulation

Ouvre la page GitHub Pages du dépôt : `https://VOTRE-PSEUDO.github.io/sunfollow/`

## Matériel

Arduino UNO R3, 2 photorésistances GL5528, 2 résistances 10 kΩ, 1 servomoteur SG90, 1 mini panneau solaire, alimentation 5 V séparée pour le servo (masse commune avec l'Arduino), plaque d'essai, boîtier étanche, structure en bois ou PVC.

## Remarque

La simulation utilise un modèle simplifié (pas d'atmosphère, un seul axe). Les gains affichés servent à comparer un panneau mobile et un panneau fixe, pas à prévoir une production réelle.
"# sunfollow" 
"# sunfollow" 
"# sunfollow" 
"# sunfollow" 
"# sunfollow" 
