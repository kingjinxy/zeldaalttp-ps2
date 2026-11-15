	THUMB_FUNC_START sub_080C8E7C
sub_080C8E7C: @ 0x080C8E7C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	mov r5, sp
	add r5, r5, #1
	mov r0, sp
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080C8ECE
	ldr r2, _080C8ED8  @ =gRam
	mov r0, #237
	lsl r0, r0, #4
	add r3, r2, r0
	strb r1, [r3]
	ldr r7, _080C8EDC  @ =0x00000ED1
	add r0, r2, r7
	strb r1, [r0]
	ldr r1, _080C8EE0  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080C8EC0
	ldr r7, _080C8EE4  @ =0x0000141C
	add r0, r2, r7
	add r0, r4, r0
	ldrb r0, [r0]
_080C8EC0:
	cmp r0, #11
	bne _080C8ECE
	ldr r1, _080C8EE8  @ =0x0000142C
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080C8ECE:
	ldrb r0, [r5]
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
_080C8ED8:
	.4byte gRam
_080C8EDC:
	.4byte 0x00000ED1
_080C8EE0:
	.4byte 0x00000FA2
_080C8EE4:
	.4byte 0x0000141C
_080C8EE8:
	.4byte 0x0000142C
	THUMB_FUNC_END sub_080C8E7C

