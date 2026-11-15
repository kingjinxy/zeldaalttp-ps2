	THUMB_FUNC_START sub_080C6B94
sub_080C6B94: @ 0x080C6B94
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _080C6C48  @ =gRam
	ldr r3, _080C6C4C  @ =0x000011D2
	add r2, r4, r3
	add r2, r0, r2
	mov r3, #22
	strb r3, [r2]
	ldr r5, _080C6C50  @ =0x000015F8
	add r2, r4, r5
	strb r3, [r2]
	ldr r6, _080C6C54  @ =0x0000122C
	add r3, r4, r6
	add r3, r0, r3
	ldr r5, _080C6C58  @ =0x00000EE2
	add r2, r4, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r3]
	add r6, r6, #60
	add r3, r4, r6
	add r3, r0, r3
	add r5, r5, #32
	add r2, r4, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r6, _080C6C5C  @ =0x00000ED2
	add r2, r4, r6
	add r2, r1, r2
	ldrb r3, [r2]
	sub r5, r5, #16
	add r2, r4, r5
	add r2, r1, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r3, r3, r2
	ldr r6, _080C6C60  @ =0x00001142
	add r2, r4, r6
	add r2, r1, r2
	ldrb r2, [r2]
	sub r3, r3, r2
	lsl r3, r3, #16
	mov r2, #128
	lsl r2, r2, #13
	add r3, r3, r2
	lsr r5, r3, #16
	add r6, r6, #204
	add r2, r4, r6
	add r2, r0, r2
	strb r5, [r2]
	ldr r5, _080C6C64  @ =0x0000124A
	add r2, r4, r5
	add r2, r0, r2
	lsr r3, r3, #24
	strb r3, [r2]
	ldr r6, _080C6C68  @ =0x000013EE
	add r2, r4, r6
	add r2, r0, r2
	ldr r5, _080C6C6C  @ =0x00000969
	add r3, r4, r5
	ldrb r3, [r3]
	strb r3, [r2]
	sub r6, r6, #150
	add r3, r4, r6
	add r3, r0, r3
	ldr r5, _080C6C70  @ =0x000010F2
	add r2, r4, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r3]
	sub r6, r6, #90
	add r2, r4, r6
	add r2, r0, r2
	mov r3, #31
	strb r3, [r2]
	ldr r3, _080C6C74  @ =0x0000131C
	add r2, r4, r3
	add r0, r0, r2
	ldr r5, _080C6C78  @ =0x00000F82
	add r4, r4, r5
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080C6C48:
	.4byte gRam
_080C6C4C:
	.4byte 0x000011D2
_080C6C50:
	.4byte 0x000015F8
_080C6C54:
	.4byte 0x0000122C
_080C6C58:
	.4byte 0x00000EE2
_080C6C5C:
	.4byte 0x00000ED2
_080C6C60:
	.4byte 0x00001142
_080C6C64:
	.4byte 0x0000124A
_080C6C68:
	.4byte 0x000013EE
_080C6C6C:
	.4byte 0x00000969
_080C6C70:
	.4byte 0x000010F2
_080C6C74:
	.4byte 0x0000131C
_080C6C78:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080C6B94

