	THUMB_FUNC_START sub_080F3CD8
sub_080F3CD8: @ 0x080F3CD8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r9, r5
	ldr r0, _080F3CFC  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bls _080F3D08
	ldr r0, _080F3D00  @ =gRam
	ldr r1, _080F3D04  @ =0x00000FA2
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #0
	b _080F3E12
	.byte 0x00
	.byte 0x00
_080F3CFC:
	.4byte gSword
_080F3D00:
	.4byte gRam
_080F3D04:
	.4byte 0x00000FA2
_080F3D08:
	ldr r6, _080F3D6C  @ =gRam
	ldr r2, _080F3D70  @ =0x00001172
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	mov r8, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C2FA8
	mov r1, #3
	eor r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F3D74  @ =0x00001082
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
	sub r2, r2, #208
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
	ldr r0, _080F3D78  @ =0x00001663
	add r7, r6, r0
	ldrb r4, [r7]
	mov r0, #1
	strb r0, [r7]
	bl sub_0812F9A8
	strb r4, [r7]
	ldr r1, _080F3D7C  @ =0x000009DA
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #18
	beq _080F3DA4
	ldr r2, _080F3D80  @ =0x00001052
	add r0, r6, r2
	add r0, r5, r0
	mov r1, r8
	strb r1, [r0]
	ldrb r0, [r7]
	cmp r0, #1
	bne _080F3D84
	sub r2, r2, #176
	add r0, r6, r2
	add r0, r5, r0
	b _080F3E12
	.byte 0x00
	.byte 0x00
_080F3D6C:
	.4byte gRam
_080F3D70:
	.4byte 0x00001172
_080F3D74:
	.4byte 0x00001082
_080F3D78:
	.4byte 0x00001663
_080F3D7C:
	.4byte 0x000009DA
_080F3D80:
	.4byte 0x00001052
_080F3D84:
	ldr r1, _080F3D9C  @ =0x0000165F
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080F3E14
	ldr r2, _080F3DA0  @ =0x00000FA2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, r8
	b _080F3E12
_080F3D9C:
	.4byte 0x0000165F
_080F3DA0:
	.4byte 0x00000FA2
_080F3DA4:
	ldr r2, _080F3DF4  @ =0x00001052
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080F3DF8  @ =0x0000165F
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080F3E0C
	ldr r2, _080F3DFC  @ =0x00000ED2
	add r3, r6, r2
	add r3, r5, r3
	ldrb r1, [r3]
	ldr r0, _080F3E00  @ =0x00000EF2
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #15
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r2, _080F3E04  @ =0x00000EE2
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #6
	strb r0, [r1]
	ldr r1, _080F3E08  @ =0x00001132
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #3
	b _080F3E12
	.byte 0x00
	.byte 0x00
_080F3DF4:
	.4byte 0x00001052
_080F3DF8:
	.4byte 0x0000165F
_080F3DFC:
	.4byte 0x00000ED2
_080F3E00:
	.4byte 0x00000EF2
_080F3E04:
	.4byte 0x00000EE2
_080F3E08:
	.4byte 0x00001132
_080F3E0C:
	ldr r2, _080F3E20  @ =0x00000FA2
	add r0, r6, r2
	add r0, r0, r9
_080F3E12:
	strb r1, [r0]
_080F3E14:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F3E20:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F3CD8

