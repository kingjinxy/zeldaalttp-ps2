	THUMB_FUNC_START sub_080C2FA8
sub_080C2FA8: @ 0x080C2FA8
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C36D8
	ldr r5, _080C3010  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r6, r5, r1
	strb r0, [r6]
	add r0, r4, #0
	bl sub_080C3028
	add r3, r0, #0
	ldr r1, _080C3014  @ =0x00000961
	add r0, r5, r1
	strb r3, [r0]
	add r1, r1, #27
	add r0, r5, r1
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C2FE6
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_080C2FE6:
	ldr r1, _080C3018  @ =0x000015F9
	add r0, r5, r1
	strb r2, [r0]
	ldr r1, _080C301C  @ =0x0000097D
	add r0, r5, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C3004
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080C3004:
	cmp r1, r2
	bcs _080C3020
	add r0, r3, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C3022
_080C3010:
	.4byte gRam
_080C3014:
	.4byte 0x00000961
_080C3018:
	.4byte 0x000015F9
_080C301C:
	.4byte 0x0000097D
_080C3020:
	ldrb r0, [r6]
_080C3022:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C2FA8

