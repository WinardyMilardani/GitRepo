#include <stdio.h>

struct customer
{
    int customer_id[10];
    char customer_name[255];
    int age [10];
    char customer_cause_of_death[255];
    char customer_resting_place[255];
    int customer_died_year[10];
    struct room add;
};

struct room{
    int room_type_id[10];
    int room_name[10];
    int room_type_number[10];
};

void import_data_from_file(){
    File *fileplg = fopen("./customer_data.txt", "r");
    struct customer plg;

    while(!= EOF){
        fscanf(fileplg, "%d,%[^\n],%d,%[^\n],%[^\n],%d", plg.customer_id, plg.customer_name, plg.age, plg.customer_cause_of_death, plg.customer_died_year);
    }
    fclose(fileplg);
}

int main(){
    import_data_from_file();
    return 0;
}