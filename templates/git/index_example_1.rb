# to apply diff just copy index_example_1_diff.rb to index_example_1_diff
(1..30).to_a.each do |i|
  if i%5==0
    puts "fizz"
  else
    puts i
  end
end

