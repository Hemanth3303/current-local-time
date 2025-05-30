import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class CurrentTime {
	public static void main(String[] args) {

		LocalDateTime currentTime = LocalDateTime.now();
		DateTimeFormatter formatter24Hr = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
		DateTimeFormatter formatter12Hr = DateTimeFormatter.ofPattern("yyyy-MM-dd hh:mm:ss a");

		String formattedDate24Hr = currentTime.format(formatter24Hr);
		String formattedDate12Hr = currentTime.format(formatter12Hr);

		System.out.println("24 Hour Format: " + formattedDate24Hr);
		System.out.println("12 Hour Format: " + formattedDate12Hr);

	}
}
