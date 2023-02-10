class Vector{
public:
    int size = 0;
    Train(int ch_size);
    double coordinates[1000]; //максимальная размерность вектора - можно менять
    
    void create_vec(double ch_coordinates[size]){ //задает вектор
        for (int i = 0; i < size; i++){
            coordinates[i] = ch_coordinates[i];
        }
    };
    
    void change_vec(double ch_coordinates[size]){ //меняет вектор
        for (int i = 0; i < size; i++){
            coordinates[i] += ch_coordinates[i];
        }
    };
    
    void what_size(){ //какой размер у вектора
        return size;
    }
    
    void what_coordinates(){ //координаты вектора
        return coordinates[];
    }
    //TO DO -умножение, сложение, проверить на корректность
    void add()
    void mul()
};
