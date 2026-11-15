	THUMB_FUNC_START sub_08111B58
sub_08111B58: @ 0x08111B58
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08111B94  @ =gRam
	ldr r1, _08111B98  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _08111B9C  @ =0x00000EF2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, r0
	lsl r1, r1, #16
	cmp r1, #0
	ble _08111BA4
	ldr r1, _08111BA0  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _08111BB0
_08111B94:
	.4byte gRam
_08111B98:
	.4byte 0x00000ED2
_08111B9C:
	.4byte 0x00000EF2
_08111BA0:
	.4byte 0x00000FA2
_08111BA4:
	add r0, r4, #0
	bl sub_080C3758
	add r0, r4, #0
	bl sub_080C35A4
_08111BB0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08111B58

	.byte 0x00
	.byte 0x00
