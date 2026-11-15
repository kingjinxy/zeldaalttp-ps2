	THUMB_FUNC_START sub_080FDE64
sub_080FDE64: @ 0x080FDE64
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r6, #0
	ldr r4, _080FDF48  @ =gRam
	ldr r0, _080FDF4C  @ =0x00000D94
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080FE124
	ldr r1, _080FDF50  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080FDE9C
	ldr r2, _080FDF54  @ =0x00001770
	add r0, r4, r2
	strb r6, [r0]
	ldr r7, _080FDF58  @ =0x0000180D
	add r0, r4, r7
	strb r6, [r0]
_080FDE9C:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FDFA0
	ldr r1, _080FDF5C  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FDF80
	ldr r2, _080FDF60  @ =0x00000EE2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r7, _080FDF64  @ =0x000016C4
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080FDF68  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080FDF6C  @ =0x000016C5
	add r0, r4, r2
	strb r1, [r0]
	ldr r7, _080FDF70  @ =0x00000ED2
	add r0, r4, r7
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080FDF74  @ =0x00001142
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	sub r1, r1, r0
	add r7, r7, #32
	add r0, r4, r7
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r0, #3
	add r1, r1, r0
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	mov r2, #0
	strh r1, [r0]
	ldr r7, _080FDF54  @ =0x00001770
	add r6, r4, r7
	mov r0, #1
	strb r0, [r6]
	add r7, r7, #157
	add r3, r4, r7
	strb r0, [r3]
	ldr r7, _080FDF78  @ =0x000016F8
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #42
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #9
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r2, [r0]
	ldr r7, _080FDF7C  @ =0x00000958
	add r0, r4, r7
	ldrh r0, [r0]
	sub r1, r1, r0
	sub r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #255
	bls _080FDF88
	strb r2, [r6]
	strb r2, [r3]
	bl sub_080B0138
	bl sub_08092D18
	b _080FDFA0
	.byte 0x00
	.byte 0x00
_080FDF48:
	.4byte gRam
_080FDF4C:
	.4byte 0x00000D94
_080FDF50:
	.4byte 0x00000FA2
_080FDF54:
	.4byte 0x00001770
_080FDF58:
	.4byte 0x0000180D
_080FDF5C:
	.4byte 0x00000F62
_080FDF60:
	.4byte 0x00000EE2
_080FDF64:
	.4byte 0x000016C4
_080FDF68:
	.4byte 0x00000F02
_080FDF6C:
	.4byte 0x000016C5
_080FDF70:
	.4byte 0x00000ED2
_080FDF74:
	.4byte 0x00001142
_080FDF78:
	.4byte 0x000016F8
_080FDF7C:
	.4byte 0x00000958
_080FDF80:
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
_080FDF88:
	ldr r1, _080FDFA8  @ =gUnknown_0817AAEC
	ldr r0, _080FDFAC  @ =gRam
	ldr r2, _080FDFB0  @ =0x00000F52
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080FDFA0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FDFA8:
	.4byte gUnknown_0817AAEC
_080FDFAC:
	.4byte gRam
_080FDFB0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDE64

