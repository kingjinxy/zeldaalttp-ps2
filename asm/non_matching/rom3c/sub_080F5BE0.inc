	THUMB_FUNC_START sub_080F5BE0
sub_080F5BE0: @ 0x080F5BE0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C58F0
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F5BFA
	b _080F5D44
_080F5BFA:
	ldr r4, _080F5C94  @ =gRam
	ldr r1, _080F5C98  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r2, _080F5C9C  @ =0x00000F62
	add r0, r4, r2
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r6, _080F5CA0  @ =0x00000F72
	add r0, r4, r6
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080F5CA4  @ =gUnknown_08179924
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080F5CA8  @ =gUnknown_08179926
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080F5CAC  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	sub r6, r6, #112
	add r0, r4, r6
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r0, _080F5CB0  @ =0x00000ED2
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080F5CB4  @ =0x00000F82
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r6, r6, #16
	add r1, r4, r6
	add r1, r5, r1
	add r2, r2, #224
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #2
	bl sub_080C2CB4
	mov r6, #150
	lsl r6, r6, #4
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080F5CC0
	ldr r1, _080F5CB8  @ =0x00000FB2
	add r0, r4, r1
	add r1, r5, r0
	ldrb r3, [r1]
	add r2, r3, #0
	cmp r2, #2
	beq _080F5CD0
	ldr r4, _080F5CBC  @ =gUnknown_08179937
	mov r0, #0
	cmp r2, #2
	bls _080F5C8C
	mov r0, #1
_080F5C8C:
	add r0, r0, r4
	ldrb r0, [r0]
	add r0, r3, r0
	b _080F5CCE
_080F5C94:
	.4byte gRam
_080F5C98:
	.4byte 0x00001082
_080F5C9C:
	.4byte 0x00000F62
_080F5CA0:
	.4byte 0x00000F72
_080F5CA4:
	.4byte gUnknown_08179924
_080F5CA8:
	.4byte gUnknown_08179926
_080F5CAC:
	.4byte 0x00000EE2
_080F5CB0:
	.4byte 0x00000ED2
_080F5CB4:
	.4byte 0x00000F82
_080F5CB8:
	.4byte 0x00000FB2
_080F5CBC:
	.4byte gUnknown_08179937
_080F5CC0:
	ldr r2, _080F5D4C  @ =0x00000FB2
	add r1, r4, r2
	add r1, r5, r1
	ldr r6, _080F5D50  @ =0x00000961
	add r0, r4, r6
	ldrb r0, [r0]
	add r0, r0, #2
_080F5CCE:
	strb r0, [r1]
_080F5CD0:
	ldr r3, _080F5D54  @ =gRam
	ldr r1, _080F5D4C  @ =0x00000FB2
	add r0, r3, r1
	add r0, r5, r0
	ldrb r4, [r0]
	ldr r2, _080F5D58  @ =0x00000F62
	add r0, r3, r2
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r6, _080F5D5C  @ =0x00000F72
	add r0, r3, r6
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080F5D60  @ =gUnknown_08179928
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080F5D64  @ =gUnknown_0817992D
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080F5D68  @ =0x00000F82
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r6, r6, #240
	add r0, r3, r6
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080F5D6C  @ =gUnknown_08179932
	add r4, r4, r0
	ldrb r0, [r4]
	add r1, r0, r1
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _080F5D70  @ =0x00000EE2
	add r0, r3, r4
	add r0, r5, r0
	strb r2, [r0]
	ldr r6, _080F5D74  @ =0x00000F02
	add r0, r3, r6
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080F5D78  @ =0x00000ED2
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	add r4, r4, #16
	add r3, r3, r4
	add r3, r5, r3
	lsr r1, r1, #8
	strb r1, [r3]
_080F5D44:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5D4C:
	.4byte 0x00000FB2
_080F5D50:
	.4byte 0x00000961
_080F5D54:
	.4byte gRam
_080F5D58:
	.4byte 0x00000F62
_080F5D5C:
	.4byte 0x00000F72
_080F5D60:
	.4byte gUnknown_08179928
_080F5D64:
	.4byte gUnknown_0817992D
_080F5D68:
	.4byte 0x00000F82
_080F5D6C:
	.4byte gUnknown_08179932
_080F5D70:
	.4byte 0x00000EE2
_080F5D74:
	.4byte 0x00000F02
_080F5D78:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080F5BE0

