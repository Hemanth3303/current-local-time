use chrono::{DateTime, Local};

fn main() {
    let current_time: DateTime<Local> = Local::now();
    let time24 = current_time.format("%Y-%m-%d %H:%M:%S");
    let time12 = current_time.format("%Y-%m-%d %I:%M:%S %p");

    println!("24 Hour Format: {}", time24);
    println!("12 Hour Format: {}", time12);
}
