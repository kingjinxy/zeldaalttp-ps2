	THUMB_FUNC_START sub_080CC634
sub_080CC634: @ 0x080CC634
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080CC6BC  @ =gRam
	ldr r1, _080CC6C0  @ =0x00000D23
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r2, r3, r5
	strb r0, [r2]
	ldr r6, _080CC6C4  @ =0x00000D2B
	add r0, r3, r6
	add r0, r4, r0
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r3, r5
	strb r1, [r0]
	add r6, r6, #8
	add r0, r3, r6
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CC6C8  @ =0x00000964
	add r5, r3, r1
	strb r0, [r5]
	add r6, r6, #8
	add r0, r3, r6
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r6, _080CC6CC  @ =0x00000965
	add r0, r3, r6
	strb r1, [r0]
	ldr r0, _080CC6D0  @ =0x000016C4
	add r1, r3, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #32
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #63
	bhi _080CC6B4
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #32
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #63
	bhi _080CC6B4
	ldr r5, _080CC6D4  @ =0x00000D1B
	add r0, r3, r5
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r6, _080CC6D8  @ =0x00000DBA
	add r1, r3, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080CC6B4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CC6BC:
	.4byte gRam
_080CC6C0:
	.4byte 0x00000D23
_080CC6C4:
	.4byte 0x00000D2B
_080CC6C8:
	.4byte 0x00000964
_080CC6CC:
	.4byte 0x00000965
_080CC6D0:
	.4byte 0x000016C4
_080CC6D4:
	.4byte 0x00000D1B
_080CC6D8:
	.4byte 0x00000DBA
	THUMB_FUNC_END sub_080CC634

