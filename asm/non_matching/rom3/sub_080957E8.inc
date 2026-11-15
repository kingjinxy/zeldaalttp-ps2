	THUMB_FUNC_START sub_080957E8
sub_080957E8: @ 0x080957E8
	push {r4,r5,lr}
	ldr r2, _08095834  @ =gRam
	ldr r1, _08095838  @ =0x0000097C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r4, #7
	add r0, r4, #0
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	bne _08095800
	b _08095A98
_08095800:
	ldr r2, _0809583C  @ =0x00001718
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #4
	bne _0809584C
	ldr r3, _08095840  @ =0x0000179A
	add r0, r5, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	bne _0809581A
	bl sub_08092B0C
_0809581A:
	ldr r2, _08095844  @ =0x0000172A
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809584C
	ldr r3, _08095848  @ =0x00001708
	add r0, r5, r3
	ldrb r0, [r0]
	add r1, r4, #0
	and r1, r1, r0
	sub r2, r2, #84
	b _08095896
	.byte 0x00
	.byte 0x00
_08095834:
	.4byte gRam
_08095838:
	.4byte 0x0000097C
_0809583C:
	.4byte 0x00001718
_08095840:
	.4byte 0x0000179A
_08095844:
	.4byte 0x0000172A
_08095848:
	.4byte 0x00001708
_0809584C:
	ldr r0, _080958BC  @ =gRam
	ldr r3, _080958C0  @ =0x0000097C
	add r5, r0, r3
	ldrb r1, [r5]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08095864
	mov r0, #5
	and r0, r0, r1
	cmp r0, #5
	bne _08095870
_08095864:
	ldrb r4, [r5]
	bl sub_0809E774
	bl sub_0809E71C
	strb r4, [r5]
_08095870:
	ldr r1, _080958BC  @ =gRam
	ldr r0, _080958C4  @ =0x0000178B
	add r2, r1, r0
	mov r0, #1
	strb r0, [r2]
	ldr r2, _080958C0  @ =0x0000097C
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #2
	and r0, r0, r2
	add r5, r1, #0
	cmp r0, #0
	beq _080958D4
	ldr r3, _080958C8  @ =0x00001708
	add r0, r5, r3
	ldrb r0, [r0]
	mov r1, #7
	and r1, r1, r0
	ldr r2, _080958CC  @ =0x000016D6
_08095896:
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080958A6
	ldr r0, _080958D0  @ =0x0000FFF8
	orr r1, r1, r0
_080958A6:
	neg r0, r1
	lsl r0, r0, #16
	mov r3, #182
	lsl r3, r3, #5
	add r1, r5, r3
	lsr r0, r0, #16
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	b _08095914
	.byte 0x00
	.byte 0x00
_080958BC:
	.4byte gRam
_080958C0:
	.4byte 0x0000097C
_080958C4:
	.4byte 0x0000178B
_080958C8:
	.4byte 0x00001708
_080958CC:
	.4byte 0x000016D6
_080958D0:
	.4byte 0x0000FFF8
_080958D4:
	ldr r3, _0809597C  @ =0x0000172A
	add r0, r5, r3
	ldrb r2, [r0]
	cmp r2, #1
	bne _080958E0
	b _08095AB0
_080958E0:
	ldr r1, _08095980  @ =0x00001708
	add r0, r5, r1
	ldrb r0, [r0]
	mov r1, #7
	and r1, r1, r0
	sub r3, r3, #84
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080958FC
	ldr r0, _08095984  @ =0x0000FFF8
	orr r1, r1, r0
_080958FC:
	neg r0, r1
	lsl r0, r0, #16
	mov r3, #182
	lsl r3, r3, #5
	add r1, r5, r3
	lsr r0, r0, #16
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	cmp r2, #2
	bne _08095914
	b _08095AB0
_08095914:
	ldr r1, _08095988  @ =0x0000097C
	add r0, r5, r1
	ldrb r4, [r0]
	mov r0, #5
	and r4, r4, r0
	cmp r4, #5
	beq _08095A0C
	mov r0, #4
	and r4, r4, r0
	cmp r4, #0
	beq _08095998
	mov r2, #1
	ldr r3, _0809598C  @ =0x000016D6
	add r0, r5, r3
	ldrb r4, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08095944
	neg r0, r4
	lsl r0, r0, #24
	cmp r0, #0
	bge _08095946
_08095944:
	mov r2, #255
_08095946:
	mov r0, #150
	lsl r0, r0, #4
	add r3, r5, r0
	mov r1, #0
	strb r2, [r3]
	ldr r2, _08095990  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08095988  @ =0x0000097C
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08095A14
	ldr r0, _08095994  @ =0x000016C4
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080959E0
	bl sub_0809E774
	bl sub_0809E71C
	b _08095A14
_0809597C:
	.4byte 0x0000172A
_08095980:
	.4byte 0x00001708
_08095984:
	.4byte 0x0000FFF8
_08095988:
	.4byte 0x0000097C
_0809598C:
	.4byte 0x000016D6
_08095990:
	.4byte 0x00000961
_08095994:
	.4byte 0x000016C4
_08095998:
	mov r2, #1
	ldr r1, _080959FC  @ =0x000016D6
	add r0, r5, r1
	ldrb r4, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080959B4
	neg r0, r4
	lsl r0, r0, #24
	cmp r0, #0
	bge _080959B4
	mov r2, #255
_080959B4:
	mov r0, #150
	lsl r0, r0, #4
	add r3, r5, r0
	mov r1, #0
	strb r2, [r3]
	ldr r2, _08095A00  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08095A04  @ =0x0000097C
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08095A14
	ldr r0, _08095A08  @ =0x000016C4
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08095A0C
_080959E0:
	ldrh r1, [r3]
	cmp r1, #127
	bls _080959EE
	mov r3, #255
	lsl r3, r3, #8
	add r0, r3, #0
	orr r1, r1, r0
_080959EE:
	ldrh r0, [r2]
	add r0, r1, r0
	strh r0, [r2]
	bl sub_0809F6F0
	b _08095AC4
	.byte 0x00
	.byte 0x00
_080959FC:
	.4byte 0x000016D6
_08095A00:
	.4byte 0x00000961
_08095A04:
	.4byte 0x0000097C
_08095A08:
	.4byte 0x000016C4
_08095A0C:
	bl sub_0809E774
	bl sub_0809E71C
_08095A14:
	ldr r1, _08095A78  @ =gRam
	ldr r2, _08095A7C  @ =0x00001726
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r3, _08095A80  @ =0x000016D5
	add r2, r1, r3
	add r5, r1, #0
	ldrb r2, [r2]
	cmp r0, r2
	bne _08095AB0
	ldr r0, _08095A84  @ =0x000016FA
	add r3, r5, r0
	ldr r1, _08095A88  @ =0x0000179F
	add r2, r5, r1
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	ldrb r1, [r3]
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _08095A8C  @ =0x000016EA
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095A5A
	ldr r0, _08095A90  @ =0x00001803
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08095AC4
_08095A5A:
	ldrb r2, [r2]
	ldr r1, _08095A94  @ =0x00001784
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08095A6E
	lsl r0, r2, #27
	lsr r2, r0, #24
_08095A6E:
	ldrb r0, [r3]
	orr r2, r2, r0
	strb r2, [r3]
	b _08095AB0
	.byte 0x00
	.byte 0x00
_08095A78:
	.4byte gRam
_08095A7C:
	.4byte 0x00001726
_08095A80:
	.4byte 0x000016D5
_08095A84:
	.4byte 0x000016FA
_08095A88:
	.4byte 0x0000179F
_08095A8C:
	.4byte 0x000016EA
_08095A90:
	.4byte 0x00001803
_08095A94:
	.4byte 0x00001784
_08095A98:
	mov r2, #161
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095AC4
	ldr r3, _08095ACC  @ =0x000016FA
	add r2, r5, r3
	ldrb r1, [r2]
	mov r0, #246
	and r0, r0, r1
	strb r0, [r2]
_08095AB0:
	ldr r0, _08095AD0  @ =0x00001803
	add r1, r5, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _08095ACC  @ =0x000016FA
	add r2, r5, r1
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
_08095AC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08095ACC:
	.4byte 0x000016FA
_08095AD0:
	.4byte 0x00001803
	THUMB_FUNC_END sub_080957E8

