﻿#include "App.h"
///--------------------------------------------------------------------------------------
/// 
/// 03.12.2021
/// Гергелиджиу Евгений Викторович
/// 
///         Написать программу «Группа студентов». 
///         Программа получает следующие данные :
///         ▷ список студентов группы ,
///         ▷ список предметов для группы ,
///         ▷ таблицу оценок студентов группы по  всем предметам.
///         Данные вводятся из соответствующих файлов.Имена
///         файлов запрашивает программа.Программа выводит
///         следующие данные :
///         ▷ таблицу оценок студентов по предметам ,
///         ▷ средние оценки студентов ,
///         ▷ средние оценки по предметам ,
///         ▷ средний балл группы ,
///         ▷ максимальные и минимальные оценки по предметам с указанием студентов.
///         Разработать и  использовать в  программе классы :
///         «Группа» , «Студент» , «Предмет».
///         Атрибуты группы : название , список студентов , список предметов.
///         Атрибуты студента : имя , список оценок.
///         Атрибуты предмета : название.
///--------------------------------------------------------------------------------------


// Программа получает данные из трех файлов 
// Items.txt - список предметов
// Names.txt - список имен
// Surnames.txt - список фамилий

// В MyFuncttion - вспомогательные методы


int main()
{
    // Для рандома
    srand(time( NULL ) );
    //Русский язык
    setlocale( 0 , "rus" );

    Group p;
    p.fillStudentList();

    App::сhoice( p );



    /*Group::averageGradesInSubjects(p);
    std::cout << std::endl;
    Group::averageScoreOfStudents( p );
    std::cout << std::endl;
    Group::studentsGradesBySubject( p );
    std::cout << std::endl;
    Group::groupAverageScore( p );
    std::cout << std::endl;
    Group::minimumAndMaximumGrades( p );*/

}
