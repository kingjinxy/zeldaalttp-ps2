	THUMB_FUNC_START sub_080D62C8
sub_080D62C8: @ 0x080D62C8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #0
	mov r8, r0
	ldr r5, _080D63B8  @ =gRam
	ldr r1, _080D63BC  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D63C0  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D62FA
	mov r0, #8
	bl sub_080CF3A0
_080D62FA:
	ldr r2, _080D63C4  @ =0x00001052
	add r0, r5, r2
	add r6, r4, r0
	ldrb r2, [r6]
	lsr r2, r2, #3
	mov r7, #3
	and r2, r2, r7
	ldr r0, _080D63C8  @ =0x00001122
	add r3, r5, r0
	add r3, r4, r3
	ldrb r0, [r3]
	mov r1, #191
	and r1, r1, r0
	ldr r0, _080D63CC  @ =gUnknown_08175324
	add r0, r2, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r3]
	ldr r0, _080D63D0  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080D63D4  @ =gUnknown_08175328
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080D63D8  @ =0x00000D94
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D634A
	b _080D646C
_080D634A:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D6358
	b _080D646C
_080D6358:
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _080D63DC  @ =0x00001072
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D6370
	add r0, r4, #0
	bl sub_080C3540
_080D6370:
	add r0, r4, #0
	bl Sprite3_Move
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r1, _080D63E0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080D63EC
	ldr r2, _080D63E4  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	and r0, r0, r7
	cmp r0, #0
	bne _080D6400
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2CB4
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r2, _080D63E8  @ =0x00000961
	add r1, r5, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	b _080D6406
_080D63B8:
	.4byte gRam
_080D63BC:
	.4byte 0x000010F2
_080D63C0:
	.4byte 0x00000FD2
_080D63C4:
	.4byte 0x00001052
_080D63C8:
	.4byte 0x00001122
_080D63CC:
	.4byte gUnknown_08175324
_080D63D0:
	.4byte 0x00000F92
_080D63D4:
	.4byte gUnknown_08175328
_080D63D8:
	.4byte 0x00000D94
_080D63DC:
	.4byte 0x00001072
_080D63E0:
	.4byte 0x00000FC2
_080D63E4:
	.4byte 0x00000996
_080D63E8:
	.4byte 0x00000961
_080D63EC:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080D6400
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2CB4
	mov r5, #1
	mov r8, r5
_080D6400:
	mov r0, r8
	cmp r0, #0
	beq _080D646C
_080D6406:
	ldr r0, _080D6430  @ =gRam
	ldr r2, _080D6434  @ =0x00000F12
	add r1, r0, r2
	add r3, r4, r1
	ldrb r2, [r3]
	mov r5, #150
	lsl r5, r5, #4
	add r1, r0, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r5, r0, #0
	cmp r2, r1
	beq _080D643C
	sub r0, r2, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D6438
	sub r0, r2, #1
	b _080D643A
_080D6430:
	.4byte gRam
_080D6434:
	.4byte 0x00000F12
_080D6438:
	add r0, r2, #1
_080D643A:
	strb r0, [r3]
_080D643C:
	ldr r1, _080D6460  @ =0x00000F22
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	ldr r1, _080D6464  @ =0x00000961
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r2, r0
	beq _080D646C
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D6468
	sub r0, r2, #1
	b _080D646A
_080D6460:
	.4byte 0x00000F22
_080D6464:
	.4byte 0x00000961
_080D6468:
	add r0, r2, #1
_080D646A:
	strb r0, [r3]
_080D646C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D62C8

	.byte 0x00
	.byte 0x00
