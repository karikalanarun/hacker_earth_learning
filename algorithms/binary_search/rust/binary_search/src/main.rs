use std::io::stdin;


fn binary_search (arr: &Vec<i32>, element: i32, low: i32, high: i32) -> i32{
    if high < low { return -1; }
    let mid = (low + high) / 2;
    let mid_element = arr[mid as usize];
    if mid_element == element { return mid; }
    if mid_element > element { return binary_search(arr, element, low, mid-1); }
    binary_search(arr, element, mid+1, high)
}

fn main() {
    let mut no_of_elements = String::new();
    stdin().read_line(&mut no_of_elements).ok();
    let length = no_of_elements.trim().parse::<i32>().unwrap();
    let mut element_arr = vec![0; length as usize];
    let mut elements:String = "".to_string();
    stdin().read_line(&mut elements).ok();
    let split = elements.split(" ");
    for (i, element) in split.enumerate() {
        element_arr[i] = element.trim().parse::<i32>().unwrap();
    }
    element_arr.sort();
    let mut num_of_queries_in_string = String::new();
    stdin().read_line(&mut num_of_queries_in_string).ok();

    for _i in 0..num_of_queries_in_string.trim().parse::<i32>().unwrap() {
        let mut q_element = String::new();
        stdin().read_line(&mut q_element).unwrap();
        println!("{}", binary_search(&element_arr, 
            q_element.trim().parse::<i32>().unwrap(), 0, length-1)+1);
    }
}
