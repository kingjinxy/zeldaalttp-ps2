	THUMB_FUNC_START sub_0812FEF8
sub_0812FEF8: @ 0x0812FEF8
	push {r4-r6,lr}
	ldr r0, _0812FF40  @ =gRam
	ldr r1, _0812FF44  @ =0x000009C6
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #64
	and r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	neg r4, r4
	asr r4, r4, #31
	mov r0, #8
	and r4, r4, r0
	ldr r6, _0812FF48  @ =gUnknown_0822B150
	ldr r5, _0812FF4C  @ =gUnknown_0822BA38
	add r0, r4, #2
	add r0, r0, r5
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	ldr r1, _0812FF50  @ =gUnknown_02032000
	bl LZ77UnCompWram
	add r4, r4, #3
	add r4, r4, r5
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	ldr r1, _0812FF54  @ =gUnknown_02034000
	bl LZ77UnCompWram
	pop {r4-r6}
	pop {r0}
	bx r0
_0812FF40:
	.4byte gRam
_0812FF44:
	.4byte 0x000009C6
_0812FF48:
	.4byte gUnknown_0822B150
_0812FF4C:
	.4byte gUnknown_0822BA38
_0812FF50:
	.4byte gUnknown_02032000
_0812FF54:
	.4byte gUnknown_02034000
	THUMB_FUNC_END sub_0812FEF8

