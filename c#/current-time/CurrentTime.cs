class CurrentTime
{
	static void Main()
	{
		DateTime currentTime = DateTime.Now;

		Console.WriteLine("24 Hour Format: " + currentTime.ToString("yyyy-MM-dd HH:mm:ss"));
		Console.WriteLine("12 Hour Format: " + currentTime.ToString("yyyy-MM-dd hh:mm:ss tt"));
	}

}