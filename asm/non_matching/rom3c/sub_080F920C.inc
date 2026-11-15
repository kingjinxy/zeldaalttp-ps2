	THUMB_FUNC_START sub_080F920C
sub_080F920C: @ 0x080F920C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r3, _080F9274  @ =gRam
	ldr r1, _080F9278  @ =0x00000ED2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r6, #150
	lsl r6, r6, #4
	add r2, r3, r6
	strb r0, [r2]
	add r1, r1, #32
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r6, r6, #1
	add r0, r3, r6
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	cmp r0, r2
	bcs _080F9262
	ldr r6, _080F927C  @ =0x00000F52
	add r0, r3, r6
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r0, _080F9280  @ =0x00000EE2
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #9
	strb r0, [r1]
	ldr r1, _080F9284  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_080F9262:
	ldr r6, _080F9288  @ =0x00001172
	add r1, r3, r6
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080F9274:
	.4byte gRam
_080F9278:
	.4byte 0x00000ED2
_080F927C:
	.4byte 0x00000F52
_080F9280:
	.4byte 0x00000EE2
_080F9284:
	.4byte 0x00000F92
_080F9288:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080F920C

