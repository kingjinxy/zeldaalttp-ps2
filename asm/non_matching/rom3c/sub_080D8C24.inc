	THUMB_FUNC_START sub_080D8C24
sub_080D8C24: @ 0x080D8C24
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080D8E68
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8C44
	b _080D8DDC
_080D8C44:
	add r0, r6, #0
	bl sub_080C7A20
	ldr r5, _080D8DE8  @ =gRam
	ldr r1, _080D8DEC  @ =0x00001710
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D8CC4
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8CC4
	bl sub_08093078
	ldr r2, _080D8DF0  @ =0x00000FC2
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #48
	bl sub_080C2CB4
	mov r0, #150
	lsl r0, r0, #4
	add r3, r5, r0
	ldr r4, _080D8DF4  @ =gUnknown_081757FC
	ldr r1, _080D8DF8  @ =0x00000545
	add r0, r5, r1
	ldrb r2, [r0]
	lsr r0, r2, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	ldrb r3, [r3]
	add r0, r0, r3
	ldr r3, _080D8DFC  @ =0x000016CD
	add r1, r5, r3
	strb r0, [r1]
	ldr r0, _080D8E00  @ =0x00000961
	add r1, r5, r0
	mov r0, #3
	and r0, r0, r2
	add r0, r0, r4
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r2, _080D8E04  @ =0x000016CE
	add r1, r5, r2
	strb r0, [r1]
	add r3, r3, #43
	add r1, r5, r3
	mov r0, #20
	strb r0, [r1]
	bl sub_0809E2CC
	add r0, r6, #0
	mov r1, #121
	bl sub_080CF140
_080D8CC4:
	mov r2, #15
	ldr r5, _080D8DE8  @ =gRam
	ldr r0, _080D8E08  @ =0x00000968
	add r0, r0, r5
	mov r8, r0
	ldr r1, _080D8DF0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r0, r6
	mov r9, r0
_080D8CD6:
	lsl r2, r2, #24
	asr r4, r2, #24
	ldr r3, _080D8E0C  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	eor r1, r1, r4
	mov r0, #3
	and r1, r1, r0
	ldr r3, _080D8E10  @ =0x00001142
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r7, r2, #0
	cmp r1, #0
	bne _080D8DCE
	ldr r1, _080D8E14  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080D8DCE
	ldr r2, _080D8E18  @ =0x00001032
	add r1, r5, r2
	add r1, r4, r1
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r1, r1, r0
	mov r0, #64
	and r1, r1, r0
	cmp r1, #0
	bne _080D8DCE
	ldr r1, _080D8E1C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, r8
	strb r0, [r2]
	ldr r3, _080D8E20  @ =0x00000F02
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080D8E24  @ =0x00000969
	add r0, r5, r2
	strb r1, [r0]
	sub r3, r3, #48
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080D8E28  @ =0x0000096C
	add r2, r5, r1
	strb r0, [r2]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080D8E2C  @ =0x0000096D
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _080D8E30  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080D8E34  @ =0x00001623
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r3, r8
	ldrh r0, [r3]
	sub r1, r1, r0
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080D8DCE
	ldr r1, _080D8E38  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080D8E3C  @ =0x00001625
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080D8DCE
	ldr r1, _080D8E40  @ =0x00001072
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #64
	bl sub_080C2DCC
	ldr r2, _080D8E44  @ =0x00001102
	add r1, r5, r2
	add r1, r4, r1
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D8E48  @ =0x00001112
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080D8E00  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #32
	mov r3, r9
	strb r0, [r3]
	add r0, r6, #0
	mov r1, #121
	bl sub_080CF140
_080D8DCE:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r7, r1
	lsr r2, r0, #24
	cmp r0, #0
	blt _080D8DDC
	b _080D8CD6
_080D8DDC:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080D8DE8:
	.4byte gRam
_080D8DEC:
	.4byte 0x00001710
_080D8DF0:
	.4byte 0x00000FC2
_080D8DF4:
	.4byte gUnknown_081757FC
_080D8DF8:
	.4byte 0x00000545
_080D8DFC:
	.4byte 0x000016CD
_080D8E00:
	.4byte 0x00000961
_080D8E04:
	.4byte 0x000016CE
_080D8E08:
	.4byte 0x00000968
_080D8E0C:
	.4byte 0x00000996
_080D8E10:
	.4byte 0x00001142
_080D8E14:
	.4byte 0x00000FA2
_080D8E18:
	.4byte 0x00001032
_080D8E1C:
	.4byte 0x00000EE2
_080D8E20:
	.4byte 0x00000F02
_080D8E24:
	.4byte 0x00000969
_080D8E28:
	.4byte 0x0000096C
_080D8E2C:
	.4byte 0x0000096D
_080D8E30:
	.4byte 0x00001622
_080D8E34:
	.4byte 0x00001623
_080D8E38:
	.4byte 0x00001624
_080D8E3C:
	.4byte 0x00001625
_080D8E40:
	.4byte 0x00001072
_080D8E44:
	.4byte 0x00001102
_080D8E48:
	.4byte 0x00001112
	THUMB_FUNC_END sub_080D8C24

