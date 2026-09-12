class ABC
{
    int a, b, c;

    void Operation(int choice)
    {
        a = 10;
        b = 20;

        switch(choice)
        {
            case 1:
                c = a + b;
                System.out.println("Addition = " + c);
                break;

            case 2:
                c = a - b;
                System.out.println("Subtraction = " + c);
                break;

            case 3:
                c = a * b;
                System.out.println("Multiplication = " + c);
                break;

            case 4:
                c = a / b;
                System.out.println("Division = " + c);
                break;

            default:
                System.out.println("Invalid choice");
        }
    }
}

class Demo
{
    public static void main(String[] args)
    {
        ABC obj = new ABC();

        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");

        obj.Operation(1);
    }
}