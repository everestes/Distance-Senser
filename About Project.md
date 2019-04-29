# Arduino ultrasonic distance-Senser
    "ultrasonic" หรือ "อัลตร้าโซนิค" หมายถึง คลื่นเสียงที่มีความถี่สูงเกินกว่าที่หูมนุษย์จะได้ยิน ซึ่งโดยทั่วไปแล้วหูมนุษย์จะได้ยินเสียงแค่ประมาณ 15KHz (กิโลเฮิร์ต) ดังนั้นโดยปกติแล้วคำว่าอัลต้าโซนิคจึงหมายถึงคลื่นเสียงที่มีความถี่สูงกว่า 20KHz ขึ้นไป
    สำหรับการทำงานของเซ็นเซอร์อัลตร้าโซนิค จะส่งผ่านคลื่นเสียงที่มีความสม่ำเสมอไปสะท้อนกับวัตถุ โดยเซ็นเซอร์และระบบการทำงานจะรับการสะท้อนของคลื่นเสียงที่สะท้อนกลับมา โดยตรวจจับเวลาตั้งแต่ปล่อยคลื่นอัลตราโซนิกออกไปจนถึงได้รับคลื่นสะท้อนกลับมาจะทำให้ทราบระยะทางได้ ถ้าอยากทราบระยะทาง ก็จะเอาเวลาที่ใช้ในการส่งสัญญานออกไปมาคำนวนเพื่อหาระยะทางออกมา
    
    
# About Project

<img src="https://surtrtech.files.wordpress.com/2018/01/09782-3.png" width="50%">

    กลุ่มของพวกเราได้จัดทำโปรเจค ultrasonic distance senser เพื่อประกอบการเรียนในวิชา computer programming (06016315) และเพื่อใช้เป็นเครื่องมือวัดระยะทางโดยสังเขปแสดงผลออกมาทางจอ lcd ดิจิตอล เพื่อที่จะได้เห็นระยะทางที่ชัดเจน โดยเซนเซอร์ เซนเซอร์อัลตร้าโซนิค รุ่น HC-SR04 ตัวนี้สามารถนำไปประยุกต์ใช้งานได้หลากลาย ยกตัวอย่างเช่น อุปกณ์วัดระดับน้ำสำหรับอ่างเก็บน้ำหรือฝาย เพื่อแจ้งเตือนการเกิดอุทกภัย หรือ เครื่องมืออื่นๆอีกมากมาย อยู่ที่การนำมาประยุกต์ใช้
                                                                        
# Equipment used

<table align="center" width="80%"><tr>
					<td width="30%">
									<p>
										- Arduino Uno R3 board
									</p></td>
					<td width="50%">
									<img src="https://www.img.live/images/2019/04/29/board.jpg" width="20%" align="right">
					</td>
				</tr>
				<tr><td width="30%">
          <p>
										- Ultrasonic Sensor HC-SR04
									</p>
				</td>
				<td width="70%">
							<br><img src="https://www.img.in.th/images/57478795e1e0d3f9c8530c5b91a75090.jpg" width="20%" align="right">
				</td></tr>
								<tr><td width="30%">
									<p>
										- Jump Wire
									</p>
				</td>
				<td width="70%">
							<br><img src="https://www.img.in.th/images/23f3b9ddb9a49efa4cb44d76c8bb23a2.jpg" width="20%" align="right">
				</td></tr>
								<tr><td width="30%">
									<p>
										- Breadboard
									</p>
				</td>
				<td width="70%">
							<br><img src="https://cdn.solarbotics.com/products/photos/c555f8d67727caf6a0833c8a1817526a/21025-dscn3816.JPG?w=800" width="20%" align="right"> 
				</td></tr>
	<tr><td width="30%">
									<p>
										- LCD with I2C
									</p>
				</td>
				<td width="70%">
							<br><img src="https://hobbycomponents.com/1487-large_default/i2c-serial-lcd-1602-module.jpg" width="20%" align="right"> 
				</td></tr>
			</table>
			
# Members

<table width="80%" border="0">
  <tr>
    <td align="center"><img src="https://www.img.live/images/2019/04/29/natchaya.jpg" width="20%"><br><br> 
	    <a href="https://facebook.com/IngIngNatchaya" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/61070053" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/ing______natchaya/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
	    </p>
    <p>
										นางสาวณัฐชยา ล้อรัตนไชยยงค์
									</p>
									<p>
									         รหัสนักศึกษา 61070053
									</p></td>
  </tr>
  <tr>
    <td align="center"><p><img src="https://www.img.live/images/2019/04/29/nithan.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/gamenithan" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/gamenithan" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/game_nithan/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
      </p>
      <p>นายนิธาน ทรัพย์แก้วยอด
  </p>
      </p>
      <p>
	           รหัสนักศึกษา 61070105
	  </p></td>
  </tr>
  <tr>"
    <td align="center"><p><img src="https://www.img.live/images/2019/04/29/boonyisa.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/mangpor.9ii" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/everestes" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/__mangporr/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
      </p>
      <p>นางสาวบุญญิสา เลียวสิริไพโรจน์
  </p>
      </p>
      <p>
	           รหัสนักศึกษา 61070108
</p></td>
  </tr>
  <tr>
    <td align="center"><img src="https://www.img.live/images/2019/04/29/phantawee.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/BalloonQuestionMark" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%"></a>&nbsp;&nbsp;
											<a href="https://github.com/61070140" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%"></a> &nbsp;&nbsp;
										<a href="https://www.instagram.com/beaslzlo_____/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
	    </p>
      <p>
      นายพันธวีร์ คงสวัสดิ์
  </p>
      <p>
	           รหัสนักศึกษา 61070140
</p></td>
  </tr>
</table>