#1,000以下の素数を列挙する list2-9.rbの改正版

i = 2
counter = 0

2.upto(1000) do |n|

  while i < n             # 自分以外の数字で除算する
    counter += 1          # 除算回数カウント
    break if n%i == 0     # 割り切れたら除算終了 -> 素数ではない
    i += 1                # 割る数加算
  end

  puts n if i == n        # while文をfalseで抜けると素数なので出力

  i = 2   #iを2に初期化 nを2から除算開始するため

end

puts "除算の回数：#{counter}"