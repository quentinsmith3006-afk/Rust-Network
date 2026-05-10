use std::net;
use std::io::*;

fn main() {
    if let Ok(mut stream) = net::TcpStream::connect("127.0.0.1:9000") {
       println!("Connected to the server!");

       let buffer: &[u8] = &[65, 66, 67, 68];
       stream.write_all(buffer);
    }
}
