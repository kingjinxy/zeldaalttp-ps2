	THUMB_FUNC_START sub_080CC29C
sub_080CC29C: @ 0x080CC29C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r7, r0, #0
	ldr r5, _080CC2C4  @ =gRam
	ldr r1, _080CC2C8  @ =0x00000D43
	add r0, r5, r1
	add r1, r7, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080CC2D0
	ldr r3, _080CC2CC  @ =0x00000EC7
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CC390
	add r0, r2, #1
	strb r0, [r1]
	b _080CC390
	.byte 0x00
	.byte 0x00
_080CC2C4:
	.4byte gRam
_080CC2C8:
	.4byte 0x00000D43
_080CC2CC:
	.4byte 0x00000EC7
_080CC2D0:
	add r0, r2, #1
	strb r0, [r1]
	ldr r1, _080CC398  @ =gUnknown_081729F0
	add r1, r7, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080CC390
	mov r0, #110
	add r1, r7, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080CC390
	ldr r1, _080CC39C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080CC3A0  @ =0x00000969
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080CC3A4  @ =0x00000F02
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #3
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	sub r3, r3, #48
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #3
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080CC3A8  @ =0x00001142
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
	ldr r1, _080CC3AC  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
	ldr r2, _080CC3B0  @ =0x00001032
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #16
	orr r0, r0, r2
	strb r0, [r1]
	sub r3, r3, #80
	add r1, r5, r3
	add r1, r4, r1
	ldr r2, _080CC3B4  @ =0x00000D5B
	add r0, r5, r2
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	lsl r0, r4, #24
	lsr r6, r0, #24
	add r0, r6, #0
	mov r1, #108
	bl sub_080CF0AC
	ldr r3, _080CC3B8  @ =0x00000D1B
	add r0, r5, r3
	add r0, r7, r0
	ldrb r2, [r0]
	mov r1, #0
	strb r1, [r0]
	cmp r2, #27
	bne _080CC390
	ldr r1, _080CC3BC  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #74
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C2914
	ldr r2, _080CC3C0  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #112
	strb r1, [r0]
_080CC390:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CC398:
	.4byte gUnknown_081729F0
_080CC39C:
	.4byte 0x00000EE2
_080CC3A0:
	.4byte 0x00000969
_080CC3A4:
	.4byte 0x00000F02
_080CC3A8:
	.4byte 0x00001142
_080CC3AC:
	.4byte 0x00001062
_080CC3B0:
	.4byte 0x00001032
_080CC3B4:
	.4byte 0x00000D5B
_080CC3B8:
	.4byte 0x00000D1B
_080CC3BC:
	.4byte 0x00000FF2
_080CC3C0:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080CC29C

