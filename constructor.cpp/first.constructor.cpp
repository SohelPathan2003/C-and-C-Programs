/*
what is constructor ?
A constructor means is same like as function with title bit changes it is same like as function
without return type.

what are the benefits of constructor or why we use it ?
 There are two major benefit of constructor.

      1) no need to call constructor manually it will get executed at the time of object 
      creation.

      2) it is help us to create object of class if do not declare any constructor in class
      then compiler get created one default constructor means without constructor we cannot
      create object of class.

      this two are main benefit of constructor.

       
       why we use constructor ?
       to initialize the object of class, without constructor we cannot create object of a class.


       what are types of constructor?
       there are various types of constructor name as :
       1 default constructor      2 parameterized constructor      3 copy constructor 
       4 private constructor 



       1) default constructor: means those constructor who has same name like as class name 
       without argument.

       2)parametrized constructor :- means those constructor who has parameter or it contain 
       parameter 
           when we pass parameter to the constructor definition at time of object create we must have
           to pass argument to the constructor.

        3)overloaded constructor:- means we overload the constructor same name like as class name
        both constructor as a same name but there argument different or sequence of argument 
        parameter must be different.

        4) copy constructor


        Q.constructor recursion is possible in cpp.

        we cannot use recursion of constructor means if we try to performed recursion in constructor
        compiler get generated compile time error.

        Q. why we not use constructor recursion.
        constructor are located in heap whereas recursion is located at stack.
            Because to use constructor we have to create object whereas recursion need stack this are
            opposite to each other that why we cannot performed recursion in constructor.

        Q.can we write static constructor ?
        No we cannot write static constructor in cpp.
       
       Q. why we not use static constructor?
       because static member do not need any object or it will be allocated before object creation
     whereas constructor must have to create object.both are opposite to each other 
       that's why we cannot use static constructor.

       Q. can we override the constructor?
       no we cannot override the constructor in child class or derived class.

       Q why we cannot override the constructor?
       suppose we create two class name as A and B A is parent class and B is derived class or child.
       if create two class both are having same name constructor it will not possible because child class
       name and constructor name will not match because here we try to override parent class
       constructor  which was name as A whereas we trying to create A()name constructor in child 
       class B and we try create  there A() constructor that why compiler will generate error to us.



*/
