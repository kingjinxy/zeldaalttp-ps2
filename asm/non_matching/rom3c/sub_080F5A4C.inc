	THUMB_FUNC_START sub_080F5A4C
sub_080F5A4C: @ 0x080F5A4C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080F5A98  @ =gRam
	ldr r1, _080F5A9C  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #46
	bne _080F5A6A
	add r0, r4, #0
	mov r1, #121
	bl sub_080CF140
_080F5A6A:
	ldrb r0, [r5]
	cmp r0, #0
	bne _080F5A80
	ldr r1, _080F5AA0  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #8
	strb r0, [r5]
_080F5A80:
	ldr r1, _080F5AA4  @ =0x00000F92
	add r0, r6, r1
	add r0, r7, r0
	ldrb r1, [r5]
	lsr r1, r1, #1
	mov r2, #3
	and r1, r1, r2
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5A98:
	.4byte gRam
_080F5A9C:
	.4byte 0x00000FC2
_080F5AA0:
	.4byte 0x00000F52
_080F5AA4:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F5A4C

