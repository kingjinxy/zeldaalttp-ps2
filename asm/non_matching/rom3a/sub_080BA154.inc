	THUMB_FUNC_START sub_080BA154
sub_080BA154: @ 0x080BA154
	push {r4,r5,lr}
	ldr r5, _080BA190  @ =gRam
	ldr r1, _080BA194  @ =0x00000A02
	add r0, r5, r1
	ldrb r4, [r0]
	add r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r4, r4, r0
	ldr r0, _080BA198  @ =0x00000FF2
	add r1, r5, r0
	mov r0, #44
	strb r0, [r1]
	bl sub_080CF370
	ldr r0, _080BA19C  @ =0x00001122
	add r1, r5, r0
	mov r0, #59
	strb r0, [r1]
	mov r0, #0
	bl sub_080C1F70
	ldr r0, _080BA1A0  @ =0x000001BF
	cmp r4, r0
	bls _080BA1A8
	ldr r0, _080BA1A4  @ =0x00000F92
	add r1, r5, r0
	mov r0, #2
	b _080BA1B4
_080BA190:
	.4byte gRam
_080BA194:
	.4byte 0x00000A02
_080BA198:
	.4byte 0x00000FF2
_080BA19C:
	.4byte 0x00001122
_080BA1A0:
	.4byte 0x000001BF
_080BA1A4:
	.4byte 0x00000F92
_080BA1A8:
	ldr r0, _080BA1C4  @ =0x00000F92
	add r1, r5, r0
	mov r0, #32
	and r4, r4, r0
	lsl r0, r4, #16
	lsr r0, r0, #21
_080BA1B4:
	strb r0, [r1]
	mov r0, #0
	bl SpriteActive_MainLong
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BA1C4:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080BA154

