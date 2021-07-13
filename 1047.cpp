#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string S) {
        //
        stack<char> st;
        for(int i = 0; i < S.size(); i++){
            if(st.empty()){
                st.push(S[i]);
            }else{
                if(st.top() != S[i]){
                    st.push(S[i]);
                }else{
                    while(!st.empty() && st.top() == S[i]){
                        st.pop();
                    }
                }
            }
        }
        string res;
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};

int main(){
    Solution s1;
    string in{"fambaduykhiomnivpvdfnlwmdtidtqiylplpomhldqlmopcpondiahorpfpxnagijgxnjypfnfuajvcmvtyxayakhmkpxnhvqkqaymunhxlyebvfsnsgnjcjpsyhnmtohilvdvxfoisdsxfofuhbnexehgrpkxmkkioowwrrgjbxcgytstpayforqpqtpveobwavpoddujydpajeiyiybpyvlpiuaanqljjagtvufppsynfjmnewkghyirsmwqhxjfwyjdfvnxqoissvysbuoabqylivegcjscgvxrdcsivdddojxmhtmtbwwabagdbjsscknuaeuomsihlsbkklrrxvmktbtvxlksgrotfskeyjhnaocnwsanscmprbjjkhqlscfimewmitqhkxdvuosmkmyygqgsdnruaxeifnhejxvyegchjxjethgjjyyldlxmxgvuysondrrgrsulbakfgovsttkfyjlqsmcpwriifseajuffxewoeuhnhiyasypoijcafsaxsfcgfguvqyfussgfsissnyrdtgcbdygmmbrmapumcwihsolpxtfyspldjigfsvvffmlvaumfswfkruaoanhvoufwovtprcdubtpfsiprfpqeskeyssapakrmjxwocqxbapvkctexvanskkshvopqngdjtjsvgqkbqyahghvkxyxuougbvrhrexsqmckwawwenyuuugcomiqegkddduyujqstmreqkpkwilbptmtwfjgvmmxfdwfkdoywvipwxifdmnbdfmcqymcwwiwjyuiexqsdrixioxeslqnvwyjupnciucshoutiircsrdmjnvighovjensbssimtfxmdlgrqpyoixcchgcaqwepuuxdwrrocnewektpnneqmilusymliwiwdhxiqgsmcoojvvxakohxefgbntbkhukaqtlcyylhfbrixvjrqudcolifngwenmugnqnbdoihysnjrwlhbruekbrbklhmjjxoheksgdpcimrifyotssjxybmnfjobonrvifmrdgvttqcvyophbslhouyopgllrupkixacwuoxgaaprjsfacrkriybrjkylnwlslnfakhuhyinioumfuymrcyftbxscklrvlduolixbphrksnijjxbkfnkrbdxpyislitjqwjnmxupxgmnkvjyhdraehwknxjcggoctvcywgqyvherckdjfspradirommgiwwpudtgjpmlrntkykvfgeyawkrdbskasjrgwjpfnlfvmcinqubppuujvhmwjonwjsprlnfvfebmvertveuwrvhbmveghvcenpaipfqtrbkwuaqputhubaluoouulqvifbtxlxselaiqfsgdpdyergasqlvfhmgtiswucjkkactmspwlncbxhnyttdldtjibavvvibcsqxpwjqcfvasgyfsahbuervhehtqkogdbjmtptdnxscvpfcetmbhxktctnqamgeojnioncbchfedacwglequsyksdvcunfuqjscngiroxhdlfisthjlfnvukcdlttbpqgkseyfnwbnjjqywpspfnhljmagqtclsjrqywravfnwqdxerfvflqhmbpccbwcsxtbpijwsjfmepcxuhvithoypnwopkjdvvihppbvtwsbmfppiiblplbmntwhblcpiualmqmymfrptnnxupnuwtawcrlypfmpibbbdpvxhxjwxwskhcksccmhewkswodpllvtgyehwqbdcwqqgjbjghqcsnapfijvpyuialeraltpnobptedgcyclcrdfsjydixqwevstyrdkokypyperlmcaajtvqmplpwelccgnypcgnnlrsmqrntpeyxmjcnmhwtatstsqitpurdvwotbpqrubxqxgahftdgfvqayrdhpvcfeniqefxylelxqvayirbpjdakvkhlrdekxkvdwoklahytddcyosbqnxkbivototipacevvjjablwyboucrsdkcllpfiuyguiunaygumuwdxwuirggrlpkvemsbqcwuvaenfhlscjvnuqxrnhrfhogtfqlmvlyswupydwaumngrieaisedbxrkoxwngxxgxuvrafbeuwecsjmssotrivqmhfcawtnrmsfojetdpdmpctkrloqhvocvdiimtupolcyedhntiwbwgwtnjnkobmhvlleagmybgaqyspbmfrawggqvegiduhyxliavqcniaiftqloetcltowemepltohmdfwafkumpudvenswbdkaomvevsxleplnqjaqhckdnjirhtfmaubetslwygiefbtjikvnswjjvjjgbaxukubmuejvcxeyfnmgpiqpymkxlkpdikmmvoibwqwvayokwtwjvgfqwobpwjdytvqgledymjffqqotpwnotpvrdcgcrrrfhgkrqrlfnbamsfeuyolthgqvwjifxmgsgfnuxibggqoleqvfjuesaugrdymtruugoeabegwkbbtubmnowvkilunrvoekxvpsxrjwdmrlcepaiwndmibiamodwwmrxhmgjvbpicjnpauxtccwadsagustmwbqfapicidfjhsayudcqpdcxpnleitmbhrjggtolrclitreolbferitahetftglemuxtrgtsgceurvjllmkeouimvmgdwsklstqelakwlrrrqwmudrjlccbhclbsxtssfwwedvnwutnbtxpjhypbfhadkuomyfvhkyfhtbukuvctdnybeyriofpqvbxrplikxxdvbsporktqttruagfnovjtuiyvabrfieukdjqkyjbvjncomelyrndooacgixedbixxqcjylcktrfwaclccvdnluarfpvlwwipefwnusbybvffcqaydsdiuqddobnnninjkmqflpywxghsvygxtddgjphsyxeegdnixfaousxgceovveosafeewjmdgliwtjslesjcvrfyoqxqumxjmsalhmdkpijlswkrixqmukocgchaiwsaxlonbhvegaqnujdsgencdgxqlrvnmsnbpmukunixkqhjiqehrxjmknsaeyxogmditjomwngfogumgppuhxgsdhrnvclcbrdoeqwhawgofpxeilbijwheuxbjsgrymjoqpvefjuymqaevkcdasxcqxssulungcgoexcdgsmufemmuhsjlnbdhbiyfehqycnawqcigngpubvduqfknoqieqgwsoqacqsxbnqjnqxpctqeghdsmgdgwrpllntdvsrihauyfhfypsrobtgwjkdgixwfblcfluplkubwckhdvuolomhufeembvyuruihgkdgrhbddavravsdowlynxiccngyedfampktubevadggbetmcaxnugapasnnpyfpomxfbrifidhsiwwujnvroilvjcopnrojhvfwuvdnaiqrxtywmrrkjuiruvmyaiosofqevrcwopflalyflmmchgvbiihnckvprfujusoovlqyktssuwvcpclungnjmbonbkojhgwsyasofsauojyudslkofeaibwtsnwmmbrwmopvwdvjsefttgxnvjekanmkliqstojqaucleuvnbvvgmjwrgxfjqiiqkujapddomovhojvqihdnhxjhhqffvnqfsrktjextavpwphkawloosorjcytvavrpiprehvxqgyjurkiqorgpnmgeurvxhytjanaphstynomltdtvgarveedqxoayaxbmiyqnbeswfmmnmdqpkumfskxbeteslvpupacotdujrfkklhniqesptclxkelhcmykbpmhjdmchoqiemcekxslijunftunhxpfhohggakkmhrgmgtkobaduqpspfhrxnemsjblbjomerfcnuraocsvivqdllmqwcngengkvpkaiwsyysnchopmdmnluqvhgymqqycpgstekovwiukxoweengjvmldbnoxfojvtokeiqqeqbqxmfavkyvecxjghdbtralorwallxorcyppwuemiwdjbicaokjvqvcfqfldvelgaljidyxfgbgcarfepgdqynywfbtsagqwpprssrqjsebrisjyygucrryxgtbdhvvanuhmyucibnagwkeffxffetqyheyvaswfyynlmidggeaqrwnoasqladgmectuverbynmbyljikdyiftborhuhdfwqxglcjwitqjtpagxmegrsppfdrippijmtoakxpsxdbyakwogsnwsccjmagrxuusbywqwpjrsdaohcbqrxnxvyqsyimnucnigfruwdxsidmbjctahbhqpkfmpojyrveesjxonmyyelsxqseplgxyokgspxaxxwyjqxtrgtvrkwpafcajvdgjwfprvyhyajpyjvaykviitqrcgnuyvyqraduygdwcuxofbjmxmxtulvvyuwmegbkymkakmgvrvnhgxfhwrasbmbserfensnvlltphgyesrmkhewulretonaaqiqdhkpjmqgfuvtqrjqtovoclwnprxvwkuvfjextjlpybubuwrembqcskrqyigqshnrthaxfxjviirsyibtklydmyronwuajoewkmnmbgnudydauaefkchfrahtireffylihxugtjvtyfwcucyhfpfxugrurnujnjbgyjmivmpwkguvosthmgsyqiygeigcymimealifxjpqpujfyoqmuhpdneskbmmrtfysukdgahuxlftbfnqsfqsrqdaugkhyltnnodffupivsgmtwblpteeirjwdeqcwyfpxyojhgkkeaxogkiljihgevnefnomoarrdhmrbhkxnsvxmsqvhhvtiirsqnevowxtlxianydnmpxspkjmldoyinwkuqvpgslharwejvuwcpljyyhaojagrgfejhdhypliogqfulhogeyrxjhnbnbokrbuvjiuscmwfvnymvqwekgeavcjsntdkafftxtjjjonughjvctgafxyuxomnrwmhbtwfwfgsntmlfdfxaxxfgxlioiseseamlyqyhyxuuajhgvcihrjmjigixmektfoliyweqpogqlvwlijwxilftiabwvjwotxjtosrcinexmjjqpskvvtfrguvpnlnaudtuwosrhlsgbopoltrpbgwcgfhgodsrnlvrlylwkhjbiunvbpkodclilninovemryplgmnjnnabnjsiomlvbkydvwlgjdaqoullehtteibmgctowsovmgvrnaietucftlfrwciwytieyesktnivcmhjjoerpwjslkdyvfvgsttdbowrvnaqrmywsxbhilllcifhvnqpjhuwvroebwfxoreqoxmjsqmgyuvdifstdjyqnrcrfbfaadckscxkokipputekxptdudqecqpdxapukxxlfswtbhjxfdqnnbdylfycqqkvjsclfwcotcvkvigaocoolmgrtogctlauwjlesqjvpqhgrgutpxtfswljrovkqtoxabufmeymqcwrqwbwwsqtgapbuvtbcmwuyujuewvxvpdsooigxymkjoqjqjgqntkpirigwdkpeygskgpnjdiypoxyeelxvqubktgfxqwynmjfkehxikpwmctsjsvjgtddsxoapcrcrkgousdnxpqjemkbtveyncpgomntrtvumkublwewomewrcdxrsfifwrxdrxfssdnqrtgfsuefaytrtrmoufrkvlkcwlbphbgkmfhabkqdceiguuljhuitejikkdgaadmsgcfgojacyjrcusbyuvboxroutwdupfiakfsfrcmjqepgvrxvpulvlkmrkxxngrkegmeqxxxximndwwictgeqertjsrftueyrmtbxtdfdgyxxiylrgwpeeirufsexywjrdsohpeypkxfoxugbvaroaoptdbswonmtxkvvxuwonacknludjumvvfdhhutmebjxkrwibwicpxbwyangvyoxjjnbyiwcejjhqpwrcmnmlloismlqsndwgefleollfkikqtflwfeginikebhrrtbdomnvfhgabstxlabtsomxpilnkudvcsslbgyxslopusavurlthioysujscjghytutfcpviwxhmtyvccueerksunytwkvhgikpncltdwudbvxnreubbljpwsyfkujhxisuachyplvcqngwewyfulurdhjihyxuefbkobpiuxyfkkpyfwxltkkcjbnhtcmgpdjnveidvkgkysjcpyauxmtwyvnjlerokataeiywmrhybwkqguqfpgtoeahfckhamfiaejyqbsqikpxdahhsgqdrdbnduyjyufyhfhrvwwlehfnsajehugknrqytnukaqerkigtodmalssnuipqpyoggbalfhuirkfbawcbjlodbbehryyilfmqbjckjcxkqloutmhucjiiorylfoclcrxfprvffebearvasohmhdbhwvuubirfqvnbjvynwvplpqvrucisldxrenxmoyhxkwptbbdupbipnrafxfsddbjhikwdymalxxeoemxgqfvycgrjouykkurxtqngjykjcdbffooshpipnkxhrxnsoelnihbhdwyhhojlnntifakjhnfkyyjowewguwxwxlgxcuxkngrsarwrulltubllwjjoqntlxygniiputxfujqgriresbpsjvtquuqvtnoqunrofduqkkxnguxxywcpplnoljqbgyxfmuyxwprtgbhqbhewpvtiqikdfddwvoulejdlglhmbjbhpqbhkatekqdmxmrmfwidocrouivsbuwtonfytytaxqbadiudkygqtpstrhdyjuhsmdrrbawvxrdddclivtwxixirjbxaishbsxabgrfrfpnkoapbsririnbmtfgixhofsfwwpbdgrsnyisidkatlorwxmqcrayprdjmkjahgnourdtyaoedpohrljiupcojkhjiqqdpjjoetxjhqxdrtrqlmieatmwkihwikcdcogkwuwjjutnhtjbwltidsnqmlnfwdcmyrwjlfwiwfpcgqcukqqblysiflwdyqmkogatwbgsqwsqesxlqtjwxoasgdhfctcwanyuercpmwigknqxjktunjdimftjgpcxbixlrdlxtiljrarvyqhobcdowkoxpbonhfbufhtjbgpdmltallnqhessgnrjpuacdlbahfghbuqqpyunrabpbrvtakcdtmnxgnwkfejvjmppueotammqrinjlafavgmpcljcxwhedlkfknapckbnbbjhvbcnltbcfsnqfmovqyrksoclgpymfohlwjbaephdcjrsgjvjmbdhodsktdmbxlqowebgnnqcyybksircetnucdqgqlbaiktdtwwgcbooehviibevwfsjglmxwjarfsercsirwhrmjtdiggciurthgppwsxwlovsnfbaudbvqsbpryfmxbsjaphrfdkaktvojkiggplhaqweqwbhqgeticqikjoodaimvbbvpexbsoftdacweojgwyhbfptwvaesgwchebixkpswbgsmvajavfbslwmuvtpaynhnlwpnxfahaayomvjvokakxtexkctoglpewmvnuyvdtjwtoiwhkhxrfupjihspkqadkdkxcxtwfpgvfjjwsikbbtbwjtmudcqhklvsglypuxyltfnqxpqllldhbmqfjdvcelpkyypvqgcidyupuevyqyitraureenxduryetctsomkssowraxquppikiqtladeelfqgcgijfasdiulamwpjgqdrmjmibrijemhpplmsbhenqqksjviascqaindrdxjlenjdhsprsfdbutvkfhiveygjdtoxgwyttttbkyaaqyrgshwkabqecktvnawlrxnaqecgltibtiaseuqnklnenvhdcdnfbgwxvrmoqukgdpekmirpvvtapqkehkchilggdglicukogrmuqypuomjvigijvrqmrttfpshlhhwalbxvkkvvlxwcoxmlfprsjwsfqrsmwstqtbpiaeivpfkkqtubghjyyrhswbpslwbvitxmyevhbcydqacestdlogppmjmnxbcoswuthqlyrllviaibvnqgjofmotwklnxdanagmdpfwnqkgledpoixsqerpfsiseagmbkkpumupjspbogexubjrrqnloqbvsrwiqmllheamqcijpmsdnsmqrgdtpsvjaurwgxbprkhoabkvwfqeflskhhvxlhhhipowqrbyooognxundtwhqacclgphjpebywxyoiwabepniywdevvogfrywtnnijhgeohosldqhsawkcqqyifpmkihoalndlbwqmvayuddhlfxqqwrtykxfhibumsvlyhspbbeigrqimnbmrtuvejxpiiuateuiydmdyalvykfwxmvblryhfojenrjxkwufasedtjjgmojxvaihygrkxhnhhlppfmnpisrxkcbfvgmpibdppklwoyujoasmqnwuhwixqojixfjtshkidwqdhukkdntojmxxcokbkisudnoinmnlqkiwntctixobeofqwtnsixrvbydnstasxhmesiajropxslbueqgvbpqcukxqlekwlpepguyahlfbxhqyirhxfktubwddecfqfdvymcguvpcjeoslaqahbpabwjsuvjaqfrvdmwdoeflwxijxaqrtfrqfmciounvadgexnrrpjpsgpsnakavuxyjmuvisjgrhsmngdbrbpptjitijdeomhuflneiyofwyjoohkusbdrrskljmrfmfuycsagphmlofrphevxuffywsggfckylcojecelhashgoajnvwixcrlkwfnaqpagfiggyoqdtilwtjgbiwtgxsnxhiwyptotaxukvothngxvbddelkgfxjlvrxdnjiopudtlarxltpfwofcfjrocpaaenfsnwclipsfhenupwhvdxdyacnsqflruujbdohsckpnxkkdjaxgwpmaxrfyhcrhvixeltgtnxtcwwnawakdadiiofcxgpoqtysepsuionsgjkuadkrlnfyfjdgpefbtmlujomeshccfbleftquovsplvayivahkfbjrxqcxmcpagxemyfndoimraqldhedqduamuwocgxiqwbqtgvabsmxfbkdmbbidwpopbkgxeibxruxduyaswfqjjbhxslauvjlnqguleyhmuuwtkyvhuithwnhabofhosuoclpxstwmypnvkjxewchsnhvrflkcebhfwbdujguwvmrnyxblvhvdoxgojovktcprbacgrcumfmdjmhjlgghyjiakbxxphrvjmoimkulpvcnonmkxypikymhfwejbiahqdgwgsxmqbmxmifylwtcfdfqwhwjkudcvywkpislfxpoaeclxnnvqmfqsuqgsspowyftjhtptpkqhqeplmfjdlvbrxuxlncyobrjoiyatehpyjqfjcysomvreyulnmnrdeoamnlydibmqefwiaqrexehrawhqstapwpeqqsaunkjusmegxwpadroumqqmanakbchcqwlilpguoeccbicsgaoxtctfqqkgarwibkvdscrfimhpwwtnhbrvykdfqstujnojcwwknngbhbelsoquubfjkervoplwlujvdvtpfkurroitkbhmcovkubtqmpegohqontlgkrvweidtxndbnaonuxljofdlfxcoriigcjwomgmwbcwjslsbmawimayfnyjflrjhsdmcbuumccufalwmbjquqwobbcqooqpbpmasfsgllgttjboektnxmhbxjlmhcadfimdjgeddnqwousnhxvnmloukggtymjkmdywmgsjcdtjenhddogpmahvkpxwbtolgnlceiodegbcctbbvucqdgodmyexmgsrvrupxynkoclosdrlpkhveeeofblafaggdwjbuomiiedkwpjtubjafqcodgkeulvrwojvhqobnvgerjkbedssviyhlkuudowbqrsgdphfvdtwmxmaboqyttnugkkriqyktqjxjosolhsavbeojtfqoacpduvupjhgyhlnfxxbgvrrjqbkoqxsbxqmaciyacgpvkbofefueawxhlkxaubgfostqcvrvlybvpyipanklxfnahhygmuhcpakuovyquhhrcaveneaqtljdkswsmjbdhpxpbfbxqrsmvcsawetghfnhogkpojxfecackjpoonapjpopdvmktojurwheemalpjkylhpsmdkcjtrvtndbrrjdioahtreifwfxpvpraiebdauoflciroprsfubpiouyfmjscrjitfjfuytiigxcupggwvjjiwnvuvmqtgpaeywbaankeesiebbwvwilvjhjlqgatdfwlbficexqjcftslhwyhihkxsgdtrvaaijigvimjmyubjphvemopoolsycvfpdpidexmnieyxycjwyfohcroqamnutmgobxpkgqfxsjbfvwrrfonfuuqpkixpfkrsfoyytujkuuvaoycelsfshgqqwgnkqwbxqaksgbfowhujkwmaswirlahbyrrskuiagxllxhghwprtglhqiyfjeqrddwoiixpdykgsrxliioplujdsodlyylyvdlqaixlvecjngcncrffnilocuyselgqkbycrpsnisfrdchaxjscdxqqoxnaijisqvgrxomemlggnxlaiucobhjtkwsktqegmccuamgibkuxyhplrffnjbgsrtepvbtpakiuwehrlwxskivhvvudvvedosgmpcwhosdolwlecbtbrpcmhkmkulejtuxlqsjsufjvahlqwefbbtqtvuxnbcqsufxeaoosyeqytxxsmvpvwkbboclsewjuhqsxvrgpnsjmupvxygnygqhqateyiysbwswgjinpspoyrlupttdjnogtfcmxlxehuaictyggsenlqlstbcfwghxsfaxdfpdtvkntqtyomdpsxxmlwnunkwcdbdtaywsdavrsawkvcibeywroulwkpmrylbwyuciwftitqlhyvkihithbfugmbmivpkpwwvkwujoxnbsabtnqvwjbddaatbryensiamtyqkwtjnhuvckdesncuevlmkxycmunpralvkhltmxkxgwuhmvaulojrttfuecpljbeykhlkffcbkjwabypfavmfygiakjqqwrnhlcblmhahyfcmulpfqivbdvhtxvyorccfwneewvtmthekecutoigsduuokvohytlhgxafyemheakunyrgmqefpbqsusitsfmioxtinyfktocfxhyjhwoheiryuevqgqiaaufchumeelfhopwdhasrygwiyplygpngmaexfcdiccdneguvacrkbhpvillasuqvumsfrdmcablaqxdlvbjfmbldmpdhbwucdmafdtsbbjqkvcquutfhtugkjqhclnlvpyjiylubqrfnafdfkrmvauyiwrdleyohmuvlcadfbtrgnvvvtruhxcjbggciiiqjsenfxfacjfhfcbytluxrjkcshedkysmpjkpmvxbnjrnpywlinqbjfchsfohcbahrfpetymoaexhxctgmtpdjgauwghcrrkdxqwkbmaoqultxfobvbkwiocsfcrrggpfdbnuyweeodqgvqfdndpywtscacmdeiqukmougnvtwbohudktucsaxfewjexkwqedbjyxabfajskhlldwrqhyimderjjlmmyccgtwqolygoeufyoeacxunnbtunatgpvafdcojoodacspmarrkiucnslmckruhvgyemxmshvipbmtqjrdfxoqgrrjxlntixvmassmyfgktrsgydclgepvxlqveuffhhserccdicgkacqtdeairdlnskldtnumrwxhicdpeohbelelrpacrvafabhgjydclmojjjjergbtyqflpgpfmfmvmwlbqqscofafbhgkbbfwaxfcmucgnckyjvkenfokmokkgywieeutredbtvsnppyulwifhrfmagjbdkrjcyibnfyfvqcgwefbdxlijxwtqgduoxjeiyufhftgosawdeyvfionpmmnipeiuiyeubrykubchtjknyidqbxwplvhxyiljxptgsevbgdqxswfqctvqswwnbgdfcveojfggrqhnhydpjlonafmqthnmxdatmmxedepdiefpihwrkxhfxnvnahoybxahfleunsxtsptffainbqixhwulvwhsoshrvaknjsqhvxciernlrwtplniqynbnqejyvkjmsnhhhddagnbpylwuerlskbtgixvnshxqvgpuranmnkqdlgpatrmneidobnbeygtnyawgsubashihejdcjwcpyjdbdgwdvgluaexnweeidhydgkhsrtxxythwrnxfmukdejsaccdjrvrxogpxtaexxxamskxxbcsdkiavpdvuasucsutgunavbdqtlhbjsdjvoicfryntqdwcxshdpkqkjcuewgckssyixgoniroyfoinbnugldvobryttdhyyydpcopcoleahkhjnywkyyaswmllwexpurcawubolhviedflumqdnqrbwtamajfxrkvfnmudkdjkwbgfsglnfpgybqjceqasnvuawgoyynvexmwclojhprcwixsowlalsacfwmdjtjhkotlwianamlwvkuguvkfhyvpcdknsvvggxtrogayakgihffombcuewjtgxwembyywidtowggbwugntfuxtomjgsyibmfmdgtwmspigwwrsdpibvvreoimmrmgvgragxeuemftsicvfsvjihdarnjouxrfwxakkcefmsgcfbupphcjqtbwnjuqtveqixnbuejutgorxryddsaryfqpeappqrdkgbpiifgobxpigmllrhguflwmononqyjigyttaesfcdyysqdptoojqebrjxnyowqfpbqyigmmxhqwcdbyeyndbiyjbbiywwcyjgsgkrvgtqfoiqboxwwpfnndhrynmmitxqpmuroelxbtofghdmyobkpgidgkurcjhgdstuowkmaoobtxxuauuqkupcnqvgemcdhtqsyqsbuvvpxnvdrqyslgjgqofufkhwoldbktcxtfqilhkuiwasvsyccgkrfvmeyjclcbogdyieqrmnopuosikuvetsmgrmsabwtlleyueblcikaihmxxjbsxflqfrgaswmfrelxndoqqpgoruckittchxdbplxhgkroahqfstbmbeqvwukabqsvvcuaasavmqespeghdjqjfpgavfwltgodagpswyygouceobsfruakoeyvdybeaimeurywndugpbnnmywbabkejkeeyaylspvgowudnxqpqleppomwtrjfrbayghopgtoycgappvkyhjjwdxnhlqghaqxstqpgqjjbxgbisdimbgueqixafelcyiaprbuwypfuxubvdecsknunsefbdiqgmdywocubmihbhiswgdtqtvqlwwliaabgequrbewicjoxytrvjiilbyxfuwebasfuxeeaimeacqpwlimmyiysvbscdyeiiseablhwoiosrgnfxivrhxtcmfdqrgxpitxogyrhwmgrmjgrycawsirasgeywmmqbioujvfexpewmxffauadjinbvyljbxfyqplqcuuqowfurefiqwbtvideiexwnbycyoyyiytmfdqcrpicgklymoxegsokitodsosrchhikalwlcmtlmfstefcfoupxbnuebcytktbdthntkxbovnwwnhactncxhusjysfsjsuvagrboflxedqbblfhimpxmwbonqathpsycoxhmpvpbprguosqcypqkyjuedmosfkwlixmnbjvuwfohhsoufgsuvcivimnikdooykrehpbjkkiauihraiosoppdohbnlcayjwxvtutsldteyglojhmrxecegmasufruxiuwpdenxjdnyythadtqpmaovsajnhhetjylmebvjjtwvroppcucnnncfbaxhvrwsllqljmowcswutjdgkcrvlsydnfhhnauinhrmporqxnvvfdqcohvhgsaqctpyhmgcbbgjmehvviiscuvvhugtnwfliqinivqjcnjwiektpdcphxwnbuypgnrvjvsthfmiugoesmagivpmuujpsjvdsdiaysnusscaeeefrgrktuvjckcvwcvbgugrfvhlnspdxnkqstxntldebiktqkfgxpdemytqkiteantkrnwrokbywrcuppylrgldamnpasjfdarpiyxrmvubuxxsjxqimsaaqppaxabskjfoipdwgengosfycksupkmpnxinmwmlsrcssrgsjqoaocejhwpdahwquxvydoblhfysvhcdkestqkyyxbkdngrwodvphdmprnkcwbstkbsxcoislsmxqxgekddreeqlnnhdyobtqnhfgqvaryberlydiipbgdnbnpdkvosgnctepqrgnraooaunaqrouvlupjkwhigbpoectjiovwcnpwscxthwyraxkbeupqwxacrgxttoeybruqtdvqdwyusetovumflbprcbwudhkpooiehdsvxiqeiqhrqgnbxhdathxkcontdupkasnxvvmmkkbdkdbfgjmdoxjieodfsycppsbpjtamicsfeaamhmpdvxswfjpvymoqwkpfwuvgxedrxexrvtrnwydstgelcapfyljptbjioeinufvcdsogfbhgaewojqusiwvqstcjjodttyjunxtrhiweokgruerqogccynvngucoyhxcwctiqyxbjpclibgvkxhqnpgdakwhvrytcuogkyaluijemgipeutyurbcuxeugobtdijlqrwiagvrinupkkmbiclywrtqclhffavdwbqvertevynopnpqtwfntylysxvadeobieefevflexmuvyrekmjtjwgmkyobocesuiloawvcscnxtqdafwcycdvevscsehenmwvywglalimueygwwvgrbyuslpvkkhwcbdkjqedqadilybmraololwanidrhsxtgrxhwglqcgaoqmvolpvmjwqphypoiaptyrluysyacdmytqovqruekfbouaymijmfofjvrrlmcpbkayonyyqkldkkydpihppxyebdehfvmregnxabbxcfbcnllgoyvvaivjtlwlknakuhtgwwyyxaffoleomaqfdsdmqrpccrhflydnvbgkcwmrigipciipicvdfplximjmpspslweovrqugwfwfdnqtspskbfvynnfiixduchpqgoicucuivphjboqvfmrihsdqjwbdckbyhlndrvphdgxfecgcdgpcruysooamusjyxuxibsxuovfyshvbgchjdnkalvhofdobhwglubsytuynddwwxyoabggyepbnaxvxhkiyctfplulglevwmpduuwfdurqgqaahxrugmhqqhyjsfwpmqkevcnqfnsypobhifjekaccsqsxtyrvjstefwaooebqtkfxbhndpbyosbodgtselatfimanvgcdpstquksvhgehsjkcssufvufauppilbrpbpmibbdxhhlqnkpxcyhgbaccgeicuoffptfhnydsjpkoybcwaaafcauigixxglyaejcpvhawlhbithwsmnpwgyxnscuautnraymapyfjisudpirbpyxvwdvcdmyrmrwwxldyhpbmkewpomchisgoxxtxwrhmayordxxsetasqckbjdmohotwkcpdbbvrdphcowadegmgmdlcbbbsleqvecrnctyygdxqweivatvimbjratprjykubxlijexelxuctbdhfhxevqxkhgwtatddujabalvaqlwsldopxotqnnenubvimlkjmhkrfwkmmgmsowscehifudqgsjrtaxgrxlrjwldhmhrmelinvurvuwodxgokvqwtiriflwyivihktyvhqbvrlsfwkslvtsveqidcyhsdefuvfnybjorsqvoehettlhhousesxxrphkunydkjxffxncjdiyijfcfqpqvwhxxygotixypnhtxdkqaosjfdfsvybjrowsmwfebuiiijfkwnqeoukmdtjeljmhpnoyliuweydwgbptjvjxeyuwnncyrudkiqsnfbiywahyohhhyvlakuewltqemgphkyshrsficsjskobtmcnvjmuryeiinjypsdermbteuxoyhatijqelxinxaemqgdnrcjmiknyetkrhksqorrqjswboqprccubbkcvgsgyfqynpmvplidtbugocxamdykooohrlsrobscpshtqrsewsklmdnqiijvdjkrygshpsxmnpqfpnywysajewvqeiioltvqgjixosmvokljfcltyctxcagcgxkejegagharrecjhrmgvyracqyiddjkcklivviupukybjijmxbratmgjylpnsnumakbrcaiigmbjhhvvnwsyjnqrycljdmeioklytkvwknhfvquilbjtcgnbulkmdavynasdmnuffkgcxawdgfmvgvobobdfhjxdyffvgfixptxmlmumqlilibcstiilyaxauiohjfkmkdslsamiffgybqlbbebxebxwmwlpbdqaulpxwlbjfeogdjfvsijvhxqgmsnjpspjylfcyhyxpfduhahfeomfvtuxcwigciyjwocrkuchipiddjelhgnxjgsynxwqwwlomacyxktcswnggufbwchojslwqhbsqjlfknorqdjkmjysmojdbbnycieempxuerwglmisvudcuppjtslxdepnwcdavpxgsydjmxjkelyshounenopfmlwhmuvjqxjktmhhmwnsqijnpbjvchkkfjubjpkilsfebxpmynphcamodylosffgmtxqikaaalvduapvqphifkyekwgqexbqkonltrxxiwfrhgdgfcwajgvswqlbylqeheyffrvwmfyvlrcapfrwtwuutsoqsotiqiqomudgabegpnosqmsqsdxpxojksmefhfysxdamvfjgjrojqwuvyxcqvxhilktqvegqoxctuykopjjaoxyonxdtjkolatippgtjdqvfpunjwepyutjidifdydugjkvxakkkvbimnkypoatgwxicerbuybkioxjitnijtlindoiewwwtrlyevtobgpxugnlspcarrcrrspclsxfomcpinvdexloftlasebjpxxjbishkrgtstbaarridwmnkhcjjsrovqbqexovmwetwdkklermgaqrpvpifswrrwvwoxsxipyoveieydhiuxugulpmbbssxhmitxkbuypuypqyhlgicqancvoieroffewfmbrcvkbhlisbdpsmsawhbxdmflskubpqdtiakbmxccgdkwwexypbomvieeuoapwungdbvjnxggkvismhbjhnfmeatardwtebywpjebamhirefmqsjeijeohgcnvrpdxdvrjhyrgxpinaysivguyrdfdrjvyebvciknwckkdlyhstlmjobiotyxnvbiunwdoxgrdhchuxnedvmcbdtgasgnsstgdajtgtixtmysubxfrurivifumxnxwkftntpinfoxdllehudivbiaupfbrhdhigauklbwvyrarcbxdniuxesiafbhjypnspihqmgsjtcfnsgtjojuypgqmcdvwikpsxvjtxrfxqvjjcyobbpagdcbywxfppwovihiloesjxhopppsopmhtdgxentxkiotcwwvgnfesvepleguscbhghkqfwlxhrsvjvjtedieedpfgvvkrijklrlbdoavoymlybxucukpojvgglmdskhgmotctydjcfdmdceukgyjprnxiigbdectfihlvwnvyikihsgyfmrfchtjmyvhvtsvxemcfrxxrgvyrabgqfywnhsyqyamjxoltwosbiirhrpggivjcamjqknehomkilnipcaudmnaimlrudhjfeuakwldbidxclqfsihocgqawkchedtuisdhigawrjdsuexlqlyvwfukqqapopgjusijjgcyjrvyilcolqtthxhagglmxkmdpgpixglbteuqqaianbdjapodyupfmxhdwfkiqpqanpmgmytgrkwntmwqbqnvykaxikpyyhfxdhfhqngfwqcmglpntqvxsvrxnklorhqeqxxkvafiajmqdtavpjhnkadlfxamoyqdfxajrhfnncoqrvpwducxmffqpvskkkkdyqltmlcgkcflkcskkbhmyyyfjhufqgpicxcneukvaicjwmhwcsjcswewitnysuxcaowkghvsfqbglvebfgtutsainhjhxlchoykcjweeocacelchyfrhbjreuyyqnghppgxwinseggebvommhjgepjpbkijtxdgwbvrosvftdujcqamrhhmlpbjukvdaaihqxodwmydqarliqojlkojkihxuvkhxxisnmgjdrvdjcldlhkmfmxcaxlvmkrgteecombxnjmemlkgpbvdcewjwqaovbhfoaxedlrqqrausfvqsgbfuvhmbpaevidsqoerxfebowvncqpgwdmyheagxequiumgicxnkvgdlnpqyitcjsfjftgnhpyldmveckfsjplhyknktmhxntftqahdnfipdslpryljylasyhijpmobwpnkragqovsotnaneravtnkyagdlfwpdeqjgovohitjftragxgffsekxijobylrllyvkaqmfbbobwtowyqendqwyqgycpvvjrdfejdkvsqceapmgkmyxqjaxtnsqevmvlsxkatqcfnvrixbyefhleflncdapcslokclkfasirihwbhsovdcbqyefkjdofbmainesqmebhocvsjaqinhdsxsywhllriorntiidmbrqvrukbeanmkdrblbtsnsjquynaeoncmpiqrbmplsykiwinrhhrvkrsrvvwywkncxuudmikadxwpcgbinhmiidxlbsvopeleampfujbiikglumjyqtiqhbwefmhufhiyvuileeajqmppmktnhexqykcsuewvyeqfeirloyedjxlavdogdcqcymeaodvlbejcrsbobffyxituxsgsqnopmxruodlnonedxugfumfljpwncchoivoemnalbiopvkuhicvycesvcgqsqynmcjpwpbwyefkyqhngqndeigkgvvwmrmmjbxolghqpbogvmekblrgdfhveibligrcypfjedaaqbxdtxhnvrkuxuhxrtnnocgfhvkwehcjapipesjqsmyckmilujvknrcqkfegfbmuquxtenwohxbvofdxipafyanhgpfwgdfrhemxaynhyqjglljjlpnuifikewdqttyqppmsxehpohsonngbaijljtsatimrikriajbbygnibmxduqjqcpnyqbtmnqvomqoeducbprmbtffvvfvludymbsvibosbnhhkasukusayxjufrfnuthtkjhclahbdorfkrefiflwecabxjuejgidpklxtyiiaprnlddwprkpdmufflcrxqghnbrjwibpuxijlahnjtboyprwujgopcjibquguogtdujivbuptraajotwudlwbfgycxrnwkahqgqgjahuornkfmeljnuuilagolnyfdvbwbxfkowauxlfgqigvdtefqcpsyxgwtlfklxoylbjxlarefyaouvrtygpqqilibnvqqcaumykavvgjebikwilcbokkqrehgarhjryvvqofjvclanlrcoqpkmisuyylcngsqbdwfchksbqqgxudjdwuveugtwkvcjphawhemvfekufimwmtkdwtbqtkdduocqpwchifhbquplxljapurvadsxgnsshojndhnfomfnwrsrwfqdwbmocokvdyqutdaodhcattepyvapjqwdogwdbidddoycrnofcxpqxpnfnrijfubtuioctkuekiof"};
    string res = s1.removeDuplicates(in);
    return 0;
}