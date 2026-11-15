	THUMB_FUNC_START sub_080A3D38
sub_080A3D38: @ 0x080A3D38
	push {lr}
	ldr r3, _080A3D74  @ =gRam
	ldr r0, _080A3D78  @ =0x0000176F
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A3D96
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080A3D7C  @ =0x0000178A
	add r0, r3, r1
	ldr r2, _080A3D80  @ =0x0000180C
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080A3D96
	ldr r0, _080A3D84  @ =0x000016EA
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #8
	bls _080A3D88
	bl sub_0809D0EC
	b _080A3D96
	.byte 0x00
	.byte 0x00
_080A3D74:
	.4byte gRam
_080A3D78:
	.4byte 0x0000176F
_080A3D7C:
	.4byte 0x0000178A
_080A3D80:
	.4byte 0x0000180C
_080A3D84:
	.4byte 0x000016EA
_080A3D88:
	ldr r1, _080A3D9C  @ =0x00001804
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3D96
	bl sub_0809CF70
_080A3D96:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A3D9C:
	.4byte 0x00001804
	THUMB_FUNC_END sub_080A3D38

