	THUMB_FUNC_START sub_080FA1D8
sub_080FA1D8: @ 0x080FA1D8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080FA248  @ =gRam
	ldr r1, _080FA24C  @ =0x00000FB2
	add r0, r4, r1
	add r6, r2, r0
	mov r0, #2
	strb r0, [r6]
	ldr r0, _080FA250  @ =0x00000996
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080FA206
	ldr r0, _080FA254  @ =0x00001052
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FA206:
	lsl r0, r2, #3
	ldrb r3, [r3]
	add r0, r0, r3
	mov r1, #127
	and r0, r0, r1
	cmp r0, #0
	bne _080FA224
	ldr r1, _080FA258  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	add r0, r2, #0
	bl sub_080FA148
_080FA224:
	ldr r0, _080FA25C  @ =0x00000F92
	add r2, r4, r0
	add r2, r5, r2
	ldr r3, _080FA260  @ =gUnknown_0817A3C8
	ldr r1, _080FA254  @ =0x00001052
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	ldrb r1, [r6]
	orr r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080FA248:
	.4byte gRam
_080FA24C:
	.4byte 0x00000FB2
_080FA250:
	.4byte 0x00000996
_080FA254:
	.4byte 0x00001052
_080FA258:
	.4byte 0x00000FC2
_080FA25C:
	.4byte 0x00000F92
_080FA260:
	.4byte gUnknown_0817A3C8
	THUMB_FUNC_END sub_080FA1D8

