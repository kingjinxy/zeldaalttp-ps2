	THUMB_FUNC_START sub_080DA318
sub_080DA318: @ 0x080DA318
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r4, #1
	neg r4, r4
	ldr r5, _080DA378  @ =gRam
	ldr r1, _080DA37C  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080DA36E
	mov r0, #193
	add r1, r6, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DA36E
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DA380  @ =0x00000F92
	add r0, r5, r2
	add r1, r4, r0
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DA384  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080DA388  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r2, _080DA38C  @ =0x00000F82
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080DA36E:
	add r0, r4, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080DA378:
	.4byte gRam
_080DA37C:
	.4byte 0x00000996
_080DA380:
	.4byte 0x00000F92
_080DA384:
	.4byte 0x00000FC2
_080DA388:
	.4byte 0x00001172
_080DA38C:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080DA318

