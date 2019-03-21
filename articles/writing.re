= 技術を文章でわかりやすくつたえる

勉強会で講師役を務める、ドキュメントを書く、イベントで登壇する、後輩に実装方法を教える、そして技術書を書く。私たちは色んな場面で技術を「つたえて」います。

この章では技術書やドキュメントを通して「文章でわかりやすくつたえる」際に、こんなところに気をつけるとよりわかりやすくなりますよ、というポイントをおつたえします。

//pagebreak

== 読者層をはっきりさせよう

万人に最適な説明はありません。つたえる相手が変われば最適なつたえ方も変わります。

たとえばDNSに関する技術書を書くとしても、対象となる読者層が「インターネット？ほぼ使ってないです。インスタは使ってますけど」というレベルの大学生なのか、それとも「Aレコードは登録したことあるけどフルリゾルバは知らないです」というレベルのエンジニアなのかによって、書くべき内容やつたえ方は大きく異なります。

誰に向けて書いている文章なのか？を最初にはっきりさせておかないと、のちのち「どこまでさかのぼって説明しないとだめなんだ…！」と破綻したり、あるいは読者に「こんな簡単なことはもう知ってるからもっと踏み込んだ内容が読めると思ったのに」と不満を持たれたりします。

読み終わってから「思っていた内容と違った…」という残念な思いをさせないよう、ミスマッチを防ぐ次のような対策をしておきましょう。

=== 想定する読者層とゴールを書いておこう

技術書やドキュメントの場合、本文の前に「想定する読者層」と「ゴール」を書いておきましょう。たとえば「AWSをはじめよう」では想定する読者層を次のように定義していました。

//cmd{
本著は、こんな人に向けて書かれています。

 * AWSが何なのかよくわかっていない人
 * ブログやポートフォリオサイトを独自ドメインで作ってみたい人
 * JavaScriptやHTMLやCSSなら書けるけどサーバはわからなくて苦手という人
 * プログラミングの勉強がしたいけど環境構築でつまづいて嫌になってしまった人
 * これからシステムやプログラミングを学ぼうと思っている新人
 * ウェブ系で開発や運用をしているアプリケーションエンジニアの人
 * インフラやサーバになんとなく苦手意識のある人
 * AWS、EC2、RDS、ELB、Auto Scaling、Route53などの単語に興味がある人
 * クラウドってなんだろう？サーバってなんだろう？という人
//}

想定する読者層を書くことで、ここに当てはまらない人は「自分向けの本ではないな」と判断できるのでミスマッチが減らせます。

また「AWSをはじめよう」ではゴールを次のように定義していました。

//cmd{
本著を読み終わると、あなたはこのような状態になっています。

 * WordPressのおしゃれなサイトができあがっている
 * 使うも壊すも自由な勉強用のLinuxサーバ環境が1台手に入る
 * クラウドがなんなのか？や、そのメリットデメリットが説明できるようになっている
 * 読む前よりAWSやサーバや黒い画面が怖くなくなっている
//}

このようにゴールを書いておくことで、読者は「読むことで何が得られるのか」を事前に把握できます。ざっと概要だけ知りたいのか、手を動かして実践的な知識を得たいのか、読む目的は人によって異なります。

最初に「想定する読者層」と「ゴール」を書いておくことでミスマッチを防げるとともに、著者自身が文章の方向性を見失いかけたときに「誰に向けた文章なんだっけ？」「読み終わったらどうなってて欲しいんだっけ？」と振り返るよりどころとなります。

== 「すんなり入ってくる」ための工夫

=== わかりやすい例は理解を促す

難しい事象を説明するときは、たとえば「digコマンドはスプラトゥーンのブキチのように解説が長い@<fn>{splatoon}」というように、読者にとって身近な物事に置き換えたたとえ話を出すとぐっとわかりやすくなります。

//footnote[splatoon][気になる方は「DNSをはじめよう」のP102を参照ください。@<href>{https://mochikoastech.booth.pm/}にダウンロード版があります。]

次のように技術的な事象とたとえ話の図を並べて対比させるのもよい方法です。（@<img>{afterBuyingDomain} @<img>{secretaryLikeNameServer}）

//image[afterBuyingDomain][ウェブページが表示されるまでの名前解決の仕組み][scale=0.8]{
//}

この図はウェブページが表示されるまでの名前解決の仕組みを表しています。ぱっと見ただけでは理解できないような複雑な流れですが、これを「Bさんに電話をかけるまでの流れ」というたとえにしてみると、読者は「秘書」や「A部門」、「電話をかける」といった知っている単語の組み合わせで流れを把握できるため一気に理解がしやすくなります。

//image[secretaryLikeNameServer][Bさんに電話をかけるまでの流れ][scale=0.8]{
//}

結城浩さんの数学ガール@<fn>{girl}という本には「@<ttb>{例示は理解の試金石}」というフレーズがたびたび登場します。よい例を作れれば自分はその事象をきちんと理解できているし、作れなければ理解が足りていない。@<ttb>{例示を作れるか否かが理解度を判定する材料になる}、ということです。

//footnote[girl][@<href>{https://www.hyuki.com/girl/}]

確かに思い返してみると、技術を誰かに説明しようとしても上手い例が出てこないとき、あるいは作った例に矛盾が生じてしまうようなときは、まだまだ自分自身の理解が足りていない、いわゆるエンジニア用語の「チョットデキル」よりずっと手前の「完全に理解した！」@<fn>{little}という時期でした。

//footnote[little][Linuxの開発者が「ワタシハリナックスチョットデキル」と書かれたTシャツを着ていたのが起源のジョーク。 @<href>{https://twitter.com/ito_yusaku/status/1042604780718157824}]

自分の理解が足りていないのに人にわかりやすく説明する文章は書けません。例を書いてみることで自分の理解度を試してみましょう。

=== なんで？のコップが準備できてから説明しよう

まずは読者が一度失敗したり、疑問を抱いたりして「なんで上手くいかないんだろう？」「なんでこんなことするんだろう？」という気持ちにならないことには、いくらつたえても知識が上滑りしてしまいます。ですので文章で何かをつたえたいときには、いきなり説明から入らずに@<ttb>{疑問を抱かせてから説明する}という流れを意識しましょう。

極寒の屋上で1時間吹きっさらしになった後だからこそ、暖かい毛布のありがたみがわかるのであって、ずっと真夏のビーチで過ごしている人に「すごく暖かいんだよ！」と毛布の良さを説いたところで「言ってることはわかるけど…」という感じで実感を伴った理解には至りません。それと同じで、まだ何にも困ってないのに「解決策だよ！これがベストなやり方だよ！」と立て板に水の説明をされても、聞かされた側は知識があまり染み込んでこないのです。

中身を求めている空のコップがなければ、いくら知識を注いでもだーだーとこぼれるばかりで入っていきません。ですので「なんで？」という空のコップを用意してもらって、それから知識を注いで満たすという順番が大切なのです。たとえば次のようにいきなり「ベストなやり方」を説明をするのではなく、

//cmd{
AWSのEC2では静的なElasticIPを使いましょう。
//}

まずは一度「ログインできない！」という失敗をさせてから、原因と解決策をつたえるようにしましょう。@<fn>{startAWS}

//cmd{
AWSのEC2でサーバを立てたらSSHでログインしてみましょう。無事にログインできましたね。続いてサーバをシャットダウンしたのちに、マネジメントコンソールから再度起動させてみましょう。
サーバが立ち上がってきましたか？それではもう一度SSHでログインしてみましょう。
…さっきはログインできたのになぜかできなくなってしまいました。何もしてないのに壊れた！状態ですね。
実はEC2ではIPアドレスは動的なものなので、サーバをシャットダウンして再度起動すると変わってしまうのです。
シャットダウンするたびにIPアドレスが変わって今回のようにSSHでログインできなくなってしまうと大変ですよね。
そうならないようにElasticIPという静的な、勝手に変わらないIPアドレスを使いましょう。
//}

//footnote[startAWS][「AWSをはじめよう」という本のP104にある「3.4 SSHでサーバに入ってみよう」では、実際にこの説明の仕方を採用しています。気になる方は@<href>{https://mochikoastech.booth.pm/}からダウンロード版をどうぞ。]

疑問を抱く前に正しい答えをずらずらと書いても読者はちっともピンときません。ちゃんとつまづきポイントを用意して、一度読者を転ばせてから「つまづかない歩き方」や「転んだ後の立ち上がり方」を解説すれば、実感を伴うので理解がしやすくなります。

== 一度にたくさんのことはつたわらない

技術を文章でわかりやすくつたえよう！と思ったとき、やってしまいがちな失敗に「一度に多くのことをつたえすぎる」というものがあります。本当につたえたかったことがその他大勢に紛れて見えなくなってしまわないよう、次のことに注意しましょう。

=== つたえることは1つにしぼる

人はみんな忘れる生き物です。2時間観た映画がとても面白かったとしても、終わった後に「主人公のあの人、格好良かったよねー…えーっと主人公…あー、名前なんだっけ…？」みたいなことはざらです。

わかってほしいからこそ、あれもこれも書きたくなってしまうのですが、いま書いているこの1つの段落でつたえたいことは何か？1冊の本を通してつたえたい大きなメインテーマは何か？を考えて、つたえたいことは常に1つだけにしぼりましょう。つたえることをしぼりきれなかった文章を読むと、読者は「結局何が言いたかったの？」という気持ちになります。

=== 余計な情報は削ってできるだけシンプルに

次のような説明を、誰しも一度は読んだり聞いたりしたことがあると思います。

//cmd{
AはBでもあり、Cのときもあるけれど、まれにDのケースもある。Eの可能性も捨てきれない。ですがいったんここではAはB、とだけ覚えておいてもらえれば結構です。
//}

覚えなくていいならそもそも書くべきではありません。余計な情報はなくして説明はできるだけシンプルにしましょう。

実際にCやDやEのような例外があるとしても、それは「AはB」をきちんと理解できた後に別の段落で改めて説明すればいいことです。前述のように冗長な説明をするくらいなら、この時点では次のようにシンプルに書きましょう。

//cmd{
AはBです。
//}

== 事実は時代とともに変わる

事実は時代とともに変わります。たとえば大昔、Linuxの環境でnslookupコマンドをたたくと「このコマンドは非推奨だし、将来的には廃止されるから今後は別のコマンドを使ってね」という警告メッセージが表示された時期がありました。その時点では「@<ttb>{nslookupコマンドは非推奨なので使わない方がいい}」は確かに事実でした。

ですがその後、BINDの9.9.0a3がリリースされたタイミングでその警告メッセージは消え、リリースノートには「nslookupを非推奨として扱うのはもうやめるね。非推奨の警告も消したよ」と書かれていました。ですので、2019年4月現在では「nslookupコマンドは非推奨なので使わない方がいい」は事実ではありません。@<fn>{bind}

//footnote[bind][このnslookupにまつわる話の詳細は「DNSをはじめよう」という本のP103に載っています。気になる方は@<href>{https://mochikoastech.booth.pm/}からダウンロード版をどうぞ。]

このように「○○は使わない方がいい」「○○では××はできない」といった事実は、ミドルウェアやソフトウェアのバージョンアップに伴って状況が変化した際に事実でなくなってしまうことが往々にしてあります。

状況の変化は避けられませんので、変化に対応するため次のように対策を取っておきましょう。

=== 年月日やバージョンを書いておこう

文章を書くときは必ず「その文章が書かれた年月日」を記載しておきましょう。ブログであればその記事を投稿した年月日が自動で表示されるようにしておきましょう。@<fn>{classmethod}技術書であれば奥付@<fn>{okuduke}に書いておけばよいですが、それ以外に文中でも「今年の技術書典」や「4月14日の技術書典」ではなく「2019年4月14日(日)の技術書典」のように、@<ttb>{数年経ってからその文章を読んでもいつのことを指しているのかわかるようにしておく}とさらによいでしょう。

//footnote[classmethod][クラスメソッドさんのDevelopersIOは、1年以上前の記事には「この記事は公開されてから1年以上経過しています。情報が古い可能性がありますので、ご注意ください。」という案内が表示されるところが素晴らしいなと思います。]
//footnote[okuduke][書籍や雑誌の巻末にある著者名・発行者・発行年月日などが書かれている部分。本著にもあります。]

またミドルウェアやソフトウェアであれば、@<ttb>{どのバージョンを想定した内容なのか}も記載しておきましょう。

=== 一次ソースに当たろう

前述の「nslookupコマンドは非推奨なので使わない方がいい」のように後から状況が変わったケースでは、ネットで個人ブログやQiitaの記事が出てきても、個々の記事には「書いた時点」の情報が断片的に載っているだけなので、現在までの経緯を見渡した正確な情報にはなかなかたどり着けません。

特に本を書いて人に技術をつたえるときは「検索して出てきたブログに○○と書いてあった」「他のエンジニアに○○と教えてもらった」のような伝聞をそのまま情報源にするのではなく、きちんと一次情報に当たるか自分で動作確認をしましょう。原文が英語であれば日本語に翻訳されている時点でそれは二次情報です。より正確を期するのであれば原文も確認しましょう。絶対に間違えないことは無理であっても、間違えないよう努力することは教える側の誠意だと思います。

どうしても一次情報が見つからず動作確認もできないような場合はいっそ書かない、あるいは「一般的にこう言われているが正確なところは調べてもわからなかった」と正直に書くべきです。筆者もBINDのリリースノート（英語）を追いかけていって該当の記述を見つけるまでは「このnslookupの話書きたいけどソースがないと書けない…！」と必死でした。

=== 例示用のIPアドレスやドメインを使おう

たとえば「ブラウザでwww.example.comを開くと、名前解決が行われてウェブサーバの203.0.113.222というIPアドレスが返ってきます」というように、技術の説明をしていると具体的なIPアドレスやドメインを書きたくなることがあります。このようなときは例示用のドメインやIPアドレスを使いましょう。

実はインターネットでは「例示やテストで使っていいドメインやIPアドレス」というものが定められています。@<fn>{rfc}

例として記載するURL、メールアドレスなどでは次のものをつかいましょう。

//footnote[rfc][例示用のドメインはRFC2606やJPRSのサイト、IPアドレスはRFC5737で確認できます。]

 * 例示として使えるドメイン
 ** example.com
 ** example.net
 ** example.co.jp
 ** example.jp
 * 例示として使えるIPアドレス
 ** 192.0.2.0/24（192.0.2.0～192.0.2.255）
 ** 198.51.100.0/24（198.51.100.0～198.51.100.255）
 ** 203.0.113.0/24（203.0.113.0～203.0.113.255）

例示であっても自分の持ち物でないドメインやIPアドレスを勝手に使うことはトラブルの元になります。@<fn>{trouble}必ず例示用のドメインやIPアドレスを使いましょう。

//footnote[trouble][実際にどんなトラブルになるのか？は「DNSをはじめよう」のP110「＜トラブル＞ test@test.co.jp を使って情報漏洩」で紹介しています。]

== わかりやすさを支える統一表記

どんなに内容がよいとしても表記にばらつきがあったり、誤字脱字が多かったりすると読者は「読みにくいな」「内容はちゃんと合ってるのかな…？」と品質に不安を抱いてしまいます。わかりやすさを下支えする次のような点に注意して文章を書いてみましょう。

=== 正しい名前で書こう

ソフトウェアなどの名称は自分がなんとなく使っている通称や誤った表記ではなく、正しい名称で書くようにしましょう。（@<table>{nameCorrect}）

//table[nameCorrect][通称や誤記ではなく正しい表記で書こう]{
通称や誤記	正しい名称
------------------------------------
VSCode	Visual Studio Code
Github	GitHub
Word Press	WordPress
JAVAScript	JavaScript
//}

多少でも名前が間違っていると読者も混乱しますし、間違えられた側も決していい気分はしません。@<fn>{nameWrong}特にスペースの有無や大文字小文字などは意識していても間違えやすいので、筆者は公式サイトや公式ドキュメントの表記をコピーペーストして使うようにしています。

//footnote[nameWrong][会社でMVPとして壇上に呼ばれた際、社長に名前を間違えられて「全社員とはいわないけど、表彰相手の名前くらいは把握しておいてもらえると嬉しい…」と思ったあの日。相手に興味なくてもいいのですが、それを悟らせても得るものは何もないので、せめて興味があるように見える最低限の準備は大事だなと思います。]

また英数字の羅列だと覚えにくいけれど何の略なのかわかれば理解しやすくなる、という側面もありますので、次のように@<ttb>{はじめは正式名称で紹介して、以降は略称にする}という形もよいでしょう。読み方がわからずにひそかに悩んでしまう@<fn>{k8s}のも初心者あるあるですので、次のようにカタカナで読み仮名も添えるとなお親切です。

//footnote[k8s][k8sはKubernetesの略でクバネティスと読むとか、nginxと書いてエンジンエックスと読むとか、誰かに教えてもらわないと筆者は想像もつかなかったです。密かに「んぎっくす…？」と思っていました。]

//cmd{
AWSではサーバはAmazon Elastic Compute Cloudの略で「EC2」（イーシーツー）と呼ばれています。
//}

=== ひとつのものはひとつの名前で書こう

ひとつの説明の中で同じものを「ターミナル」と書いたり「RLogin」と書いたりして表記にばらつきがあると、読者は「ターミナル…？ああさっきインストールしたRLoginのことか」と脳内で辞書を引くことになります。それに「敢えて別の名前で呼んでいるということはターミナルとRLoginは別のもの？」と心のどこかで不安になってしまいます。

このように表記ゆれは読者の脳内メモリを無駄に食います。本当につたえたいことに集中してもらえるよう、同じ単語を2通り以上の表記で表すのはやめましょう。

一般的に見ても色んな名前で呼ばれているような場合は「AやBという名前で呼ばれることもありますが、本著では統一してCと呼びます」のように明示しておくと、他の文献を読んだ際に理解がつながるのでさらに親切です。

=== 英語？カタカナ？伸ばし棒は？どこまでひらく？

「サーバ」と「サーバー」と「Server」のように、声に出して読んだときは同じでも、文字だと英語で書くのかカタカナで書くのか、最後の伸ばし棒はあるのかないのか、先頭は大文字なのか小文字なのか表記のゆれる単語もあります。

またサーバは「立てる」なのか、「建てる」なのか@<fn>{server}のようにどの漢字を用いるか、という問題。さらに「たとえば」と「例えば」、「はじめて」と「初めて」のように、どこまでの漢字を平仮名に「ひらく」のか、という問題もあります。

//footnote[server][ちなみに筆者は「立てる」派です。「AWSをはじめよう」のP100にあるコラムでその理由を説明しています。@<href>{https://mochikoastech.booth.pm/}]

これらは「こちらの方が読みやすい」「自分がこうすべきだと思う」という著者の考え次第ですので、最初にどの方針で書くのか決めてしまいましょう。

=== 表記ゆれのチェックはツールでやろう

名前や書き方の方針が決まったら、表記ゆれを防ぐためにはただ頑張るよりもツールを使った方が確実です。たとえば技術書の原稿をRe:VIEW@<fn>{review}を使ってVisual Studio Code@<fn>{vscode}で書く場合はvscode-prh-extention@<fn>{prhExtention}という拡張機能が便利です。

//footnote[review][Re:VIEW（リビュー）は簡易なマークアップを付与したテキストの原稿を書くと、コマンド1つで書籍として組版されたPDFやEPUBが生まれてくる夢のようなツール。本著もRe:VIEWとデザイナーさんのパワーで生まれています。詳しく知りたい方は「技術書をかこう！ ～はじめてのRe:VIEW～ 改訂版」という書籍がおすすめです。 @<href>{https://techbooster.booth.pm/items/586727}]
//footnote[vscode][WindowsでもMacでも無料で使えるMicrosoftのコードエディタ。本著もVisual Studio Codeで書いています。 @<href>{https://azure.microsoft.com/ja-jp/products/visual-studio-code/}]
//footnote[prhExtention][vscode-prh-extentionは技術書典の運営でお馴染みわかめさん謹製の拡張機能です。 @<href>{https://github.com/prh/vscode-prh-extention}]

Visual Studio Codeの拡張機能で「prh」を検索すると、「prh - ProofReadingHelper」という拡張機能が表示されるので「インストール」をクリックします。（@<img>{startWriting1}）

//image[startWriting1][Visual Studio Codeの拡張機能でprhを検索してインストール][scale=0.8]{
//}

あとは原稿の.reファイルと同じフォルダに「prh.yml」というファイルを用意して、そこに期待値（expected）や誤りのパターン（pattern）といったルールを書いておきましょう。

//cmd{
  - expected: はじめて
    pattern:  初めて
    prh: 漢字で書かず、ひらがなで書くと読みやすくなります。
//}

すると次のようにVisual Studio Code上で原稿内に波線が表示されて表記ゆれを指摘してくれます。（@<img>{startWriting2}）

//image[startWriting2][「初めて」の下に波線が出て表記ゆれを指摘してくれる][scale=0.8]{
//}

TechBoosterが無償で公開してくれているRe:VIEW用の書籍テンプレート@<fn>{template}を使えば、原稿が入っているarticlesフォルダの中にすでにprh.ymlも配置されているため、拡張機能をインストールするだけですぐに使い始められます。

//footnote[template][TechBoosterというサークルが公開しているRe:VIEW用の書籍テンプレート。 @<href>{https://github.com/TechBooster/ReVIEW-Template}]

ちなみに筆者もここまで書きながら「表記ゆれ」と「表記揺れ」で表記がゆれていたので、「ゆれ」は平仮名にしよう！と決めてprh.ymlに次のように書き足しました。

//cmd{
  - expected: 表記ゆれ
    pattern:  表記揺れ
//}

こうしてルールを書き足したことで、次のように表示されて表記ゆれにすぐ気づけるようになりました。（@<img>{startWriting3}）

//image[startWriting3][ルールを追加して「表記揺れ」にも波線が出るようになった][scale=0.4]{
//}

== 読者を迷子にさせないで

読者はあなたが書いた道案内に従って未知の「技術」という道を歩いていきます。もし道案内には書かれていない分かれ道が現れたり、道が忽然と消えてしまったりしたら、読者は迷子になってどうすればいいのかわからず立ち尽くしてしまいます。

読者が迷子にならないように次のことを心がけましょう。

=== はじめて出てきた言葉は説明しよう

いきなり知らない言葉が出てきたのに、その言葉を知っている前提で話が進むと読者は困ってしまいます。書きながら初出を見つけるセンサーを働かせて、その言葉がはじめて出てきたときはきちんと説明をしましょう。

=== 言葉を定義しよう

たとえば「商業出版」のように一般的な言葉であっても、人によって「何を持ってして商業出版と言うのか？」という定義が異なる言葉もあります。たとえば「書店に並ぶ本はすべて商業出版だ」という人もいれば、「Amazonで売られていれば商業出版だ」あるいは「出版社が発行すれば書店やAmazonに並ばずとも商業出版だ」という人もいるでしょう。著者と読者の間で言葉の認識が異なっていると、つたえたいことが思った通りにつたわりません。

技術用語に限らず、一般的な言葉であっても人によって解釈が異なる場合は、次のように言葉を定義しておきましょう。

//cmd{
本著では「商業出版」を「出版社が版元となって本を出版すること」と定義して話を進めます。
//}

=== 「それ」ってどれのことですか？

「それを再びクリックして」「そのボタンを」のように「それ」「あれ」「この」といった指示語を乱用すると、読者は「それってなんだろう？」と迷うことになります。つたわりにくい文章の例を見てみましょう。

//cmd{
準備が出来たらセキュリティグループ名と概要を記入して「ルールの追加」をクリックします。もしそれを行った際にエラーが発生したら…
//}

「それ」は何を指しているのでしょうか？次のいずれとも読めるため読者を迷わせてしまいます。

 * セキュリティグループ名と概要を記入すること
 * 「ルールの追加」をクリックすること
 * セキュリティグループ名と概要を記入してから「ルールの追加」をクリックすること

前述の場合は「それ」という指示語ではなく、もう一度対象を書くとよりわかりやすくなります。

//cmd{
準備が出来たらセキュリティグループ名と概要を記入して「ルールの追加」をクリックします。もし「ルールの追加」をクリックした際にエラーが発生したら…
//}

何度も同じ言葉を繰り返すとかえって読みにくくなることもありますので、程度の問題ではありますが、むやみに指示語を使って読者を迷子にさせていないか、「それ」や「この」などの指示語で検索して文章を読み返してみましょう。

=== 幾通りもの解釈ができると迷ってしまう

次の文章を読んでみてください。

//cmd{
面接の場でペアプロをやったら楽しかった話をしたら聞いていた人が「わかる」と頷いた。
//}

これは果たして次のうちどちらの意味でしょうか？

 * 「面接の場でペアプロをやった。楽しかった」という話を、後日他の人に話したら「わかる」と頷かれた
 * 「ペアプロをやったら楽しかった」という話を、面接会場で話したら面接官が「わかる」と頷いた

幾通りもの解釈ができる文章は読者の誤解を招き、理解を誤った方へ導いてしまいます。つたえたいのが後者の意味であるなら次のように直してみましょう。

//cmd{
「ペアプロをやったら楽しかった」と面接の場で話したら、聞いていた面接官が「わかる」と頷いた。
//}

「面接の場で」を「話したら」の直前に持ってきたことで、ペアプロの話をどこで話したのかが明確になりました。

 * 「ペアプロをやったら楽しかった」と話した
 * 面接の場で話した

 のように「話した」を修飾する言葉が複数ある場合、@<ttb>{長い修飾語や重要な修飾語を前に}して、@<ttb>{短い修飾語や重要でない修飾語を後に}した方がわかりやすくなります。

また「聞いていた人」という抽象的な表現から「面接官」に変えたことで、話の聞き手が誰なのかもはっきりしました。このように修飾語の前後を入れ替えたり、動詞に対応する主語を明確にしたりして、読者を迷わせないようにしましょう。

== できるだけ簡潔にしよう

突然ですが質問です！技術を説明する100文字の文章と10,000文字の文章があります。どちらでもまったく同じ内容がつたわるとしたら、どちらを読みたいですか？

//indepimage[startWriting4][][scale=0.8]

うわ、びっくりした！

お隣のわかばちゃん@<fn>{wakaba}がちょうど通りがかったタイミングで答えてくれました。

//footnote[wakaba][「マンガでわかるDocker」や「わかばちゃんと学ぶ Git使い方入門」などでおなじみのわかばちゃん。本著を頒布する技術書典6ではお隣の「あ03」が「湊川あいの、わかば家。」なので、通りすがりにちょっぴり登場してくれました。「マンガでわかるRuby」も楽しみです！　※湊川あいさんから直接許可をいただき掲載しています]

そうですね。楽しむことが目的の小説であれば文章の長短は個人の好みによりますが、技術の習得や問題解決が目的の技術書で、かつ同じ内容がつたわるのであれば、わかばちゃんの言うとおりできるだけ「早く」「楽に」読める方がいいですよね。怠惰なのはエンジニアの美徳のひとつです。

丁寧に説明しようとするのはいいことですが、結果として冗長になっていないか次のような点をチェックしてみましょう。

=== 「ということ」「することができる」は必要？

さっそくですが次の文章を読んでみてください。

//cmd{
筆者が文章を書くときに心がけているのは、できるだけ余計なものをそぎ落として簡潔にならないかな、ということです。
//}

なんということでしょう！「簡潔にしようと心がけている」と言っているのに文章が冗長です。たとえばこの文章は前後を入れ替えると簡潔でわかりやすくなります。

//cmd{
筆者が文章を書くときは「できるだけ余計なものをそぎ落として簡潔にしよう」と心がけています。
//}

同様に「行動に移すときがきた@<ttb>{ということ}を知った」よりも「行動に移すときがきたと知った」の方が、「説明@<ttb>{することが}できる」よりも「説明できる」の方がずっと簡潔です。「ということ」や「することができる」と書いたときはそれが本当に必要なのか見直してみましょう。

=== コップからあふれる長い文章は切ろう

文章を読むとき、「。」で一区切りがつくまで、私たちはその文章を自分の中のコップに溜め続けています。

「コップに一口分の文章を注がれ、それを飲んでコップを空にする」を繰り返すことで、読者は文章の意味するところを理解し記憶の引き出しにしまい込みます。ですが「。」で一区切りがつかず、延々とコップに文章を注ぎ続けるとそのうちコップから文章がこぼれてしまいます。あふれてこぼれてしまった分は飲むこともできません。文章が長すぎると記憶の引き出しにしまい込む前にその一部を消失してしまうのです。

長すぎる文章の例を読んでみましょう。

//cmd{
データセンターは「物理的な攻撃や侵入」からサーバを守るための設備を整えており、堅牢さはデータセンターによって異なりますが、たとえば「所在地を一般に公開しない」「建物自体に侵入経路となる窓がない」「入るときと出るときで体重が違うと出られない」といったような防犯対策が一例として挙げられ、この入退出時の体重チェックは盗んだハードディスクを持ち出せないようにするためのものです。
//}

長い…！実際に声に出して読んでみるとわかりますが、この長さだとひといきでは読めず途中で息が切れてしまいます。あくまで目安ですが@<ttb>{ひとつながりの文章が50文字を超えたら「。」で区切りましょう}。前述の文章を適切な長さで区切ると次のようになります。

//cmd{
データセンターは「物理的な攻撃や侵入」からサーバを守るための設備を整えています。
堅牢さはデータセンターによって異なりますが、たとえば次のような防犯対策が例としてあげられます。

 * 所在地を一般に公開しない
 * 建物自体に侵入経路となる窓がない
 * 入るときと出るときで体重が違うと出られない

ちなみに入退出時の体重チェックは、盗んだハードディスクを持ち出せないようにするためのものです。
//}

文章を適切な長さで区切り、かつ@<ttb>{列挙していたものを箇条書きにした}ことでぐっと読みやすくなりました。ひとつながりの文章はコップからあふれるほど長くしすぎないようにしましょう。

=== 自信がないからといってぼかさない

「恐らく」「と思われる」「らしい」「など」「やや」「おおよそ」「少し」のように、つたえたいことをぼかして不明確にしてしまう言葉を安易に使わないようにしましょう。

そうした言葉が自然と入ってしまう箇所は「一次情報の確認ができていない」「実は著者もしっかり理解できていない」というように、書いている側が自信を持って説明できない部分であることが多いです。筆者も身に覚えがあるので、これを書きながらちょっとつらい気持ちになっています。

断言せずにぼかされていると「断言されていないということは何か例外的なケースがあるのかな？」と読者に余計な想像をさせてしまいます。自信が持てないときはつたえたいことをぼかしてごまかすのではなく、さらに調べるか、こういう事情で断言できないという理由を併せて書いておきましょう。

== 推敲は文章の品質を上げる

文章は書いたら書きっぱなしで終わりではありません。次のような視点で読み返して文章の品質をあげていきましょう。

=== 文章はたくさん撫でるとつやつやになる

文章は猫と同じでたくさん撫でるとつやつやになります。書いた文章を頭からしっぽの先まで撫でるように読んでいくと、必ずざらっとしたところやささくれたところが見つかるので、そこを直してやってまた頭からしっぽまで撫でて…を繰り返しましょう。一度もざらっとせずにしっぽの先までたどり着けたら文章の毛づくろいは完了です。

但しこの方法だとどうしても頭の方をたくさん撫でることになるので、時間が足りないと頭だけつやつやでしっぽはぼさぼさの文章になってしまいます。全身よい毛並みにできるよう、最初にスケジュールを引く時点で推敲のための時間をしっかり確保しておきましょう。

=== 仮想の読者とリアルな読者

著者が「渾身の出来！」と思っても、想定する読者層が「わかりやすい！」と思ってくれなければただの独りよがりになってしまいます。

書き上がった文章を読み返すときはいったん自分が書き手であることは忘れて、脳内に用意した仮想の読者に読んでもらうようにしましょう。筆者の場合は「エンジニアとして勉強を始めたころの自分」を仮想読者として脳内に保っています。

=== 読者の歩幅に合わせよう

筆者は大きな駅でよく迷子になります。「大江戸線はこちら」と書いてある看板の矢印に従って角を曲がっても、そこに次の案内はなく、どこへ行けばいいのか途方にくれて「大江戸線はどこ！」と絶望するのです。同じことは文章でも起こります。説明という飛び石の間隔が読者の歩幅に合っていないと、読者は次の石がどこにあるのかわからなくて立ち尽くしてしまうのです。

たとえば初心者に向けてバーチャルホストの説明するとき、次のような説明だけだと読者は「え、どうやってonにするの…？」と立ち尽くしてしまいます。

//cmd{
httpd.confを編集したらApacheを再起動してNameVirtualHostをonにしましょう。
//}

この場合は読者が初心者であることを踏まえて、説明という@<ttb>{飛び石の間隔を狭めて読者の歩幅に合わせて}あげましょう。カッコの中は脳内にいる仮想読者の声です。

 * まずviコマンドでhttpd.confを開きます。この画面が表示されましたか？
 ** （はい、表示されました）
 * iで編集モードにします。左下に「-- INSERT --」と表示されました？
 ** （はい、表示されました）
 * NameVirtualHost onと追記したら、Escキーを押して閲覧モードに戻ります。左下の「-- INSERT --」は消えましたか？
 ** （はい、消えました）
 * :wqで保存します。viの画面は消えましたか？
 ** （はい、消えました）
 * ではApacheを再起動します。apachectl restartと書いてEnterキーを押してください。何のメッセージも表示されなければ問題なくApacheが再起動しています
 ** （よかった。再起動できたみたいだ）

逆に上級者向けであれば、必要以上に飛び石が多いと冗長に感じられます。対象としている読者層の歩幅に合わせてあげましょう。

=== リアルな読者には未知の視点

どんなに想像力があっても脳内の仮想読者には限界があります。推敲の後半には同僚や後輩といったリアル読者をつかまえて原稿を読んでもらいましょう。

たとえば「AWSをはじめよう」ではRLoginというターミナルソフトを使ってサーバにログインする…という下りがあるのですが、ここを実際に試してもらったところ「画面の文字をコピーしたり、画面にペーストしたりするにはどうしたらいいの？ctrl+pしても何も貼り付けられない…」という声があがりました。

これは筆者にとっては完全に盲点でした。ターミナルで文字をコピーしたければ該当箇所をマウスで選択すればいいし、ターミナル上で右クリックすればペーストされる、というのは筆者にとってもはや「当たり前」のことだったので、そこでつまづくという@<ttb>{読者の視点が欠けていた}のです。

このように@<ttb>{リアルな読者は必ず未知の視点を持っています}。脳内の仮想読者だけでなくリアル読者に読んでもらうことで、自分では気づけなかった説明不足がきっと見つかるはずです。
