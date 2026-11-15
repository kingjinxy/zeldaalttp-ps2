	THUMB_FUNC_START sub_080F605C
sub_080F605C: @ 0x080F605C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r6, _080F60C4  @ =gRam
	ldr r1, _080F60C8  @ =0x00001042
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F6084
	add r0, r4, #0
	bl sub_080C3540
_080F6084:
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r0, _080F60CC  @ =0x00001152
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	mov r3, #0
	strb r0, [r1]
	ldr r1, _080F60D0  @ =0x00001142
	add r0, r6, r1
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F60BC
	strb r3, [r2]
	ldr r1, _080F60D4  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080F60D8  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
_080F60BC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F60C4:
	.4byte gRam
_080F60C8:
	.4byte 0x00001042
_080F60CC:
	.4byte 0x00001152
_080F60D0:
	.4byte 0x00001142
_080F60D4:
	.4byte 0x00000FC2
_080F60D8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F605C

