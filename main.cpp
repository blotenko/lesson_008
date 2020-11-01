
#include <iostream>
using namespace std;

/*
 Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). Вывести эле-
 менты K-го столбца данной матрицы.
 */

void taskMatrix_08(){
    int m,n,k;
    cout<<"m : ";
    cin>>m;
    cout<<"n : ";
    cin>>n;
    cout<<"k : ";
    cin>>k;

    int mas[m][n];
    for(int j = 0; j<m;j++)
    for( int i = 0; i<n;i++)
         mas[j][i] = i*j;
     
    for(int l = 0; l<m;l++) cout<< mas[k][l]<<" ";
}


/*
 Дана матрица размера M × N. Вывести ее элементы, расположенные в
 строках с четными номерами (2, 4, ...). Вывод элементов производить по
 строкам, условный оператор не использовать.
 */

void taskMatrix_09(){
    size_t M, N;
    cout <<"Enter M: "; cin >>M;
    cout <<"Enter N: "; cin >>N;
    
      double **a = new double*[M];
    for (size_t i = 0; i < M; i++)
      a[i]=new double[N];
    
    for (size_t i = 0; i < M; i++)
    {
    for (size_t j = 0; j < N; j++)
    {
    a[i][j]=rand()%9 + 1;
    cout <<a[i][j]<<" ";
    }
    cout << endl;
    }
    cout << endl;
    
    for (size_t i = 1; i < M; i+=2)
    {
    for (size_t j = 0; j < N; j++)
    cout <<a[i][j]<<" ";
    cout << endl;
    }
 
    for (size_t i = 0; i < M; i++)
    delete [] a[i];
    delete [] a;
 
system("pause");
    
}



/*
 Дана матрица размера MxN. Вывести ее элементы, расположенные в столбцах с нечетными номерами (1, 3, …). Вывод элементов производить по столбцам, условный оператор не использовать.
 */

void taskMatrix_10(){
    int m,n;
       cout << "m = ";
       cin >> m;
       cout << "n = ";
       cin >> n;
       int a[m][n];
       cout << "Случайная матрица порядка "<< m << "x" << n << ":\n";
       for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
         a[i][j]=rand() % 50;
         cout << a[i][j] << " ";
        }
       cout << "\n";
       }
       cout << "элементы в нечетных столбцах:\n";
       for(int j = 0;  j<n; j+=2) {
           for(int i = 0; i < m; i++)
           cout << a[i][j] << " ";
       cout << endl;
       }
}



/*
 Дана квадратная матрица A порядка M (M — нечетное число). Начи-
 ная с элемента A1,1 и перемещаясь по часовой стрелке, вывести все ее эле-
 менты по спирали: первая строка, последний столбец, последняя строка в
 обратном порядке, первый столбец в обратном порядке, оставшиеся эле-
 менты второй строки и т. д.; последним выводится центральный элемент
 матрицы.
 */


void taskMatrix_15(){
    
    int a[10][10];
     int m;
  
    cout<<"M : ";
   cin>>m;
  
     int i,j;
     for (i=0; i<m; ++i){
         printf("%i : \n", i+1);
         for (j=0; j<m; ++j){
             printf("%i : ", j+1);
             scanf("%i", &a[i][j]);
         }
     }
  
      int i2;
      for (i2=0; i2<m/2; ++i2){
          for (i=i2; i<m-i2; ++i){ cout<<a[i2][i];
              for (j=i2+1; j<=m-i2-1; ++j){ cout<<a[j][m-i2-1];}
              for (i=m-i2-2; i>=i2; --i){cout<<a[m-i2-1][i];}
              for (j=m-i2-2; j>=i2+1; --j){cout<<a[j][i2];}
              cout<<endl;;
      }
            cout<<a[m/2][m/2];
      }
}



/*
 Дана матрица размера M × N. Для каждой строки матрицы найти
 сумму ее элементов.
 */
void taskMatrix_19(){
    int M, N, sum = 0;
       cout << "Введите количество строк: ";
       cin >> M;
       cout << "Введите количество столбцов: ";
       cin >> N;
       /*Динамический двумерный массив*/
       int **mass = new int*[N];
       for (int i=0;i<N;i++)
       {
           mass[i] = new int[M];
       }
       /*Заполнение двумерного массива случайными числами*/
       for(int i=0;i<M;i++)
           for(int j=0;j<N;j++)
               mass[i][j] = rand()%11; // случайные числа от 0 до 10
       /*Вывод массива на экран*/
       for(int i=0;i<M;i++)
       {
           for(int j=0;j<N;j++)
           {
               cout << mass[i][j] << " ";
           }
           cout << "\n";
       }
       /*Считаем сумму в каждой строке и выводим на экран*/
       for(int i=0;i<M;i++)
       {
           for(int j=0;j<N;j++)
           {
               sum += mass[i][j];
           }
           cout << "Сумма в строке " << i+1 << ": " << sum << "\n";
           sum = 0; // обнуляем переменную summ каждый раз, когда переходим на следующую строку
       }
       cout << "\n";
}


/*
 Дана матрица размера M × N. Для каждого столбца матрицы найти
 произведение его элементов.
 */
void taskMatrix_20(){
    const int N = 10;
        int Matr[N][N], proizv[N];
        for (int j = 0; j < N; j++)
        {
            proizv[j] = 1;
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Matr[i][j] = rand() % 5 + 1;
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                proizv[j] *= Matr[i][j];
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout<<Matr[i][j];
            }
            cout<<endl;
        }
        for (int j = 0; j < N; j++)
        {
            cout<<proizv[j];
        }
}


/*
 Дана матрица размера M × N. Найти минимальный среди максималь-
 ных элементов ее столбцов.
 */
void taskMatrix_28(){
    int m, n, a, max = INT16_MIN;
       cout << "Введите целое положительное число M (число строк матрицы): ";
       cin >> m;
       cout << "Введите целое положительное число N (число cтолбцов матрицы матрицы): ";
       cin >> n;
       if (m > 0 && n > 0)
       {
           int *maximum = new int[m];
           // объявление двумерного динамического массива :
           int **tabl = new int*[m]; //строки
           for (int count = 0; count < m; count++)
               tabl[count] = new int[n]; //столбцы
    
    
           for (int stroka = 0; stroka < m; stroka++) // заполняем таблицу
           {
               for (int stolbec = 0; stolbec < n; stolbec++)
               {
                   cout << "Введите " << stolbec + 1 << " элемент для " << stroka + 1 << " строки : ";
                   cin >> a;
                   tabl[stroka][stolbec] = a; //Заполняем все столбцы с соответствующими строками
               }
           }
    
           cout << "\nПолучена следующая таблица:\n";
           for (int stroka = 0; stroka < m; stroka++)
           {
    
               for (int stolbec = 0; stolbec < n; stolbec++)
               {
                   cout << " " << tabl[stroka][stolbec] << "  ";
               }
               cout << endl;
           }
    
           for (int stroka = 0; stroka < m; stroka++)
           {
               for (int stolbec = 0; stolbec < n; stolbec++)
               {
                   if (tabl[stroka][stolbec] > max)
                   {
                       maximum[stroka] = tabl[stroka][stolbec];
                       max = tabl[stroka][stolbec];
                   }
               }
               max = INT16_MIN;
           }
           for (int stroka = 0; stroka < m; stroka++)
           {
               cout << "\nМаксимальный элемент в " << stroka + 1 << " строке: " << maximum[stroka];
           }
           int min = INT16_MAX;
           for (int stroka = 0; stroka < m; stroka++)
           {
               if (maximum[stroka] < min)
               {
                   min = maximum[stroka];
               }
           }
           cout << "\n\nМинимальный из максимальных элементов: " << min << endl;
           for (int count = 0; count < m; count++)
               delete[] tabl[count];
    
       }
       else cout << "Одно число, или оба числа не соответствуют параметрам (>0)";
}


/*
 Дана матрица размера M × N. В каждой ее строке найти количество
 элементов, меньших среднего арифметического всех элементов этой стро-
 ки.
 */
void taskMatrix_29(){
    size_t rows, cols;
      std::cout << "Rows: ";
      std::cin >> rows;
      std::cout << "Columns: ";
      std::cin >> cols;
      double **matrix = new double*[rows];
      int c = 0;
      for(int i = 0; i < rows; i++)
      {
          matrix[i] = new double[cols];
          double sum = 0.0;
          for(int j = 0; j < cols; j++)
          {
              std::cout<< (matrix[i][j] = rand() * 1e-4);
              sum += matrix[i][j];
          }
          for(int j = 0; j < cols; j++)
              if (matrix[i][j] < (sum / cols))
                  c++;
          std::cout << " | Avg: " << (sum / cols) << std::endl;
      }
      std::cout << "Count: " << c << std::endl;
      for(int i = 0; i < rows; i++)
          delete [] matrix[i];
    delete [] matrix;
}

/*
 Дана матрица размера M × N. В каждом ее столбце найти количество
 элементов, больших среднего арифметического всех элементов этого
 столбца.
 */
void taskMatrix_26(){
    int n, m, index = 0;
       double min, product;
       cout << "Enter a matrix size:\n";
       cout << "n = ";
       cin >> n;
       cout << "m = ";
       cin >> m;
       double** a = new double*[n];
       for (int i = 0; i < n; i++) {
           a[i] = new double[m];
       }
       cout << "Enter a matrix:\n";
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++) {
               cin >> a[i][j];
           }
       }
    int DBL_MAX = 0;
       min = DBL_MAX;
       for (int j = 0; j < m; j++) {
           product = 1.0;
           for (int i = 0; i < n; i++) {
                product *= a[i][j];
           }
           if (product < min) {
              min = product;
              index = j;
           }
       }
       cout << "\nOutput of the program:\n\n";
       cout << "Found column number: " << ++index << "\n";
       cout << "Found minimum product: " << min << "\n";
       for (int i = 0; i < n; i++) {
           delete [] a[i];
       }
       delete [] a;
}


/*
 Дана целочисленная матрица размера M × N. Найти количество ее
 строк, все элементы которых различны.
 */
void taskMatrix_38(){
    int m, n, count = 0;
        int stop;
        cout << "rows number (m) : ";
        cin >> m;
        cout << "cols numbers (n) : ";
        cin >> n;
        
        int** matr = new int*[m];
        for(int i = 0; i < m; i++){
            matr[i] = new int[n];
        }
        
        // заполнение и вывод матрицы
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                matr[i][j] = rand() % 11;
                cout << matr[i][j] << "\t";
            }
            cout << endl;
        }
        
        // подсчет числа уникальных строк
        for(int k = 0; k < m; k++){
            stop = 0;
            for(int i = 0; i < n - 1 && !stop; i++)
            for(int j = i + 1; j < n; j++){
                if(matr[k][i] == matr[k][j]){
                    stop = 1;
                    break;
                }
                if(j == n - 1 && i == n - 2){
                    count++;
                    stop = 1;
                    break;
                }
            }
        }
        
        cout << "unique rows count : " << count << endl;
        for(int i = 0; i < m; i++){
            delete[] matr[i];
        }
        delete[] matr;
}

/*
 Дана целочисленная матрица размера M × N. Найти количество ее
 столбцов, все элементы которых различны.
 */
void taskMatrix_39(){
    const int M1 = 10;
       const int N1 = 10;
    
       int arr[M1][N1];
       bool priz = true;
       int ch = 0, cs = 0, n, m;
       cout << "Введите размерность массива " << endl;
       cin >> n >> m;
    
       cout << "Дана целочисленная матрица: " << endl;
    
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
    
               arr[i][j] = rand() % 10 - rand() % 10;
               cout << arr[i][j] << "\t";
    
           }
    
           cout << "\n";
       }
       //алгоритм
       for (int i = 0; i < n; i++)
       {
           priz = true;
           for (int j = 0; j < m -1; j++)
           {
               if (arr[i][j] == arr[i][j + 1])
               {
                   priz = false;
                   break;
               }
    
           }
           if (priz == true)
           {
               ch++;
           }
       }
       for (int i = 0; i < m; i++)
       {
           priz = true;
           for (int j = 0; j < n-1 ; j++)
           {
               if (arr[i][j] == arr[i + 1][j])
               {
                   priz = false;
                   break;
               }
    
           }
           if (priz == true)
           {
               cs++;
           }
       }
    
    
    
       cout << "Количество строк с различными элементами = " << ch << endl;
       cout << "Количество столбцов с различыми элементами = " << cs << endl;
    
}

/*
 Дана целочисленная матрица размера M × N. Найти номер последней
 из ее строк, содержащих максимальное количество одинаковых элементов.
 */
void taskMatrix_40(){
    const int M = 6;
        const int N = 8;
     
        int mas[N][M];
        int i = 0;
        for (int j = 0; j < M; j++)
            for (int i = 0; i < N; i++)
                mas[j][i] = rand() % 10;
     
        for (int j = 0; j < M; j++)
        {
            for (int i = 0; i < N; i++)
                cout << mas[j][i] << " ";
            cout << endl;
        }
        int otvet = 0, t = 0, temp = 0, count = 0, totalCount = 0;
        for (int z = 0; z < N; z++)
        {
            for (int j = 0; j < M; j++)
            {
                temp = mas[j][i];
                int index = j;
                for (int k = index + 1; k < M; k++)
                {
                    if (temp == mas[++index][i])
                    {
                        count++;
                    }
                }
                if (otvet < count)
                {
                    otvet = count + 1;
                }
                count = 0;
                if (totalCount <= otvet)
                {
                    totalCount = otvet;
                    t = i;
                }
                otvet = 0;
            }
            i++;
        }
        
        cout << "Otvet: " << totalCount << endl;
        cout << "Nomer stolbtca: " << t+1 << endl;
}

/*
 Дана матрица размера M × N и целые числа K1 и K2 (1 ≤ K1 < K2 ≤ N).
 Поменять местами столбцы матрицы с номерами K1 и K2.
 */
int m,n,i,j,l,k,smax,smin,i_yes,i_cont ;
     int **a = new int* [100];
int *str = new int[100];
void taskMatrix_48(){
    cout <<"Введите количество строк n= " ;
          cin >> n;
         cout <<endl ;
         cout <<"Введите количество столбцов m= " ;
          cin >> m;
         cout <<endl ;
         //n=4;
         cout <<"Введите количество повторений матриц = " ;
          cin >> i_cont;
         cout <<endl ;
         //m=5;
         //n=4;
         //i_cont=10;
         for ( i = 0; i < 100; i++) {
         a[i] = new int [i + 1];
         }
         for(l=0;l<=i_cont;l++)
         {
         for (i = 1; i <= n; i++)
         {
         for (j = 1; j <= m; j++) {
         a[i][j]=0.001*rand();
         if(a[i][j]<10)
             cout << a[i][j]<<"  " ;
         else
         cout << a[i][j]<<" " ;
             }
         cout << endl;
              }
     // Поиск максимальных по строкам
         for (i = 1; i <= n; i++)
         {
         smax=a[i][1];
         str[i]=1;
         for (j = 1; j <= m; j++)
         if(a[i][j]>smax){smax=a[i][j]; str[i]=j;}
         }
         i_yes=0;
         for (j = 1; j <= m; j++)
         {
         smin=a[1][j];
         k=1;
         for (i = 1; i <= n; i++)
             if(a[i][j]<smin){smin=a[i][j];k=i;}
             if (str[k]==j)
             {
             cout <<"Элемент найден "<<"a("<< k<<","<< j<<")="<<a[k][j] << endl;
             i_yes=1;
             }
         }
         if(i_yes==0)
         cout <<"Элемент не найден"<< endl;
  
         }
         delete [] str;
         for (i = 0; i < 100; i++)
         delete [] a[i];
}

/*
 
 */
void taskMatrix_49(){
    const long m=7, n=5;
    long a[m][n], i, j, min, max, x, l, r = 0;
        for (i=0; i<m; i++)
        {
            printf("\n\n");
            for (j=0; j<n; j++)
               {
                a[i][j]=25+rand()%56;
                   printf("%ld\t",a[i][j]);
                   
               }
        }
        //ищем min и max, меняем местами
        for (i=0; i<m; i++)
        {
           min=999999;
           max=0;
           for (j=0; j<n; j++)
           {
            if (j==n) {x=a[i][l]; a[i][l]=a[i][r]; a[i][r]=x;}
            if (min>a[i][j]) {min=a[i][j]; l=j;}
            if (max<a[i][j]) {max=a[i][j]; r=j;}
           }
        }
        printf("\n\n");
        //выводим то что получилось
        for (i=0; i<m; i++)
        {
            printf("\n\n");
            for (j=0; j<n; j++)
               {
                printf("%d\t",a[i][j]);
               }
        }
   cout<<endl<<endl;
}

/*
 
 */
void taskMatrix_44(){
    int n, m, imin, min, h, s, j, i, a[50][50];
       
       cout << "n = "; cin >> n;
       cout << "m = "; cin >> m;
       
       for (i = 0; i < n; i++)
       {
                   cout<<"Vvedite 1 dlya ruchnogo vvoda. Vvedite 2 dlya avomaticheskogo zapolneniya.";
                   cout<<endl;
                   cin>>s;
                   system("cls");
                   if (s==1)
                   for (i = 0; i < n; i++)
           for (j = 0; j < m; j++)
           {
               cout << "a[" << i << "][" << j << "] = ";
               cin >> a[i][j];
                                   }
               else if (s==2)
                           for (i = 0; i < n; i++)
                                   for (j = 0; j < m; j++)
                                           a[i][j]=rand()%8-3;
       }
           for (i = 0; i < n; i++)
           {
                   for (j = 0; j < m; j++)
                   
                           cout<<a[i][j]<<"\t";
                  
                   cout<<endl;}
    
           h=0;
           for (i=0;i<n;i++)
    
           {   for (j=0;j<m;j++)
    
                   if (a[i][j]<a[i][j+1])
                       h++;}
                   min=a[imin][0];
    
                   for (j=0;j<m;j++)
                   {
                   if (a[i][j]<min)
                       min=a[imin][j];
                   cout<<"a["<<imin<<"]="<<min<<endl;
                   }
}

/*
 Дана матрица размера M × N (M и N — четные числа). Поменять мес-
 тами левую нижнюю и правую верхнюю четверти матрицы.
 */
void taskMatrix_58(){
    int M, N;
       cout << "M="; cin >> M;
       
       do
       {
       cout << "N="; cin >> N;
       if (N%2!=0) cout << "N - even. Repeat please...\n";
       }
       while (N%2!=0);
       
         double **a = new double*[M];
       for (int i = 0; i < M; i++)
          a[i]=new double[N];
       
       for (int i = 0; i < M; i++)
       {
       for (int j = 0; j < N; j++)
       {
       a[i][j]=rand()%9 + 1;
       cout << a[i][j] << " ";
       }
       cout << "\n";
       }
       cout << "\n";
       
       for (int i = 0; i < M; i++)
       for (int j = 0; j < N/2; j++)
       swap (a[i][j],a[i][j+N/2]);
       
       for (int i = 0; i < M; i++)
       {
       for (int j = 0; j < N; j++)
       cout << a[i][j] << " ";
       
       cout <<"\n";
       }
    
       for (int i = 0; i < M; i++)
       delete[]a[i];
       delete[]a;
    
}

/*
 Дана матрица размера M × N. Зеркально отразить ее элементы отно-
 сительно горизонтальной оси симметрии матрицы (при этом поменяются
 местами строки с номерами 1 и M, 2 и M – 1 и т. д.).
 */
void taskMatrix_59(){
    int n, m, i, j;
        
        cin >> n >> m;
        
        int** matrix = new int *[n];
        for(i = 0; i < n; ++i)
            matrix[i] = new int [m];
        
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                matrix[i][j] = rand() % 10;
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        
        int* tmp;
        for(i = 0; i < n/2; ++i)
        {
            tmp = matrix[i];
            matrix[i] = matrix[n-i-1];
            matrix[n-i-1] = tmp;
        }
        
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            cout << matrix[i][j] << " ";
            cout << "\n";
        }
        
        for(i = 0; i < n; ++i)
            delete[] matrix[i];
        delete[] matrix;
     
}

/*
 Дана матрица размера M × N. Зеркально отразить ее элементы отно-
 сительно вертикальной оси симметрии матрицы (при этом поменяются
 местами столбцы с номерами 1 и N, 2 и N – 1 и т. д.).
 */
void taskMatrix_60(){
    const int n = 7;
        int i, j;
        int matr[n][n];
        for(i = 0; i < n; ++i)
            for(j = 0; j < n; ++j)
                matr[i][j] = (i + 1) * 10 + j + 1;
        for(i = 0; i < n; ++i, std::cout<<std::endl)
            for(j = 0; j < n; ++j)
                std::cout<<matr[i][j]<<' ';
     
        std::cout<<std::endl;
        for(i = 0; i<n; ++i)
        {   for(j = n-1; j>=0; --j)
            {   std::cout<<matr[i][j]<<' ';
            }
            std::cout<<std::endl;
        }
}

/*
 
 */
void taskMatrix_68(){
    int arr[6][10], k;
       cout << "Исходный массив: \n";
       for (int i = 0; i < 5; i++)
       {
           for (int j = 0; j < 10; j++)
           {
               arr[i][j] = rand() % 9 + 1;
               cout << arr[i][j] << " ";
           }
           cout << "\n";
       }
       cout << "Введи k из диапазона [0,5]: ";
       cin >> k;
       for (int i = 5; i > k-1; i--)
       for (int j = 0; j < 10; j++)
           arr[i][j] = arr[i - 1][j];
       
       for (int j = 0; j < 10; j++)
           arr[k-1][j] = 0;
    
       cout << "Полученный массив: \n";
       for (int i = 0; i < 6; i++)
       {
           for (int j = 0; j < 10; j++)
               cout << arr[i][j] << " ";
               cout << "\n";
       }
}

/*
 Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). После
 столбца матрицы с номером K вставить столбец из единиц.
 */
void taskMatrix_69(){
    int m=0,n=0,k=0;
     
        cout << "Enter the size of array M x N: ";
        cin >> m >> n;
        int **mass=new int*[m];
        for (int i=0; i < m; i++)
            *(mass+i)=new int[n];
     
        for (int i=0;i<m;i++)
            for(int j=0; j<n;j++)
                *(*(mass+i)+j)=rand()%m*n;
     
        for (int i=0;i<m;i++){
            for(int j=0; j<n;j++)
                cout<<*(*(mass+i)+j);
        cout<<endl;
        }
        cout << endl << "Enter a number of col. to delete: ";
        cin >> k;
     
        int **mass_new=new int*[m];
        for (int i=0; i < m; i++)
            *(mass_new+i)=new int[n-1];
     
     
     
                for (int i=0;i<m;i++)
                    for(int j=0,jn=0; j<n-1;j++,jn++)
                    {
                        if(jn==k)
                            jn++;
                        *(*(mass_new+i)+j)=*(*(mass+i)+jn);
                    }
     
            cout << endl;
            for (int i=0;i<m;i++){
            for(int j=0; j<n-1;j++)
                cout<<*(*(mass_new+i)+j);
            cout << endl;
            }
       
            delete [] mass;
            delete [] mass_new;
}


/*
 Дана матрица размера M × N. Продублировать строку матрицы, со-
 держащую ее максимальный элемент.
 */
const int MX_N = 100;
int A[MX_N][MX_N];
void taskMatrix_70(){
    int n, k, p;
       cin >> n >> k >> p;
       k--; p--;
       for (int i = 0; i < n; ++i)
           for (int j = 0; j < n; ++j)
               cin >> A[i][j];
       cout << "k row:" << endl;
       for (int i = 0; i < n; ++i)
           cout << A[k][i] << " ";
       cout << endl << "p col:" << endl;
           for (int i = 0; i < n; ++i)
           cout << A[i][p] << " ";
       cout << endl;
}

/*
 Дана матрица размера M × N. Упорядочить ее строки так, чтобы их
 минимальные элементы образовывали убывающую последовательность.
 */

void taskMatrix_78(){
    int m, n;
       cout << "Enter a matrix size:\n";
       cout << "m = ";
       cin >> m;
       cout << "n = ";
       cin >> n;
       int** a = new int*[m];
    
    
    
       //const int n = 4;
       //const int m = 5;
    
       int i, j, mat[n][m];
       for(i = 0; i < n; ++i){
           for(j = 0; j < m; ++j){
               mat[i][j] = 10 + rand() % 10;
               std::cout << mat[i][j] << ' ';
           }
           std::cout << std::endl;
       }
       std::cout << std::endl;
    
       //максимальные элементы столбцов
       int maxs[m];
       for(j = 0; j < m; ++j){
           maxs[j] = mat[0][j];
           for(i = 1; i < n; ++i){
               if(mat[i][j] > maxs[j])
                   maxs[j] = mat[i][j];
           }
       }
    
       //выборочная сортировка столбцов
       int k;
       for(i = 0; i < m; ++i){
           k = i;
           for(j = i + 1; j < m; ++j){
               if(maxs[j] > maxs[k])
                   k = j;
           }
    
           if(i != k){
               std::swap(maxs[i], maxs[k]);
               for(j = 0; j < n; ++j)
                   std::swap(mat[j][i], mat[j][k]);
           }
       }
    
       //вывод
       for(i = 0; i < n; ++i){
           for(j = 0; j < m; ++j)
               std::cout << mat[i][j] << ' ';
           std::cout << std::endl;
       }
    
}

/*
 Дана матрица размера M × N. Упорядочить ее столбцы так, чтобы их
 максимальные элементы образовывали возрастающую последователь-
 ность.
 */

int N;
  int GetValueMatrixRowMin(int mat[10][10], int x){
    int j,min=0;
    if (x>=0){
        for (j=0; j<N; ++j){
            if (mat[x][j]<mat[x][min]) min=j;
        }
    }
    return mat[x][min];
}
 void taskMatrix_79(){

    int a[10][10];
    int m;
 
    printf("M: ");
    scanf("%i",&m);
    printf("N: ");
    scanf("%i",&N);
 
    int i,j;
    for (i=0; i<m; ++i){
        printf("%i : \n", i+1);
        for (j=0; j<N; ++j){
            printf("%i : ", j+1);
            scanf("%i", &a[i][j]);
        }
    }
 
    int m2=m,i2;
        for (i=0; i<m-1; ++i){
            i2=0;
            --m2;
            while (i2<m2){
                if (GetValueMatrixRowMin(a,i2)<GetValueMatrixRowMin(a,i2+1)){
                    for (j=0;j<N; ++j) {
                        a[i2][j]+=a[i2+1][j];
                        a[i2+1][j]=a[i2][j]-a[i2+1][j];
                        a[i2][j]=a[i2][j]-a[i2+1][j];
                    }
                }
                ++i2;
            }
        }
 
    for (i=0; i<m; ++i){
        printf(" : %i_",GetValueMatrixRowMin(a,i));
           for (j=0; j<N; ++j) printf(" : %i", a[i][j]);
           printf(" : \n");
       }
 
}


/*
 Дана квадратная матрица A порядка M. Найти сумму элементов ее
 главной диагонали, то есть диагонали, содержащей следующие элементы:
 A1,1, A2,2, A3,3, ..., AM,M.
 */
void taskMatrix_80(){
    int i, j, M;
    float  A[10][10], fRes;
     
    M = 5;
    fRes  = 0;
     
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            A[i][j] = i + j;
            printf("A[%d][%d] = %f   ", i, j, A[i][j]);
        }
        printf("\r\n");
    }
     
    for(i = 0; i < M; i++)
    {
        fRes = fRes + A[i][i];
    }
     
    printf("fRes = %f\r\n", fRes);


}
/*
 Дана квадратная матрица A порядка M. Найти максимальный элемент
 для каждой ее диагонали, параллельной побочной (начиная с одноэле-
 ментной диагонали A1,1).
 */
void taskMatrix_87(){
    int m;
        cout<<" M : ";
        cin>>m;
        int A[m][m];
        for(int i = 0; i<m; i++){
            for(int j = 0; j<m; j++){
                cin>>A[i][j];
            }
        }
        int max[2*m-1];
        for(int i = 0; i<2*m-1; i++){
            max[i] = INT_MIN;
            
        }
            cout<<endl;
            int z = 0;
        for(int k = m - 1; k>=-m+1; k--){
            for(int i = 0 ; i<m; i++){
                for(int j = 0; j<m; j++){
                    if(i==j+k){
                        if(A[i][j]>max[z]){
                            max[z] = A[i][j];
                        
                        }
                    }
                }
            }
            z++;
        }
            cout<<endl;
            cout<< " max : ";
        for(int i = z-1; i>=0; i--){
            cout<<max[i]<<" ";
        }
}

/*
 Дана квадратная матрица A порядка M. Найти минимальный элемент
 для каждой ее диагонали, параллельной главной (начиная с одноэлемент-
 ной диагонали A1,M).
 */
void taskMatrix_86(){
    int i,j,jj,m,imin,jmin;
    cout << "Enter M: ";
    cin >> m;
    int **a = new int *[m];
    for (i=0; i<m; i++) {
        a[i] = new int [m];
        for (j=0; j<m; j++)
            a[i][j] = rand() % 10;
        }
    for (i=0; i<m; i++){
        for (j=0; j<m; j++)
            cout << a[i][j] << " ";
        cout << endl;
        }
    cout << endl;
    for (jj=0; jj<m; jj++){
        for (imin=0, jmin=j=jj, i=0; i<m, j>=0; i++, j--)
            if (a[i][j] < a[imin][jmin]){
                imin = i;
                jmin = j;
                }
        cout << endl << "Min element na " << jj+1 << " diagonali = " << a[imin][jmin];
        }
    for (jj=1; jj<m; jj++){
        for (imin=jj, j=jmin=m-1, i=jj; (i<m && j>=0); i++, j--)
            if (a[i][j] < a[imin][jmin]){
                imin = i;
                jmin = j;
                }
        cout << endl << "Min element na " << m+jj << " diagonali = " << a[imin][jmin];
        }
}

/*
 Дана квадратная матрица A порядка M. Повернуть ее на угол 180°
 (при этом элемент A1,1 поменяется местами с AM,M, элемент A1,2 — с AM,M–1
 и т. д.). Вспомогательную матрицу не использовать.
 */
void taskMatrix_98(){
    int M;
       cout <<"Enter M: "; cin >>M;
       
         double **a = new double*[M];
       for (int i = 0; i < M; i++)
            a[i]=new double[M];
       
       for (int i = 0; i < M; i++)
       {
       for (int j = 0; j < M; j++)
       {
         a[i][j]=rand()%9+ 1;
         cout <<a[i][j]<<" ";
       }
       cout <<endl;
       }
       cout <<endl;
       
       for (int i = 0; i < M/2; i++)
       swap (a[i], a[M-1-i]);
       for (int i = 0; i < M; i++)
       for (int j = 0; j < M/2; j++)
       swap (a[i][j], a[i][M-1-j]);
       
       for (int i = 0; i < M; i++)
       {
       for (int j = 0; j < M; j++)
       cout <<a[i][j]<<" ";
       cout <<endl;
       }
       
       for (int i = 0; i < M; i++)
       delete [] a[i];
       delete [] a;
}

/*
 Дана квадратная матрица A порядка M. Повернуть ее на угол 90° в
 отрицательном направлении, то есть по часовой стрелке (при этом элемент
 A1,1 перейдет в A1,M, элемент A1,M — в AM,M и т. д.). Вспомогательную мат-
 рицу не использовать.
 */
void taskMatrix_100(){
    int n;
        cout << "Enter a matrix size:\n";
        cin >> n;
        int** a = new int*[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new int[n];
        }
        cout << "Enter a matrix:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Target matrix:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[n-j-1][i] << " ";
            }
            cout << "\n";
        }
        for (int i = 0; i < n; i++)
        {
            delete [] a[i];
        }
        delete [] a;
}

int main() {
    taskMatrix_100();
    
    return 0;
}

