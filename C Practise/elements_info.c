#include <stdio.h>
int main()
{
    int AM;
    printf("Enter the Atomic Number of Element:");
    scanf("%d", &AM);

    switch (AM)
    {
    case 1:
        printf("Elements:Hydrogen\n");
        printf("Symbol: H\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 1 amu\n");
        printf("Group: IA\n");
        printf("Period: 1\n");
        printf("Block: S-block\n");
        break;

    case 2:
        printf("Elements: Helium\n");
        printf("Symbol: He\n");
        printf("Valency: 0\n");
        printf("Atomic Weight: 4 amu\n");
        printf("Group : VIIIA\n");
        printf("Period: 1\n");
        printf("Block: P-block\n");
        break;

    case 3:
        printf("Elements: Lithium\n");
        printf("Symbol: Li\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 7 amu\n");
        printf("Group : IA\n");
        printf("Period: 2\n");
        printf("Block:S-block\n");
        break;

    case 4:
        printf("Elements: Berylium\n");
        printf("Symbol: Be\n");
        printf("Valency: 2");
        printf("Atomic Weight: 9 amu\n");
        printf("Group : IIA\n");
        printf("Period: 2\n");
        printf("Block:S-block\n");
        break;

    case 5:
        printf("Elements: Boron\n");
        printf("Symbol: B\n");
        printf("Valency: 3\n");
        printf("Atomic Weight: 11 amu\n");
        printf("Group : IIIA\n");
        printf("Period: 2\n");
        printf("Block: P-block\n");
        break;

    case 6:
        printf("Elements: Carbon\n");
        printf("Symbol: C\n");
        printf("Valency: 4\n");
        printf("Atomic Weight: 12 amu\n");
        printf("Group: IVA\n");
        printf("Period: 2\n");
        printf("Block: P-block\n");
        break;

    case 7:
        printf("Elements: Nitrogen\n");
        printf("Symbol: N\n");
        printf("Valency: 3\n");
        printf("Atomic Weight: 14 amu\n");
        printf("Group: VA\n");
        printf("Period: 2\n");
        printf("Block: P-block\n");
        break;

    case 8:
        printf("Elements:  Oxygen\n");
        printf("Symbol: O\n");
        printf("Valency: 2\n");
        printf("Atomic Weight: 16 amu\n");
        printf("Group: VIA\n");
        printf("Period: 2\n");
        printf("Block: P-block\n");
        break;

    case 9:
        printf("Elements:  Flourine\n");
        printf("Symbol: F\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 19 amu\n");
        printf("Group: VIIA\n");
        printf("Period: 2\n");
        printf("Block: P-block \n");
        break;

    case 10:
        printf("Elements:  Neon\n");
        printf("Symbol: Ne\n");
        printf("Valency: 0");
        printf("Atomic Weight: 20 amu\n");
        printf("Group: VIIIA\n");
        printf("Period: 2\n");
        printf("Block: P-block \n");
        break;

    case 11:
        printf("Elements:  Sodium\n");
        printf("Symbol: Na\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 23 amu\n");
        printf("Group: IA\n");
        printf("Period: 3\n");
        printf("Block: S-block \n");
        break;
        ;

    case 12:
        printf("Elements: Magnesium\n");
        printf("Symbol: Mg\n");
        printf("Valency: 2");
        printf("Atomic Weight: 24 amu");
        printf("Group : IIA");
        printf("Period: 3");
        printf("Block: S-block");
        break;

    case 13:
        printf("Elements: Aluminium\n");
        printf("Symbol: Al\n");
        printf("Valency: 3\n");
        printf("Atomic Weight: 27 amu");
        printf("Group: IIIA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 14:
        printf("Elements: Silicon\n");
        printf("Symbol: Si\n");
        printf("Valency: 4\n");
        printf("Atomic Weight: 28 amu\n");
        printf("Group: IVA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 15:
        printf("Elements: Phosphorous\n");
        printf("Symbol: P\n");
        printf("Valency: 3\n");
        printf("Atomic Weight: 31 amu\n");
        printf("Group: VA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 16:
        printf("Elements: Sulphur\n");
        printf("Symbol: S\n");
        printf("Valency: 2\n");
        printf("Atomic Weight: 32 amu\n");
        printf("Group: VIA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 17:
        printf("Elements: Chlorine\n");
        printf("Symbol: Cl\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 35 amu\n");
        printf("Group: VIIA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 18:
        printf("Elements: Argon\n");
        printf("Symbol: Ar\n");
        printf("Valency: 0\n");
        printf("Atomic Weight: 40 amu\n");
        printf("Group: VIIIA\n");
        printf("Period: 3\n");
        printf("Block: P-block\n");
        break;

    case 19:
        printf("Elements: Potassium\n");
        printf("Symbol: K\n");
        printf("Valency: 1\n");
        printf("Atomic Weight: 39 amu\n");
        printf("Group: IA\n");
        printf("Period: 4\n");
        printf("Block: S-block\n");
        break;

    case 20:
        printf("Elements: Calcium\n");
        printf("Symbol: Ca\n");
        printf("Valency: 2\n");
        printf("Atomic Weight: 40 amu\n");
        printf("Group: IIA\n");
        printf("Period: 4\n");
        printf("Block: S-block\n");
        break;

    default:
        printf("Wrong Choice!\n");
    }

    return 0;
}