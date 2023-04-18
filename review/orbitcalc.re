
= 本書の狙い

== 宇宙に行こう


幾多の人々が天界を既に駆けています。共通の言語、数学によって。
時代、政治、思想が異なっても、同じ世界に行くことができます。
いつの日か、異なる星に住む人たちと話をする時、同じように数学による意思疎通が図られるでしょう。


== 本書において

=== ブラックボックスをなるべくなくします。


公式をできる限り導き出すようにします。
自分の手でいちから計算していきます。


=== 有効数字は3桁


計算の結果は有効数字内に四捨五入します。
また、計算の途中で導き出した数字も同様に扱います。
単位系はMKS単位系を使います。


=== 解答


演習編と、解答編に分けてあります。解答は、全て答えるのではなく過程や必要なデータは巻末資料やWebで検索したりして調べてみてください。


= 演習編

== 人類に必要な空間


立って半畳、寝て一畳という言葉があります。一畳というのは85x170〜100x2000cmですが、計算しやすくと1mx2mとして、もし世界中の人口50億人を、一人あたり2平方メートルに入れるとすると、どのくらいの面積が必要でしょうか。

 1. 佐渡ヶ島くらい
 1. グリーンランドくらい
 1. オーストラリア大陸ぐらい

== 増えすぎた人口


「機動戦士ガンダム」では、宇宙世紀という年号が使われています。UC0079というように、Universal Century を略して使われていて、宇宙移民が始まった年を宇宙世紀元年という設定になっています。



UC0000,人口が90億人。
UC0050,人口110億のうち、90億が宇宙へ。


//quote{
"地球の周りには巨大なスペース・コロニーが数百基浮かび、人々はその円筒の内壁を人口の大地とした。その人類の第二の故郷で、人々は子を産み、育て、そして死んでいった。 "
　



ー 機動戦士ガンダム(劇場版) オープニング

//}


さて、スペースコロニーは直径4マイル x 長さ20マイル で3枚の地上面を持ちます（オニール・島３号案）。
kmに直すと直径6.4 km、長さ32 kmです。



//image[Internal_view_of_the_ONeill_cylinder][スペースコロニーの内部][scale=0.6]{
//}

スペースコロニーが数百機ということで、仮に500機としましょう。そのうち、90億人が500機に住むとすると、人口密度はどれほどになるでしょうか。計算してみましょう。


== 軌道発電衛星


先の計算は洒落にならなかったですね。人口爆発分をスペースコロニーで吸収するというのはちょっと非現実っぽいです。
とはいえ、宇宙には月や火星もありますね。また人口を吸収しなくても資源やエネルギーのために宇宙を目指す理由もあります。
ここで、宇宙からエネルギーを賄うとして、10kmx10kmの軌道発電衛星を考えます。
太陽定数を2kw/m2として、効率10%で地上に送電できるとして、1テラワットを賄うためには太陽発電衛星がどれだけ必要でしょう。



2011年の世界のエネルギー消費量は、123億toe（原油換算トン）でした。将来200億tocとして、その10%を賄うとすれば、太陽発電衛星はどれだけ必要でしょうか。



太陽発電衛星の１平方メートルあたり、100gだとします。10kmx10kmの太陽発電衛星の質量はどれだけになるでしょう。


== 宇宙へのコスト


H2Aだと、打ち上げコスト120億円。4.6トン（ブースター4基）



現在開発中のH3ロケットだと、打ち上げ費用は約50億円（最小構成時）。打ち上げ能力6.5トン



1万トンを打ち上げるにはいくらかかるでしょう？



日本の発電設備容量は、2011年で24578万KW。全部を太陽発電衛星にすると何トンになるでしょうか？？


== 宇宙に行く条件は？


第一宇宙速度を求めましょう。



@<m>{}
g=r\omega ^{2}
@<m>{}



@<m>{g=r\omega ^{2\}}
のうち、
rは地球半径
gは重力加速度
ωは角速度。



角速度ωと速度vの変換は



@<m>{}
rω=v
@<m>{}
となります。



マッハに直すとどのくらいでしょうか。
音速は340m/sとなります。


== 第一宇宙速度をすべて位置エネルギーに変換すると？


位置エネルギーの公式は @<m>{mgh} となります。
運動エネルギーは @<m>{\dfrac {1\} {2\}mv^{2\}}  となります。


== 国際宇宙ステーションはどれだけの速さ？


さきほど、第一宇宙速度を求めましたが実際の人工衛星もそのとおりでしょうか？ 国際宇宙ステーションは高度400km程度の軌道です。



//image[STS-134_International_Space_Station_after_undocking][国際宇宙ステーション][scale=0.3]{
//}



== 国際宇宙ステーションの位置エネルギーと運動エネルギーの割合は？


先ほど計算した速度エネルギーと、400kmの高さの位置エネルギーはどれだけ違うか計算してみましょう。
位置エネルギーの計算は重力が高度によって変化しますが今回は地表から変化せずとして近似します。


== 以下続く
 * 静止軌道の力学
 * 軌道エレベータの条件
 * 軌道エレベータの材料
 * 軌道エレベータの問題点
 * 非同期軌道スカイフックの力学
 * 軌道ウィンチWINTLETT

= 解答編


ここでは、回答そのものを記した場合は、計算過程は記しません。回答そのものを記載してない場合は、回答に結びつく資料を書いています。


== 人類に必要な空間


佐渡ヶ島　855km2



グリーンランド 2,170,000 km²



オーストラリア大陸 7,690,000 km²


== 増えすぎた人口


ちなみに、50年間で70億人が宇宙に移民するとなると、1日あたり38万人宇宙に行かないといけません。
羽田空港の利用者が1日17〜19万人。2015年度の渋谷駅1日平均秋葉原駅の利用者が372,234なのでそのくらいの賑わいになりますね！！


== 太陽発電衛星


toe = 42GJ
200億toeは26.6テラワットになります。
10kmx10kmの太陽発電衛星の質量は、10000t。


== 宇宙へのコスト


日本のお金として、平成28年度一般会計予算は約96.7兆円。2012年の石油輸入額は184.96x10億ドル。



割に合うでしょうか？


== 宇宙に行く条件は？


マッハとの比較。
飛行機がジャンボジェットだとマッハ0.9ですね。
軍用機だともっと出せます。F-15などの戦闘機だとマッハ2.5が最高速度ですが、この速度は1分程度しか出せません。持続的に出すとなるとXB-70などだとマッハ3程度出せるようになります。


== 第一宇宙速度をすべて位置エネルギーに変換すると？


@<m>{\dfrac {1\} {2\}mv^{2\}} ということで、単純に @<m>{v=7.9} km/sをこの式にあてはめます。位置エネルギーに変換するには重力加速度gで割ります。そうすると、 @<m>{6.24\times10^{7\}} m。
地球の半径が @<m>{6.36*10^{6\}} mなので、地球の直径の5倍程度の高さになります。



しかしながら、このくらいだと重力が異なってきます。これだけ離れると重力が弱くなるので、実際にはもっと高い位置に相当することになります。


== 国際宇宙ステーションはどれだけの速さ？


さきほど、第一宇宙速度を求めたときに @<m>{r = 6.38\times10^{6\}} でしたが、400km上空ということでrは @<m>{6.38\times10^{6\}+4\times10*^{5\}} となります。
計算すると、第一宇宙速度より増えるでしょうか？ 減るでしょうか？


== 国際宇宙ステーションの位置エネルギーと運動エネルギーの割合は？


運動エネルギーは上の演習で求めた 7.7km/s  を使い、 @<m>{\dfrac {1\} {2\}m(7.7\times10^{3\})^{2\}} 。 これと 位置エネルギーとして @<m>{mgh} , @<m>{h} は400kmとして計算したものを比較します。


= 資料

== 基本的な数値

=== 重力加速度


@<m>{} 9.81m/s^2 @<m>{}


=== 地球の赤道半径


@<m>{} 6380km @<m>{}


=== 1年


@<m>{} 8760時間 @<m>{}


=== 光の速度


4.3.00x10^8 m/s


=== 万有引力定数


7.6.67 × 10-11 m3 kg-1 s-2


= 技術書典2版あとがき


コミケC91に続き、今回もせめて静止軌道計算まで収録したかったのですが力及ばずでした！！



//image[orbitelevator1][軌道エレベータ][scale=0.6]{
//}




おれたちのたたかいはこれからだ！

