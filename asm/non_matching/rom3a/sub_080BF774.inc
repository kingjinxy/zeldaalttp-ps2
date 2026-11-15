	THUMB_FUNC_START sub_080BF774
sub_080BF774: @ 0x080BF774
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r3, _080BF7F4  @ =gRam
	ldr r0, _080BF7F8  @ =0x00000DED
	add r2, r3, r0
	add r2, r5, r2
	ldrb r1, [r2]
	lsl r1, r1, #28
	ldr r4, _080BF7FC  @ =0x00000E01
	add r0, r3, r4
	add r0, r5, r0
	lsr r1, r1, #24
	ldrb r4, [r0]
	add r1, r1, r4
	strb r1, [r0]
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r7, #255
	lsl r7, r7, #8
	and r1, r1, r7
	neg r0, r1
	orr r0, r0, r1
	lsr r6, r0, #31
	ldrb r0, [r2]
	lsl r0, r0, #24
	lsr r4, r0, #28
	cmp r0, #0
	bge _080BF7BC
	mov r1, #16
	neg r1, r1
	add r0, r1, #0
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_080BF7BC:
	ldr r0, _080BF800  @ =0x00000DC5
	add r2, r3, r0
	add r2, r5, r2
	ldrb r1, [r2]
	add r0, r0, #20
	add r3, r3, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r0, r4, #24
	asr r0, r0, #24
	add r0, r0, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	strb r1, [r2]
	lsl r0, r1, #16
	asr r0, r0, #16
	and r0, r0, r7
	asr r0, r0, #8
	strb r0, [r3]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BF7F4:
	.4byte gRam
_080BF7F8:
	.4byte 0x00000DED
_080BF7FC:
	.4byte 0x00000E01
_080BF800:
	.4byte 0x00000DC5
	THUMB_FUNC_END sub_080BF774

