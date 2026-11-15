	THUMB_FUNC_START sub_080DD7A0
sub_080DD7A0: @ 0x080DD7A0
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #43
	bl sub_080CA538
	ldr r3, _080DD80C  @ =gRam
	ldr r2, _080DD810  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	mov r5, #0
	mov r2, #148
	strb r2, [r1]
	ldr r6, _080DD814  @ =0x00000F02
	add r1, r3, r6
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r2, _080DD818  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #63
	strb r2, [r1]
	sub r6, r6, #16
	add r1, r3, r6
	add r1, r0, r1
	strb r5, [r1]
	ldr r2, _080DD81C  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #2
	mov r2, #2
	strb r2, [r1]
	ldr r6, _080DD820  @ =0x00001172
	add r1, r3, r6
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _080DD824  @ =0x00001012
	add r1, r3, r2
	add r1, r0, r1
	strb r5, [r1]
	sub r6, r6, #80
	add r3, r3, r6
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #241
	and r1, r1, r2
	orr r1, r1, r4
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD80C:
	.4byte gRam
_080DD810:
	.4byte 0x00000EE2
_080DD814:
	.4byte 0x00000F02
_080DD818:
	.4byte 0x00000ED2
_080DD81C:
	.4byte 0x00001052
_080DD820:
	.4byte 0x00001172
_080DD824:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080DD7A0

