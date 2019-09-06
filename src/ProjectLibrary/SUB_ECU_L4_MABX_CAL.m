%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Autogenerated by export_data_dictionary.m
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% APTC_PEDAL_LOW_IDLE_SW_THR_APV
APTC_PEDAL_LOW_IDLE_SW_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 3, ...
	'Description', 'Threshold value for accelerator pedal low idle switch active status.', ...
	'Unit', '%', ...
	'Min', 0, ...
	'Max', 15);

%% APTC_TRQ_PED_INV_MAP_PED_POS_MPV
APTC_TRQ_PED_INV_MAP_PED_POS_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100;
 0.3125, 0.33333333333333, 0.57377049180328, 0.92105263157895, 1.2068965517241, 1.8918918918919, 7, 7, 14, 14, 14, 21, 21, 21, 28, 100;
 0.859375, 0.91666666666667, 1.577868852459, 2.5328947368421, 3.3189655172414, 5.2027027027027, 7.8448275862069, 9.378640776699, 14.419520547945, 14.708092485549, 16.987804878049, 21.414551607445, 21.822147651007, 28, 28.95703125, 100;
 1.15625, 1.2333333333333, 2.1229508196721, 3.4078947368421, 4.4655172413793, 7, 8.3034482758621, 10.669902912621, 14.647260273973, 15.092485549133, 18.609756097561, 21.639593908629, 22.268456375839, 28.383285302594, 29.4765625, 100;
 1.59375, 1.7, 2.9262295081967, 4.6973684210526, 6.1551724137931, 7.5340599455041, 8.9793103448276, 12.572815533981, 14.982876712329, 15.658959537572, 21, 21.971235194585, 22.926174496644, 28.948126801153, 30.2421875, 100;
 1.8125, 1.9333333333333, 3.327868852459, 5.3421052631579, 7, 7.8010899182561, 9.3172413793103, 13.52427184466, 15.150684931507, 15.942196531792, 21.175942549372, 22.137055837563, 23.255033557047, 29.230547550432, 30.625, 100;
 1.921875, 2.05, 3.5286885245902, 5.6644736842105, 7.1412103746398, 7.9346049046322, 9.4862068965517, 14, 15.234589041096, 16.083815028902, 21.263913824057, 22.219966159052, 23.419463087248, 29.371757925072, 30.81640625, 100;
 2.375, 2.5333333333333, 4.3606557377049, 7, 7.7262247838617, 8.4877384196185, 10.186206896552, 14.394941634241, 15.582191780822, 16.670520231214, 21.628366247756, 22.56345177665, 24.10067114094, 29.956772334294, 31.609375, 100;
 3.8125, 4.0666666666667, 7, 8.9339339339339, 9.5821325648415, 10.242506811989, 12.406896551724, 15.647859922179, 16.684931506849, 18.531791907514, 22.784560143627, 23.653130287648, 26.261744966443, 31.812680115274, 34.125, 100;
 4.3125, 4.6, 7.8549618320611, 9.6066066066066, 10.227665706052, 10.852861035422, 13.179310344828, 16.083657587549, 17.068493150685, 19.179190751445, 23.18671454219, 24.032148900169, 27.013422818792, 32.458213256484, 35, 100;
 4.84375, 5.1666666666667, 8.763358778626, 10.321321321321, 10.913544668588, 11.50136239782, 14, 16.546692607004, 17.47602739726, 19.867052023121, 23.614003590664, 24.434856175973, 27.812080536913, 33.14409221902, 37.098765432099, 100;
 4.96875, 5.3, 8.9770992366412, 10.489489489489, 11.07492795389, 11.653950953678, 14.157303370787, 16.655642023346, 17.571917808219, 20.028901734104, 23.714542190305, 24.529610829103, 28, 33.305475504323, 37.592592592593, 100;
 5.71875, 6.1, 10.259541984733, 11.498498498498, 12.043227665706, 12.569482288828, 15.101123595506, 17.309338521401, 18.147260273973, 21, 24.317773788151, 25.098138747885, 29.191489361702, 34.273775216138, 40.555555555556, 100;
 6.28125, 6.7, 11.221374045802, 12.255255255255, 12.769452449568, 13.256130790191, 15.808988764045, 17.799610894942, 18.578767123288, 21.739002932551, 24.770197486535, 25.524534686971, 30.085106382979, 35, 42.777777777778, 100;
 6.5625, 7, 11.702290076336, 12.633633633634, 13.132564841499, 13.599455040872, 16.162921348315, 18.044747081712, 18.794520547945, 22.108504398827, 24.996409335727, 25.737732656514, 30.531914893617, 36.333333333333, 43.888888888889, 100;
 6.890625, 8.3738317757009, 12.263358778626, 13.075075075075, 13.556195965418, 14, 16.575842696629, 18.330739299611, 19.046232876712, 22.539589442815, 25.260323159785, 25.986463620981, 31.053191489362, 37.888888888889, 45.185185185185, 100;
 7, 8.8317757009346, 12.450381679389, 13.222222222222, 13.697406340058, 14.185606060606, 16.713483146067, 18.426070038911, 19.130136986301, 22.683284457478, 25.34829443447, 26.06937394247, 31.22695035461, 38.407407407407, 45.617283950617, 100;
 7.8606557377049, 9.8130841121495, 12.851145038168, 13.537537537538, 14, 14.583333333333, 17.008426966292, 18.630350194553, 19.309931506849, 22.991202346041, 25.536804308797, 26.24703891709, 31.599290780142, 39.518518518519, 46.543209876543, 100;
 9.1229508196721, 11.252336448598, 13.43893129771, 14, 14.599221789883, 15.166666666667, 17.441011235955, 18.929961089494, 19.573630136986, 23.442815249267, 25.81328545781, 26.507614213198, 32.145390070922, 41.148148148148, 47.901234567901, 100;
 10.327868852459, 12.626168224299, 14, 14.65625, 15.171206225681, 15.723484848485, 17.85393258427, 19.215953307393, 19.825342465753, 23.873900293255, 26.077199281867, 26.756345177665, 32.666666666667, 42.703703703704, 49.197530864198, 100;
 11.532786885246, 14, 14.757731958763, 15.3125, 15.743190661479, 16.280303030303, 18.266853932584, 19.501945525292, 20.077054794521, 24.304985337243, 26.341113105925, 27.005076142132, 33.187943262411, 44.259259259259, 50.493827160494, 100;
 14, 15.559585492228, 16.309278350515, 16.65625, 16.91439688716, 17.420454545455, 19.112359550562, 20.087548638132, 20.592465753425, 25.187683284457, 26.881508078995, 27.514382402707, 34.255319148936, 47.444444444444, 53.148148148148, 100;
 15.25748502994, 16.647668393782, 17.39175257732, 17.59375, 17.731517509728, 18.215909090909, 19.702247191011, 20.496108949416, 20.952054794521, 25.803519061584, 27.258527827648, 27.869712351946, 35, 49.666666666667, 55, 100;
 15.425149700599, 16.79274611399, 17.536082474227, 17.71875, 17.84046692607, 18.32196969697, 19.780898876404, 20.550583657588, 21, 25.885630498534, 27.308797127469, 27.917089678511, 35.298507462687, 49.962962962963, 55.234680573664, 100;
 15.718562874251, 17.046632124352, 17.788659793814, 17.9375, 18.031128404669, 18.507575757576, 19.918539325843, 20.645914396887, 21.324503311258, 26.029325513196, 27.396768402154, 28, 35.820895522388, 50.481481481481, 55.645371577575, 100;
 16.808383233533, 17.989637305699, 18.726804123711, 18.75, 18.739299610895, 19.19696969697, 20.429775280899, 21, 22.529801324503, 26.563049853372, 27.723518850987, 30.394736842105, 37.761194029851, 52.407407407407, 57.170795306389, 100;
 17.730538922156, 18.787564766839, 19.520618556701, 19.4375, 19.338521400778, 19.780303030303, 20.862359550562, 21.836956521739, 23.549668874172, 27.014662756598, 28, 32.421052631579, 39.402985074627, 54.037037037037, 58.461538461538, 100;
 18.023952095808, 19.041450777202, 19.773195876289, 19.65625, 19.529182879377, 19.965909090909, 21, 22.103260869565, 23.87417218543, 27.158357771261, 28.39837398374, 33.065789473684, 39.925373134328, 54.555555555556, 58.87222946545, 100;
 18.275449101796, 19.259067357513, 19.989690721649, 19.84375, 19.692607003891, 20.125, 21.192660550459, 22.33152173913, 24.152317880795, 27.281524926686, 28.739837398374, 33.618421052632, 40.373134328358, 55, 59.224250325945, 100;
 18.904191616766, 19.80310880829, 20.530927835052, 20.3125, 20.101167315175, 20.522727272727, 21.674311926606, 22.902173913043, 24.847682119205, 27.589442815249, 29.593495934959, 35, 41.492537313433, 55.941422594142, 60.104302477184, 100;
 19.449101796407, 20.274611398964, 21, 20.71875, 20.455252918288, 20.867424242424, 22.091743119266, 23.396739130435, 25.450331125828, 27.856304985337, 30.333333333333, 35.668380462725, 42.462686567164, 56.757322175732, 60.867014341591, 100;
 19.658682634731, 20.455958549223, 21.132575757576, 20.875, 20.591439688716, 21, 22.252293577982, 23.586956521739, 25.682119205298, 27.958944281525, 30.617886178862, 35.925449871465, 42.835820895522, 57.071129707113, 61.16036505867, 100;
 19.74251497006, 20.528497409326, 21.185606060606, 20.9375, 20.645914396887, 21.065420560748, 22.316513761468, 23.663043478261, 25.774834437086, 28, 30.731707317073, 36.028277634961, 42.985074626866, 57.196652719665, 61.277705345502, 100;
 19.826347305389, 20.60103626943, 21.238636363636, 21, 20.700389105058, 21.130841121495, 22.380733944954, 23.739130434783, 25.867549668874, 28.083333333333, 30.845528455285, 36.131105398458, 43.134328358209, 57.322175732218, 61.395045632334, 100;
 20.287425149701, 21, 21.530303030303, 21.310483870968, 21, 21.490654205607, 22.733944954128, 24.157608695652, 26.377483443709, 28.541666666667, 31.471544715447, 36.696658097686, 43.955223880597, 58.012552301255, 62.040417209909, 100;
 21, 21.476, 21.981060606061, 21.790322580645, 21.526548672566, 22.046728971963, 23.279816513761, 24.804347826087, 27.165562913907, 29.25, 32.439024390244, 37.570694087404, 45.223880597015, 59.07949790795, 63.037809647979, 100;
 21.516393442623, 21.98, 22.458333333333, 22.298387096774, 22.08407079646, 22.635514018692, 23.857798165138, 25.489130434783, 28, 30, 33.463414634146, 38.496143958869, 46.567164179104, 60.20920502092, 64.093872229465, 100;
 22.290983606557, 22.736, 23.174242424242, 23.060483870968, 22.920353982301, 23.518691588785, 24.724770642202, 26.516304347826, 28.913043478261, 31.125, 35, 39.884318766067, 48.582089552239, 61.903765690377, 65.677966101695, 100;
 23.409836065574, 23.828, 24.208333333333, 24.161290322581, 24.128318584071, 24.794392523364, 25.977064220183, 28, 30.231884057971, 32.75, 36.553784860558, 41.889460154242, 51.492537313433, 64.351464435146, 67.966101694915, 100;
 24.758196721311, 25.144, 25.454545454545, 25.487903225806, 25.58407079646, 26.331775700935, 27.48623853211, 29.305555555556, 31.821256038647, 34.708333333333, 38.426294820717, 44.305912596401, 55, 67.301255230126, 70.723598435463, 100;
 24.959016393443, 25.34, 25.640151515152, 25.685483870968, 25.800884955752, 26.560747663551, 27.711009174312, 29.5, 32.057971014493, 35, 38.705179282869, 44.665809768638, 55.381355932203, 67.740585774059, 71.134289439374, 100;
 25.217213114754, 25.592, 25.878787878788, 25.939516129032, 26.079646017699, 26.855140186916, 28, 29.75, 32.36231884058, 35.291734197731, 39.06374501992, 45.12853470437, 55.871670702179, 68.305439330544, 71.662320730117, 100;
 26.22131147541, 26.572, 26.806818181818, 26.927419354839, 27.163716814159, 28, 28.910780669145, 30.722222222222, 33.545893719807, 36.426256077796, 40.458167330677, 46.928020565553, 57.778450363196, 70.502092050209, 73.715775749674, 100;
 26.995901639344, 27.328, 27.522727272727, 27.689516129032, 28, 28.665492957746, 29.613382899628, 31.472222222222, 34.458937198068, 37.301458670989, 41.533864541833, 48.316195372751, 59.249394673123, 72.196652719665, 75.299869621904, 100;
 27.311475409836, 27.636, 27.814393939394, 28, 28.282051282051, 28.93661971831, 29.899628252788, 31.777777777778, 34.830917874396, 37.658022690438, 41.972111553785, 48.881748071979, 59.848668280872, 72.887029288703, 75.945241199478, 100;
 27.454918032787, 27.776, 27.94696969697, 28.143442622951, 28.410256410256, 29.05985915493, 30.029739776952, 31.916666666667, 35, 37.820097244733, 42.171314741036, 49.13881748072, 60.121065375303, 73.200836820084, 76.238591916558, 100;
 27.512295081967, 27.832, 28, 28.200819672131, 28.461538461538, 29.109154929577, 30.081784386617, 31.972222222222, 35.054200542005, 37.884927066451, 42.250996015936, 49.241645244216, 60.230024213075, 73.326359832636, 76.35593220339, 100;
 27.684426229508, 28, 28.202898550725, 28.372950819672, 28.615384615385, 29.257042253521, 30.237918215613, 32.138888888889, 35.216802168022, 38.079416531605, 42.490039840637, 49.550128534704, 60.556900726392, 73.702928870293, 76.707953063885, 100;
 28, 28.478260869565, 28.574879227053, 28.688524590164, 28.897435897436, 29.528169014085, 30.524163568773, 32.444444444444, 35.514905149051, 38.435980551053, 42.92828685259, 50.115681233933, 61.15617433414, 74.393305439331, 77.35332464146, 100;
 32.101910828025, 32.478260869565, 31.685990338164, 31.327868852459, 31.25641025641, 31.795774647887, 32.918215613383, 35, 38.008130081301, 41.418152350081, 46.593625498008, 54.845758354756, 66.168280871671, 80.167364016736, 82.750977835724, 100;
 32.235668789809, 32.608695652174, 31.787439613527, 31.41393442623, 31.333333333333, 31.869718309859, 32.996282527881, 35.073529411765, 38.089430894309, 41.515397082658, 46.713147410359, 55, 66.331719128329, 80.355648535565, 82.926988265971, 100;
 34.687898089172, 35, 33.647342995169, 32.991803278689, 32.74358974359, 33.225352112676, 34.42750929368, 36.421568627451, 39.579945799458, 43.298217179903, 48.90438247012, 57.201957295374, 69.32808716707, 83.807531380753, 86.153846153846, 100;
 35, 35.777777777778, 33.884057971014, 33.19262295082, 32.923076923077, 33.397887323944, 34.609665427509, 36.593137254902, 39.769647696477, 43.525121555916, 49.183266932271, 57.482206405694, 69.709443099274, 84.246861924686, 86.564537157757, 100;
 36.734104046243, 37.444444444444, 34.391304347826, 33.622950819672, 33.307692307692, 33.767605633803, 35, 36.960784313725, 40.176151761518, 44.011345218801, 49.780876494024, 58.082740213523, 70.526634382567, 85.188284518828, 87.444589308996, 100;
 38.815028901734, 39.444444444444, 35, 34.139344262295, 33.769230769231, 34.211267605634, 35.417633410673, 37.401960784314, 40.663956639566, 44.594813614263, 50.498007968127, 58.803380782918, 71.507263922518, 86.317991631799, 88.500651890482, 100;
 42.28323699422, 42.777777777778, 36.704545454545, 35, 34.538461538462, 34.950704225352, 36.113689095128, 38.137254901961, 41.476964769648, 45.567260940032, 51.693227091633, 60.004448398577, 73.141646489104, 88.200836820084, 90.26075619296, 100;
 42.514450867052, 43, 36.818181818182, 35.082474226804, 34.589743589744, 35, 36.160092807425, 38.186274509804, 41.531165311653, 45.63209076175, 51.772908366534, 60.084519572954, 73.250605326877, 88.326359832636, 90.378096479791, 100;
 44.364161849711, 44.777777777778, 37.727272727273, 35.742268041237, 35, 35.381406436234, 36.5313225058, 38.578431372549, 41.964769647696, 46.150729335494, 52.410358565737, 60.725088967972, 74.122276029056, 89.330543933054, 91.316818774446, 100;
 51.878612716763, 52, 41.420454545455, 38.422680412371, 36.768707482993, 36.930870083433, 38.039443155452, 40.171568627451, 43.726287262873, 48.257698541329, 55, 63.327402135231, 77.663438256659, 93.410041841004, 95.13037809648, 100;
 55, 55, 42.954545454545, 39.536082474227, 37.503401360544, 37.574493444577, 38.665893271462, 40.833333333333, 44.457994579946, 49.132901134522, 55.966587112172, 64.408362989324, 79.134382566586, 95.10460251046, 96.714471968709, 100;
 72.260273972603, 61.237623762376, 46.136363636364, 41.845360824742, 39.027210884354, 38.909415971395, 39.965197215777, 42.205882352941, 45.975609756098, 50.948136142626, 57.971360381862, 66.650355871886, 82.185230024213, 98.619246861925, 100, 100;
 79.041095890411, 63.688118811881, 47.386363636364, 42.752577319588, 39.625850340136, 39.433849821216, 40.475638051044, 42.745098039216, 46.571815718157, 51.661264181523, 58.758949880668, 67.531138790036, 83.383777239709, 100, 100, 100;
 100, 71.262376237624, 51.25, 45.556701030928, 41.47619047619, 41.054827175209, 42.053364269142, 44.411764705882, 48.414634146341, 53.865478119935, 61.193317422434, 70.253558718861, 87.088377723971, 100, 100, 100;
 100, 75.160891089109, 53.238636363636, 47, 42.428571428571, 41.88915375447, 42.865429234339, 45.269607843137, 49.363143631436, 55, 62.44630071599, 71.654804270463, 88.995157384988, 100, 100, 100;
 100, 78.613861386139, 55, 48.278350515464, 43.272108843537, 42.628128724672, 43.584686774942, 46.029411764706, 50.20325203252, 56.15671641791, 63.556085918854, 72.89590747331, 90.68401937046, 100, 100, 100;
 100, 96.769801980198, 64.249684741488, 55, 47.707482993197, 46.513706793802, 47.366589327146, 50.024509803922, 54.620596205962, 62.238805970149, 69.391408114558, 79.421708185053, 99.56416464891, 100, 100, 100;
 100, 97.660891089109, 64.703656998739, 55.39603960396, 47.925170068027, 46.704410011919, 47.552204176334, 50.220588235294, 54.837398373984, 62.537313432836, 69.677804295943, 79.741992882562, 100, 100, 100, 100;
 100, 98.329207920792, 65.044136191677, 55.693069306931, 48.08843537415, 46.847437425507, 47.691415313225, 50.367647058824, 55, 62.761194029851, 69.892601431981, 79.982206405694, 100, 100, 100, 100;
 100, 100, 65.895334174023, 56.435643564356, 48.496598639456, 47.205005959476, 48.039443155452, 50.735294117647, 55.583910034602, 63.320895522388, 70.429594272076, 80.582740213523, 100, 100, 100, 100;
 100, 100, 75.769230769231, 65.049504950495, 53.231292517007, 51.352800953516, 52.07656612529, 55, 62.357266435986, 69.813432835821, 76.658711217184, 87.548932384342, 100, 100, 100, 100;
 100, 100, 79.457755359395, 68.267326732673, 55, 52.902264600715, 53.584686774942, 57.720930232558, 64.887543252595, 72.238805970149, 78.985680190931, 90.151245551601, 100, 100, 100, 100;
 100, 100, 82.919293820933, 71.287128712871, 57.99672489083, 54.356376638856, 55, 60.274418604651, 67.262110726644, 74.514925373134, 81.169451073986, 92.593416370107, 100, 100, 100, 100;
 100, 100, 84.451450189155, 72.623762376238, 59.323144104803, 55, 56.296691568837, 61.404651162791, 68.313148788927, 75.522388059701, 82.136038186158, 93.674377224199, 100, 100, 100, 100;
 100, 100, 93.417402269861, 80.445544554455, 67.085152838428, 62.917594654788, 63.884738527215, 68.018604651163, 74.463667820069, 81.417910447761, 87.792362768496, 100, 100, 100, 100, 100;
 100, 100, 100, 86.188118811881, 72.78384279476, 68.730512249443, 69.455709711846, 72.874418604651, 78.979238754325, 85.746268656716, 91.945107398568, 100, 100, 100, 100, 100;
 100, 100, 100, 97.326732673267, 83.837336244541, 80.005567928731, 80.261472785486, 82.293023255814, 87.737889273356, 94.141791044776, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 86.490174672489, 82.711581291759, 82.854855923159, 84.553488372093, 89.839965397924, 96.15671641791, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 91.550218340611, 87.873051224944, 87.801494130203, 88.86511627907, 93.849480968858, 100, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 99.312227074236, 95.790645879733, 95.389541088581, 95.479069767442, 100, 100, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 100, 96.492204899777, 96.061899679829, 96.06511627907, 100, 100, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 100, 100, 99.423692636073, 98.995348837209, 100, 100, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 100, 100, 100, 99.497674418605, 100, 100, 100, 100, 100, 100, 100, 100;
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100], ...
	'Description', 'Pedal torque determination based on torque pedal control: output = demanded torque.', ...
	'Unit', 'N*m', ...
	'Axis_Labels', {'APTC_TRQ_PED_TRQ_ESPD_STEP_MPV'; 'APTC_TRQ_PED_INV_MAP_TRQ_STEPS'});

%% APTC_TRQ_PED_INV_MAP_TRQ_STEPS
APTC_TRQ_PED_INV_MAP_TRQ_STEPS = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0;
 20;
 55;
 74;
 102;
 116;
 123;
 152;
 244;
 276;
 310;
 318;
 366;
 402;
 420;
 441;
 448;
 463;
 485;
 506;
 527;
 570;
 600;
 604;
 611;
 637;
 659;
 666;
 672;
 687;
 700;
 705;
 707;
 709;
 720;
 737;
 755;
 782;
 821;
 868;
 875;
 884;
 919;
 946;
 957;
 962;
 964;
 970;
 981;
 1073;
 1076;
 1131;
 1138;
 1153;
 1171;
 1201;
 1203;
 1219;
 1284;
 1311;
 1367;
 1389;
 1457;
 1492;
 1523;
 1686;
 1694;
 1700;
 1715;
 1889;
 1954;
 2015;
 2042;
 2200;
 2316;
 2541;
 2595;
 2698;
 2856;
 2870;
 2940;
 2952;
 2964], ...
	'Description', 'Pedal torque determination based on torque pedal control: input = engine torque', ...
	'Unit', 'N*m');

%% APTC_TRQ_PED_TRQ_DATA_MPV
APTC_TRQ_PED_TRQ_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
 448, 420, 244, 152, 116, 74, 20, 20, 20, 20, 20, 20, 20, 20, 20, 0;
 570, 527, 506, 485, 463, 441, 310, 123, 20, 20, 20, 20, 20, 20, 20, 0;
 737, 720, 700, 709, 720, 705, 666, 637, 604, 366, 102, 20, 20, 20, 20, 0;
 981, 970, 964, 957, 946, 919, 884, 821, 755, 707, 659, 611, 318, 55, 20, 0;
 1138, 1131, 1171, 1201, 1219, 1203, 1153, 1073, 962, 875, 782, 687, 600, 402, 276, 0;
 1311, 1311, 1523, 1686, 1954, 2042, 2015, 1889, 1700, 1492, 1284, 1076, 868, 672, 600, 0;
 1457, 1715, 2316, 2595, 2870, 2940, 2952, 2964, 2856, 2698, 2541, 2200, 1694, 1389, 1367, 0], ...
	'Description', 'Pedal torque determination based on torque pedal control: output = demanded torque.', ...
	'Unit', 'N*m', ...
	'Min', 0, ...
	'Max', 5000, ...
	'Axis_Labels', {'APTC_TRQ_PED_TRQ_ESPD_STEP_MPV'; 'APTC_TRQ_PED_TRQ_POS_STEP_MPV'});

%% APTC_TRQ_PED_TRQ_ESPD_STEP_MPV
APTC_TRQ_PED_TRQ_ESPD_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [500, 650, 885, 950, 1050, 1120, 1240, 1360, 1475, 1590, 1710, 1830, 1950, 2150, 2300, 2350], ...
	'Description', 'Pedal torque determination based on torque pedal control: input = engine speed.', ...
	'Unit', 'rpm');

%% APTC_TRQ_PED_TRQ_POS_STEP_MPV
APTC_TRQ_PED_TRQ_POS_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 7, 14, 21, 28, 35, 55, 100], ...
	'Description', 'Pedal torque determination based on torque pedal control: input = accelerator pedal position.', ...
	'Unit', '%', ...
	'Min', 0, ...
	'Max', 100);

%% BRK_DEM_KD_DATA_MPV
BRK_DEM_KD_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0], ...
	'Description', 'D-gains for direct pressure governor', ...
	'Unit', 's', ...
	'Axis_Labels', {'BRK_DEM_MASS_STEP_MPV'});

%% BRK_DEM_KI_DATA_MPV
BRK_DEM_KI_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5], ...
	'Description', 'I-gains for direct pressure governor', ...
	'Unit', '1/s', ...
	'Axis_Labels', {'BRK_DEM_MASS_STEP_MPV'});

%% BRK_DEM_KP_DATA_MPV
BRK_DEM_KP_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-4, -4, -4, -4, -4, -4, -4, -4], ...
	'Description', 'P-gains for direct pressure governor', ...
	'Unit', '1', ...
	'Axis_Labels', {'BRK_DEM_MASS_STEP_MPV'});

%% BRK_DEM_MASS_STEP_MPV
BRK_DEM_MASS_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 5000, 10000, 20000, 30000, 40000, 50000, 54000], ...
	'Description', 'Axis for direct pressure governor gains: input = mass (kg)', ...
	'Unit', 'kg');

%% DECEL_KD_DATA_MPV
DECEL_KD_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0], ...
	'Description', 'D-gains for decel governor', ...
	'Unit', 's', ...
	'Axis_Labels', {'DECEL_MASS_STEP_MPV'});

%% DECEL_KI_DATA_MPV
DECEL_KI_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5], ...
	'Description', 'I-gains for decel governor', ...
	'Unit', '1/s', ...
	'Axis_Labels', {'DECEL_MASS_STEP_MPV'});

%% DECEL_KP_DATA_MPV
DECEL_KP_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-3, -3, -3, -3, -3, -3, -3, -3], ...
	'Description', 'P-gains for decel governor', ...
	'Unit', '1', ...
	'Axis_Labels', {'DECEL_MASS_STEP_MPV'});

%% DECEL_MASS_STEP_MPV
DECEL_MASS_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 5000, 10000, 20000, 30000, 40000, 50000, 54000], ...
	'Description', 'Axis for decel gains: input = mass (kg)', ...
	'Unit', 'kg');

%% STEERCTRL_WHEEL_ANGLE_DATA_MPV
STEERCTRL_WHEEL_ANGLE_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-800.02001953125, -780.02899169922, -760.03399658203, -740, -720, -700.00402832031, -680, -660.01397705078, -640.01898193359, -620.02398681641, -600.02001953125, -580.03399658203, -560.03900146484, -540, -520.00402832031, -500.00900268555, -480.01400756836, -460.01901245117, -440.02398681641, -420.01998901367, -400.03399658203, -380.03900146484, -360, -340.00399780273, -320.00900268555, -300.01400756836, -280.01901245117, -260.02398681641, -240.02900695801, -220.03399658203, -200.03900146484, -180, -160.00399780273, -140.00900268555, -120.01399993896, -100.01899719238, -80.024002075195, -60.028999328613, -40.034000396729, 0.52700001001358, 29.969999313354, 50.00899887085, 69.959999084473, 89.949996948242, 109.99500274658, 129.99000549316, 149.98500061035, 170.0240020752, 189.97500610352, 209.9700012207, 229.96499633789, 249.96000671387, 270, 289.99499511719, 309.98999023438, 329.98498535156, 349.98001098633, 369.97500610352, 390.01400756836, 410.00900268555, 450, 470.0299987793, 489.98999023438, 509.98498535156, 529.97998046875, 549.97497558594, 569.96997070313, 589.96502685547, 610.21997070313, 630, 650.25, 670], ...
	'Description', 'Steering wheel angle determination based on map: output = steering wheel angle', ...
	'Unit', 'deg', ...
	'Min', -900, ...
	'Max', 900, ...
	'Axis_Labels', {'STEERCTRL_WHEEL_ANGLE_STEP_MPV'});

%% STEERCTRL_WHEEL_ANGLE_STEP_MPV
STEERCTRL_WHEEL_ANGLE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-46, -44.5, -43, -42, -40, -39, -37.5, -36.5, -35, -34, -33, -31.5, -30.5, -29, -28, -26.5, -25.5, -24.5, -23.5, -22, -21, -20, -19, -17.5, -16.5, -15.5, -14, -13, -12, -11, -10, -8.5, -7.5, -6.5, -5, -4, -3, -2, -1, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18.5, 19.5, 20.5, 21.5, 23.5, 24.5, 25.5, 26.5, 27.5, 28.5, 29, 30, 31, 31.5, 32.5, 33], ...
	'Description', 'Steering wheel angle determination based on map: input = axle angle', ...
	'Unit', 'deg', ...
	'Min', -60, ...
	'Max', 60);

%% TQ_DEM_GEAR_RATIO_STEP_MPV
TQ_DEM_GEAR_RATIO_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0.2, 4, 8, 10, 16, 18, 20], ...
	'Description', 'Torque demand gain axis: input = gear ratio', ...
	'Unit', '1');

%% TQ_DEM_KD_DATA_MPV
TQ_DEM_KD_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0;
 0, 0, 0, 0, 0, 0, 0, 0], ...
	'Description', 'Torque demand D-gains', ...
	'Unit', 's', ...
	'Axis_Labels', {'TQ_DEM_GEAR_RATIO_STEP_MPV'; 'TQ_DEM_MASS_STEP_MPV'});

%% TQ_DEM_KI_DATA_MPV
TQ_DEM_KI_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7;
 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7], ...
	'Description', 'Torque demand I-gains', ...
	'Unit', '1/s', ...
	'Axis_Labels', {'TQ_DEM_GEAR_RATIO_STEP_MPV'; 'TQ_DEM_MASS_STEP_MPV'});

%% TQ_DEM_KP_DATA_MPV
TQ_DEM_KP_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [4, 4, 4, 4, 4, 4, 4, 4;
 5, 5, 5, 5, 5, 5, 5, 5;
 5, 5, 5, 5, 5, 5, 5, 5;
 4, 4, 4, 4, 4, 4, 4, 4;
 4, 4, 4, 4, 4, 4, 4, 4;
 4, 4, 4, 4, 4, 4, 4, 4;
 4, 4, 4, 4, 4, 4, 4, 4;
 4, 4, 4, 4, 4, 4, 4, 4], ...
	'Description', 'Torque demand P-gain', ...
	'Unit', '1', ...
	'Axis_Labels', {'TQ_DEM_GEAR_RATIO_STEP_MPV'; 'TQ_DEM_MASS_STEP_MPV'});

%% TQ_DEM_MASS_STEP_MPV
TQ_DEM_MASS_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 5000, 10000, 20000, 30000, 40000, 50000, 54000], ...
	'Description', 'Torque demand gain axis: input = mass (kg)', ...
	'Unit', 'kg');
