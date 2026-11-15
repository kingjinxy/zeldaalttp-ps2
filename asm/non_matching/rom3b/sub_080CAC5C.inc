	THUMB_FUNC_START sub_080CAC5C
sub_080CAC5C: @ 0x080CAC5C
	push {r4-r6,lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r4, r2, #24
	lsl r3, r3, #16
	lsr r6, r3, #16
	mov r3, #7
	bic r3, r3, r6
	mov r2, #1
	lsl r2, r2, r3
	ldrb r3, [r0]
	orr r2, r2, r3
	strb r2, [r0]
	ldr r3, _080CACA4  @ =gRam
	lsl r0, r4, #1
	ldr r5, _080CACA8  @ =0x00000D64
	add r2, r3, r5
	add r0, r0, r2
	strh r6, [r0]
	ldr r2, _080CACAC  @ =0x00000D1B
	add r0, r3, r2
	add r0, r4, r0
	add r2, r1, #0
	add r2, r2, #8
	strb r2, [r0]
	mov r0, #15
	and r0, r0, r6
	lsl r0, r0, #4
	add r5, r3, #0
	cmp r1, #249
	bne _080CACB0
	add r0, r0, #8
	add r1, r0, #0
	b _080CACB4
	.byte 0x00
	.byte 0x00
_080CACA4:
	.4byte gRam
_080CACA8:
	.4byte 0x00000D64
_080CACAC:
	.4byte 0x00000D1B
_080CACB0:
	lsl r0, r0, #16
	lsr r1, r0, #16
_080CACB4:
	ldr r2, _080CAD14  @ =0x00000D23
	add r0, r5, r2
	add r0, r4, r0
	mov r3, #0
	strb r1, [r0]
	ldr r0, _080CAD18  @ =0x00000D33
	add r1, r5, r0
	add r1, r4, r1
	mov r2, #240
	add r0, r6, #0
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080CAD1C  @ =0x00000D2B
	add r2, r5, r1
	add r2, r4, r2
	mov r0, #192
	lsl r0, r0, #2
	and r0, r0, r6
	lsr r0, r0, #8
	strb r0, [r2]
	ldr r0, _080CAD20  @ =0x00000D3B
	add r1, r5, r0
	add r1, r4, r1
	lsr r0, r6, #10
	strb r0, [r1]
	ldr r6, _080CAD24  @ =0x00001601
	add r0, r5, r6
	ldrb r0, [r0]
	ldrb r6, [r2]
	add r0, r0, r6
	strb r0, [r2]
	ldr r2, _080CAD28  @ =0x00001603
	add r0, r5, r2
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r1, _080CAD2C  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	add r0, r4, #0
	bl sub_080CBE5C
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CAD14:
	.4byte 0x00000D23
_080CAD18:
	.4byte 0x00000D33
_080CAD1C:
	.4byte 0x00000D2B
_080CAD20:
	.4byte 0x00000D3B
_080CAD24:
	.4byte 0x00001601
_080CAD28:
	.4byte 0x00001603
_080CAD2C:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080CAC5C

