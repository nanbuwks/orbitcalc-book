cat $1.md | ruby -Ku qiitamd.rb | ruby -Ku texblock.rb | ruby -Ku texinline.rb | ruby -Ku texblockatom.rb  > temp.md
ruby escapeincode.rb temp.md | ruby preprocess.rb |  md2review | ruby -Ku scalemd.rb > $1.re
rake pdf
