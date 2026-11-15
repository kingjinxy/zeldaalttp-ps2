	THUMB_FUNC_START sub_080DA60C
sub_080DA60C: @ 0x080DA60C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080DA64C  @ =gRam
	ldr r1, _080DA650  @ =0x000010E2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080DA644
	ldr r3, _080DA654  @ =0x00001770
	add r0, r4, r3
	strb r1, [r0]
	ldr r3, _080DA658  @ =0x00000FA2
	add r0, r4, r3
	add r0, r2, r0
	strb r1, [r0]
	add r0, r2, #0
	bl sub_080CB9D4
	ldr r0, _080DA65C  @ =0x00000AA8
	add r2, r4, r0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #7
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
_080DA644:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA64C:
	.4byte gRam
_080DA650:
	.4byte 0x000010E2
_080DA654:
	.4byte 0x00001770
_080DA658:
	.4byte 0x00000FA2
_080DA65C:
	.4byte 0x00000AA8
	THUMB_FUNC_END sub_080DA60C

