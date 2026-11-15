	THUMB_FUNC_START sub_080D663C
sub_080D663C: @ 0x080D663C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _080D66B0  @ =gRam
	ldr r1, _080D66B4  @ =0x00000FC2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080D66CC
	ldr r2, _080D66B8  @ =0x00001052
	add r0, r5, r2
	add r6, r4, r0
	ldrb r1, [r6]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080D667A
	ldr r1, _080D66BC  @ =gUnknown_08175350
	sub r2, r2, #240
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C35FC
_080D667A:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080D66C0  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D66CC
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r1, _080D66C4  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	ldr r3, _080D66C8  @ =gUnknown_08175352
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080D66DC
_080D66B0:
	.4byte gRam
_080D66B4:
	.4byte 0x00000FC2
_080D66B8:
	.4byte 0x00001052
_080D66BC:
	.4byte gUnknown_08175350
_080D66C0:
	.4byte 0x00001042
_080D66C4:
	.4byte 0x00000F92
_080D66C8:
	.4byte gUnknown_08175352
_080D66CC:
	ldr r2, _080D66E4  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	strb r0, [r7]
_080D66DC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D66E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D663C

