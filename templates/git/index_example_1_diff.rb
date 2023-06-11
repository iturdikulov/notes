# this is working copy version
(1..30).to_a.each do |i|
  if i%5==0
    puts "buzz"
  elsif i%3==0
    puts "fizz"
  else
    puts i
  end
end
