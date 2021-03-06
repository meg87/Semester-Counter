import java.lang.Math;
import java.util.Date;

public class semester
{
	static long now = (new Date().getTime())/1000;

	public static double week(int start)
	{
		return Math.floor((now-start)/(60*60*24*7));
	}

	public static int percent(int start, int end)
	{
		return Math.round(((now-start)/(end-start))*100);
	}

	public static void main(String args[])
	{
		if (args[0].equals("-w"))
			System.out.println("Week number is "+week(Integer.parseInt(args[1])));
		else if (args[0].equals("-p"))
			System.out.println(percent(Integer.parseInt(args[1]), Integer.parseInt(args[2]))+"% of the semester is spend");
		else
			System.out.println("Sorry, command not found !");
	}
}
