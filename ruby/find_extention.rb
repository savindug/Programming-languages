require "find"
Find.find(ENV["HOME"]) do |file|
  if file=~/\.conf/
    puts "#{file}"
    puts '...................................'
  end 
end