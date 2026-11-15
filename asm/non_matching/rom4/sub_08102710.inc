	THUMB_FUNC_START sub_08102710
sub_08102710: @ 0x08102710
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08102758  @ =gUnknown_0200C4B8
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _0810275C  @ =gRam
	ldr r1, _08102760  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08102774
	lsr r1, r0, #29
	ldr r0, _08102764  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r0, _08102768  @ =gUnknown_0817B7B8
	add r1, r1, r0
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _0810276C  @ =0x00000F82
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08102770  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	b _08102792
	.byte 0x00
	.byte 0x00
_08102758:
	.4byte gUnknown_0200C4B8
_0810275C:
	.4byte gRam
_08102760:
	.4byte 0x00000FC2
_08102764:
	.4byte 0x00000F92
_08102768:
	.4byte gUnknown_0817B7B8
_0810276C:
	.4byte 0x00000F82
_08102770:
	.4byte 0x00001082
_08102774:
	ldr r2, _08102798  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _0810279C  @ =0x00000F72
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #63
	and r1, r1, r0
	strb r1, [r2]
	mov r0, #127
	strb r0, [r6]
_08102792:
	pop {r4-r6}
	pop {r0}
	bx r0
_08102798:
	.4byte 0x00000F52
_0810279C:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_08102710

