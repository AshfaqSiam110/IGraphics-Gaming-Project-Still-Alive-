void move();


typedef struct SuperHero;

struct SuperHero
{
    char name[20];
    int health; 
    int hit_damage; 

    SuperHero()
    {
    }

    SuperHero(char name_main[],int health_main, int hit_damage_main)
    {
        strcpy(name, name_main);
        health = health_main;
        hit_damage = hit_damage_main;
    }

    void hit(SuperHero *s)
    {
        s->health = s->health - hit_damage;
    }

    void print_details()
    {
        printf("health of %s is %d\n\n",name,health);
    }

};


