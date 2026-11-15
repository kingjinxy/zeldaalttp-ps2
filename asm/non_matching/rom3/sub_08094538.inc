	THUMB_FUNC_START sub_08094538
sub_08094538: @ 0x08094538
	push {r4-r6,lr}
	ldr r0, _080945A8  @ =gRam
	ldr r1, _080945AC  @ =0x00001719
	add r2, r0, r1
	ldrb r1, [r2]
	add r6, r0, #0
	cmp r1, #2
	bne _0809455A
	mov r3, #16
	ldr r4, _080945B0  @ =0x00001804
	add r0, r6, r4
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r0, r0, #31
	and r3, r3, r0
	strb r3, [r2]
_0809455A:
	ldr r1, _080945B4  @ =0x00001714
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080945CC
	ldr r2, _080945B8  @ =0x0000097C
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080945CC
	ldr r4, _080945BC  @ =0x00001718
	add r3, r6, r4
	ldrb r0, [r3]
	cmp r0, #5
	bne _08094586
	b _08094C12
_08094586:
	cmp r0, #2
	bne _0809458C
	b _08094C12
_0809458C:
	ldr r0, _080945C0  @ =0x00001717
	add r1, r6, r0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _080945C4  @ =0x00001715
	add r0, r6, r1
	strb r2, [r0]
	ldr r2, _080945C8  @ =0x00001716
	add r1, r6, r2
	mov r0, #1
	strb r0, [r1]
	strb r0, [r3]
	b _08094C12
	.byte 0x00
	.byte 0x00
_080945A8:
	.4byte gRam
_080945AC:
	.4byte 0x00001719
_080945B0:
	.4byte 0x00001804
_080945B4:
	.4byte 0x00001714
_080945B8:
	.4byte 0x0000097C
_080945BC:
	.4byte 0x00001718
_080945C0:
	.4byte 0x00001717
_080945C4:
	.4byte 0x00001715
_080945C8:
	.4byte 0x00001716
_080945CC:
	ldr r3, _080945F0  @ =0x000017F8
	add r0, r6, r3
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #0
	beq _080945FC
	ldr r4, _080945F4  @ =0x000017FC
	add r0, r6, r4
	ldrb r0, [r0]
	lsr r0, r0, #1
	ldr r2, _080945F8  @ =0x000017FA
	add r1, r6, r2
	strh r0, [r1]
	b _08094602
	.byte 0x00
	.byte 0x00
_080945F0:
	.4byte 0x000017F8
_080945F4:
	.4byte 0x000017FC
_080945F8:
	.4byte 0x000017FA
_080945FC:
	ldr r3, _080946A4  @ =0x000017FA
	add r0, r6, r3
	strh r1, [r0]
_08094602:
	ldr r4, _080946A8  @ =0x000017D0
	add r0, r6, r4
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08094612
	b _08094722
_08094612:
	ldr r0, _080946AC  @ =0x000017D4
	add r5, r6, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _0809461E
	b _08094730
_0809461E:
	ldr r1, _080946B0  @ =0x00001702
	add r0, r6, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _08094722
	bl sub_08092BF4
	bl sub_08093078
	mov r0, #1
	strb r0, [r5]
	ldr r2, _080946B4  @ =0x000016CC
	add r0, r6, r2
	ldrb r1, [r0]
	ldr r3, _080946B8  @ =0x000017CE
	add r0, r6, r3
	strb r1, [r0]
	ldr r1, _080946BC  @ =0x00001808
	add r0, r6, r1
	strb r4, [r0]
	add r2, r2, #77
	add r0, r6, r2
	strb r4, [r0]
	sub r3, r3, #126
	add r0, r6, r3
	strb r4, [r0]
	sub r1, r1, #41
	add r0, r6, r1
	strb r4, [r0]
	add r2, r2, #157
	add r0, r6, r2
	strb r4, [r0]
	bl sub_08092B0C
	ldr r3, _080946C0  @ =0x000017E1
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _080946DC
	ldr r0, _080946C4  @ =0x0000176E
	add r1, r6, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080946C8  @ =0x0000180D
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _080946CC  @ =0x00001710
	add r0, r6, r2
	strb r4, [r0]
	add r3, r3, #16
	add r0, r6, r3
	strb r4, [r0]
	ldr r0, _080946D0  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	beq _080946DC
	ldr r4, _080946D4  @ =0x0000176C
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08094722
	ldr r0, _080946D8  @ =0x00001718
	add r1, r6, r0
	mov r0, #4
	strb r0, [r1]
	b _08094722
	.byte 0x00
	.byte 0x00
_080946A4:
	.4byte 0x000017FA
_080946A8:
	.4byte 0x000017D0
_080946AC:
	.4byte 0x000017D4
_080946B0:
	.4byte 0x00001702
_080946B4:
	.4byte 0x000016CC
_080946B8:
	.4byte 0x000017CE
_080946BC:
	.4byte 0x00001808
_080946C0:
	.4byte 0x000017E1
_080946C4:
	.4byte 0x0000176E
_080946C8:
	.4byte 0x0000180D
_080946CC:
	.4byte 0x00001710
_080946D0:
	.4byte gFlippers
_080946D4:
	.4byte 0x0000176C
_080946D8:
	.4byte 0x00001718
_080946DC:
	mov r0, #4
	bl sub_0809E43C
	ldr r1, _08094748  @ =gRam
	ldr r2, _0809474C  @ =0x000016EC
	add r0, r1, r2
	ldrb r2, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _08094750  @ =0x000016ED
	add r0, r1, r4
	ldrb r2, [r0]
	ldr r6, _08094754  @ =0x000016C1
	add r0, r1, r6
	strb r2, [r0]
	ldr r2, _08094758  @ =0x000016F0
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #4
	add r0, r1, r4
	ldrb r2, [r0]
	add r6, r6, #4
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _0809475C  @ =0x0000180D
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	bl sub_0809A24C
_08094722:
	ldr r0, _08094748  @ =gRam
	ldr r2, _08094760  @ =0x000017D4
	add r1, r0, r2
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _080947D8
_08094730:
	ldr r3, _08094764  @ =0x000017FF
	add r0, r6, r3
	ldrb r0, [r0]
	mov r3, #7
	add r2, r3, #0
	and r2, r2, r0
	add r4, r2, #0
	cmp r4, #0
	beq _0809476C
	ldr r4, _08094768  @ =0x0000097C
	add r0, r6, r4
	b _08094A60
_08094748:
	.4byte gRam
_0809474C:
	.4byte 0x000016EC
_08094750:
	.4byte 0x000016ED
_08094754:
	.4byte 0x000016C1
_08094758:
	.4byte 0x000016F0
_0809475C:
	.4byte 0x0000180D
_08094760:
	.4byte 0x000017D4
_08094764:
	.4byte 0x000017FF
_08094768:
	.4byte 0x0000097C
_0809476C:
	ldr r1, _080947C0  @ =0x00001713
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #7
	beq _08094788
	ldr r2, _080947C4  @ =0x000017D2
	add r0, r6, r2
	ldrh r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #7
	bne _080947D8
_08094788:
	bl sub_08093078
	ldr r3, _080947C8  @ =0x000017D4
	add r0, r6, r3
	strb r4, [r0]
	ldr r4, _080947CC  @ =0x00001702
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _080947D8
	ldr r1, _080947D0  @ =0x000017CE
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080947D4  @ =0x000016CC
	add r0, r6, r2
	strb r1, [r0]
	add r3, r3, #57
	add r1, r6, r3
	mov r0, #1
	strb r0, [r1]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	bl sub_0809A24C
	b _08094C12
	.byte 0x00
	.byte 0x00
_080947C0:
	.4byte 0x00001713
_080947C4:
	.4byte 0x000017D2
_080947C8:
	.4byte 0x000017D4
_080947CC:
	.4byte 0x00001702
_080947D0:
	.4byte 0x000017CE
_080947D4:
	.4byte 0x000016CC
_080947D8:
	ldr r4, _080947F8  @ =gRam
	mov r6, #192
	lsl r6, r6, #5
	add r0, r4, r6
	ldr r5, [r0]
	ldr r0, _080947FC  @ =0x00220002
	and r5, r5, r0
	cmp r5, #0
	beq _08094804
	ldr r0, _08094800  @ =0x0000097C
	add r1, r4, r0
	mov r0, #7
	strb r0, [r1]
	bl sub_080957E8
	b _08094C12
_080947F8:
	.4byte gRam
_080947FC:
	.4byte 0x00220002
_08094800:
	.4byte 0x0000097C
_08094804:
	ldr r1, _08094878  @ =0x000017FF
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #112
	and r0, r0, r1
	cmp r0, #0
	beq _080948A0
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080948A0
	bl sub_08093078
	ldr r2, _0809487C  @ =0x0000180D
	add r0, r4, r2
	mov r1, #1
	strb r1, [r0]
	ldr r3, _08094880  @ =0x00001738
	add r0, r4, r3
	strb r1, [r0]
	ldr r6, _08094884  @ =0x00001718
	add r1, r4, r6
	mov r0, #11
	strb r0, [r1]
	ldr r1, _08094888  @ =0x000016F8
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #23
	add r1, r4, r2
	ldr r0, _0809488C  @ =0x0000FFFF
	strh r0, [r1]
	sub r3, r3, #62
	add r0, r4, r3
	strb r5, [r0]
	add r6, r6, #1
	add r0, r4, r6
	strb r5, [r0]
	mov r2, #2
	mov r3, #20
	ldr r1, _08094890  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094862
	mov r2, #4
	mov r3, #14
_08094862:
	ldr r6, _08094894  @ =0x000017F3
	add r0, r4, r6
	strb r3, [r0]
	ldr r1, _08094898  @ =0x000017F4
	add r0, r4, r1
	strb r3, [r0]
	ldr r3, _0809489C  @ =0x00001702
	add r0, r4, r3
	strb r2, [r0]
	b _08094C12
	.byte 0x00
	.byte 0x00
_08094878:
	.4byte 0x000017FF
_0809487C:
	.4byte 0x0000180D
_08094880:
	.4byte 0x00001738
_08094884:
	.4byte 0x00001718
_08094888:
	.4byte 0x000016F8
_0809488C:
	.4byte 0x0000FFFF
_08094890:
	.4byte 0x000017D4
_08094894:
	.4byte 0x000017F3
_08094898:
	.4byte 0x000017F4
_0809489C:
	.4byte 0x00001702
_080948A0:
	ldr r5, _080948E0  @ =gRam
	ldr r4, _080948E4  @ =0x000017FF
	add r0, r5, r4
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080948F4
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080948F4
	mov r0, #4
	bl sub_0809E43C
	ldr r6, _080948E8  @ =0x0000180D
	add r1, r5, r6
	mov r4, #0
	mov r0, #1
	strb r0, [r1]
	bl sub_08093078
	ldr r1, _080948EC  @ =0x000016FA
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _080948F0  @ =0x00001719
	add r0, r5, r2
	strb r4, [r0]
	bl sub_0809A338
	b _08094C12
_080948E0:
	.4byte gRam
_080948E4:
	.4byte 0x000017FF
_080948E8:
	.4byte 0x0000180D
_080948EC:
	.4byte 0x000016FA
_080948F0:
	.4byte 0x00001719
_080948F4:
	ldr r4, _080949A0  @ =gRam
	ldr r3, _080949A4  @ =0x000017D4
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094902
	b _08094A40
_08094902:
	ldr r0, _080949A8  @ =0x00001801
	add r6, r4, r0
	ldrb r1, [r6]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080949C4
	ldr r2, _080949AC  @ =0x000017FF
	add r0, r4, r2
	ldrb r0, [r0]
	mov r5, #119
	and r5, r5, r0
	cmp r5, #0
	bne _080949C4
	sub r3, r3, #158
	add r0, r4, r3
	ldrb r0, [r0]
	mov r3, #1
	cmp r0, #47
	bne _0809492C
	mov r3, #4
_0809492C:
	and r3, r3, r1
	cmp r3, #0
	beq _080949C4
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080949C4
	bl sub_08093078
	mov r3, #16
	ldrb r1, [r6]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0809494E
	mov r3, #240
_0809494E:
	ldr r6, _080949B0  @ =0x0000180D
	add r2, r4, r6
	mov r1, #1
	ldr r6, _080949B4  @ =0x000016CE
	add r0, r4, r6
	strb r3, [r0]
	ldr r3, _080949B8  @ =0x000016FA
	add r0, r4, r3
	strb r5, [r0]
	add r6, r6, #75
	add r0, r4, r6
	strb r5, [r0]
	strb r1, [r2]
	ldr r2, _080949BC  @ =0x00001738
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #8
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	add r6, r6, #218
	add r0, r4, r6
	mov r1, #20
	strb r1, [r0]
	add r2, r2, #188
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #244
	add r1, r4, r3
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	sub r6, r6, #251
	add r0, r4, r6
	strb r2, [r0]
	ldr r0, _080949C0  @ =0x00001718
	add r1, r4, r0
	mov r0, #14
	strb r0, [r1]
	b _08094C12
	.byte 0x00
	.byte 0x00
_080949A0:
	.4byte gRam
_080949A4:
	.4byte 0x000017D4
_080949A8:
	.4byte 0x00001801
_080949AC:
	.4byte 0x000017FF
_080949B0:
	.4byte 0x0000180D
_080949B4:
	.4byte 0x000016CE
_080949B8:
	.4byte 0x000016FA
_080949BC:
	.4byte 0x00001738
_080949C0:
	.4byte 0x00001718
_080949C4:
	ldr r5, _08094A28  @ =gRam
	mov r1, #192
	lsl r1, r1, #5
	add r6, r5, r1
	ldrb r1, [r6]
	mov r0, #112
	and r0, r0, r1
	cmp r0, #0
	beq _08094A40
	ldr r2, _08094A2C  @ =0x000017FF
	add r0, r5, r2
	ldrb r0, [r0]
	mov r4, #119
	and r4, r4, r0
	cmp r4, #0
	bne _08094A40
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08094A40
	bl sub_08093078
	mov r0, #4
	bl sub_0809E43C
	mov r2, #3
	ldrb r1, [r6]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08094A06
	mov r2, #2
_08094A06:
	ldr r3, _08094A30  @ =0x00001726
	add r0, r5, r3
	strb r2, [r0]
	ldr r6, _08094A34  @ =0x0000180D
	add r1, r5, r6
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08094A38  @ =0x000016FA
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08094A3C  @ =0x00001719
	add r0, r5, r2
	strb r4, [r0]
	bl sub_0809A4A8
	b _08094C12
	.byte 0x00
	.byte 0x00
_08094A28:
	.4byte gRam
_08094A2C:
	.4byte 0x000017FF
_08094A30:
	.4byte 0x00001726
_08094A34:
	.4byte 0x0000180D
_08094A38:
	.4byte 0x000016FA
_08094A3C:
	.4byte 0x00001719
_08094A40:
	ldr r0, _08094A68  @ =gRam
	ldr r3, _08094A6C  @ =0x00001713
	add r1, r0, r3
	ldrb r1, [r1]
	mov r2, #7
	and r2, r2, r1
	add r6, r0, #0
	cmp r2, #7
	bne _08094AA4
	ldr r4, _08094A70  @ =0x000016F8
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094A78
	ldr r1, _08094A74  @ =0x0000097C
	add r0, r6, r1
_08094A60:
	strb r2, [r0]
	bl sub_080957E8
	b _08094C12
_08094A68:
	.4byte gRam
_08094A6C:
	.4byte 0x00001713
_08094A70:
	.4byte 0x000016F8
_08094A74:
	.4byte 0x0000097C
_08094A78:
	ldr r2, _08094A98  @ =0x00001726
	add r0, r6, r2
	ldrb r1, [r0]
	mov r2, #2
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08094AA4
	ldr r3, _08094A9C  @ =0x00001719
	add r0, r6, r3
	strb r2, [r0]
	ldr r4, _08094AA0  @ =0x00001712
	add r1, r6, r4
	mov r0, #1
	strb r0, [r1]
	b _08094C12
_08094A98:
	.4byte 0x00001726
_08094A9C:
	.4byte 0x00001719
_08094AA0:
	.4byte 0x00001712
_08094AA4:
	ldr r0, _08094B28  @ =0x00001719
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _08094ABA
	ldr r2, _08094B2C  @ =0x00001804
	add r0, r6, r2
	ldrb r0, [r0]
	neg r0, r0
	lsr r3, r0, #31
	strb r3, [r1]
_08094ABA:
	ldr r3, _08094B30  @ =0x00001712
	add r1, r6, r3
	ldrb r0, [r1]
	cmp r0, #1
	bne _08094AC8
	mov r0, #2
	strb r0, [r1]
_08094AC8:
	ldr r4, _08094B34  @ =0x00000978
	add r0, r6, r4
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08094AF8
	ldr r1, _08094B38  @ =0x0000097C
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08094AF8
	bl sub_08093B68
	ldr r2, _08094B3C  @ =0x0000172B
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _08094AF8
	b _08094C12
_08094AF8:
	ldr r4, _08094B40  @ =gRam
	ldr r3, _08094B3C  @ =0x0000172B
	add r1, r4, r3
	mov r0, #0
	strb r0, [r1]
	ldr r6, _08094B44  @ =0x00001774
	add r0, r4, r6
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08094B1A
	ldr r1, _08094B48  @ =0x00001726
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094B4C
_08094B1A:
	mov r2, #185
	lsl r2, r2, #5
	add r1, r4, r2
	mov r0, #52
	strb r0, [r1]
	b _08094B78
	.byte 0x00
	.byte 0x00
_08094B28:
	.4byte 0x00001719
_08094B2C:
	.4byte 0x00001804
_08094B30:
	.4byte 0x00001712
_08094B34:
	.4byte 0x00000978
_08094B38:
	.4byte 0x0000097C
_08094B3C:
	.4byte 0x0000172B
_08094B40:
	.4byte gRam
_08094B44:
	.4byte 0x00001774
_08094B48:
	.4byte 0x00001726
_08094B4C:
	ldr r3, _08094BC4  @ =0x00001804
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08094B68
	mov r6, #185
	lsl r6, r6, #5
	add r1, r4, r6
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08094B78
_08094B68:
	ldr r0, _08094BC8  @ =0x0000097C
	add r4, r4, r0
	ldrb r5, [r4]
	mov r0, #4
	mov r1, #36
	bl sub_0811C3C4
	strb r5, [r4]
_08094B78:
	ldr r3, _08094BCC  @ =gRam
	ldr r1, _08094BD0  @ =0x00001774
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r2, r0, #8
	mov r0, #7
	and r2, r2, r0
	add r6, r3, #0
	cmp r2, #0
	beq _08094C0E
	ldr r4, _08094BD4  @ =0x000016F8
	add r0, r3, r4
	add r4, r4, #178
	add r1, r3, r4
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r4, r4, #154
	add r1, r3, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _08094C08
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r2, [r0]
	add r4, r4, #22
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08094BD8
	mov r0, #4
	and r2, r2, r0
	cmp r2, #0
	beq _08094BE0
	b _08094C0E
	.byte 0x00
	.byte 0x00
_08094BC4:
	.4byte 0x00001804
_08094BC8:
	.4byte 0x0000097C
_08094BCC:
	.4byte gRam
_08094BD0:
	.4byte 0x00001774
_08094BD4:
	.4byte 0x000016F8
_08094BD8:
	mov r0, #4
	and r2, r2, r0
	cmp r2, #0
	beq _08094C0E
_08094BE0:
	ldr r0, _08094BFC  @ =gArmor
	ldrb r2, [r0]
	ldr r0, _08094C00  @ =gUnknown_08167D62
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _08094C04  @ =0x00001805
	add r0, r6, r2
	strb r1, [r0]
	bl sub_08093078
	bl sub_08099324
	b _08094C12
	.byte 0x00
	.byte 0x00
_08094BFC:
	.4byte gArmor
_08094C00:
	.4byte gUnknown_08167D62
_08094C04:
	.4byte 0x00001805
_08094C08:
	ldr r4, _08094C18  @ =0x0000097C
	add r0, r3, r4
	strb r2, [r0]
_08094C0E:
	bl sub_080957E8
_08094C12:
	pop {r4-r6}
	pop {r0}
	bx r0
_08094C18:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_08094538

