	THUMB_FUNC_START sub_080D72FC
sub_080D72FC: @ 0x080D72FC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r4, #0
	ldr r5, _080D7320  @ =gRam
	ldr r1, _080D7324  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080D732C
	ldr r1, _080D7328  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	b _080D73DC
_080D7320:
	.4byte gRam
_080D7324:
	.4byte 0x000009B2
_080D7328:
	.4byte 0x00000F92
_080D732C:
	ldr r1, _080D7398  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r6, #0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080D739C  @ =0x000009DA
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r0, _080D73A0  @ =0x00000107
	cmp r1, r0
	beq _080D73C0
	ldr r0, _080D73A4  @ =0x00000E85
	add r3, r5, r0
	add r3, r4, r3
	sub r0, r0, #206
	add r1, r5, r0
	ldrb r0, [r1]
	strb r0, [r3]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D73A8  @ =0x00000AA8
	add r0, r5, r1
	ldrh r1, [r0]
	lsr r1, r1, #8
	ldr r2, _080D73AC  @ =gUnknown_08175660
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _080D7376
	ldr r1, _080D73B0  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
_080D7376:
	ldr r0, _080D73B4  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D73B8  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080D73BC  @ =0x00001032
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	b _080D73DC
_080D7398:
	.4byte 0x000010F2
_080D739C:
	.4byte 0x000009DA
_080D73A0:
	.4byte 0x00000107
_080D73A4:
	.4byte 0x00000E85
_080D73A8:
	.4byte 0x00000AA8
_080D73AC:
	.4byte gUnknown_08175660
_080D73B0:
	.4byte 0x00000FA2
_080D73B4:
	.4byte 0x00000F92
_080D73B8:
	.4byte 0x00001122
_080D73BC:
	.4byte 0x00001032
_080D73C0:
	ldr r0, _080D73D0  @ =gBookOfMudora
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D73D4
	mov r0, #14
	bl sub_0812FBC4
	b _080D73DC
_080D73D0:
	.4byte gBookOfMudora
_080D73D4:
	ldr r1, _080D73E4  @ =0x00000FA2
	add r0, r5, r1
	add r0, r2, r0
	strb r6, [r0]
_080D73DC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D73E4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D72FC

