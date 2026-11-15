	THUMB_FUNC_START sub_080C3C98
sub_080C3C98: @ 0x080C3C98
	push {r4,r5,lr}
	ldr r0, _080C3D24  @ =gRam
	ldr r2, _080C3D28  @ =0x00001804
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _080C3D50
	ldr r3, _080C3D2C  @ =0x000016D5
	add r0, r5, r3
	ldrb r4, [r0]
	lsr r4, r4, #1
	ldr r1, _080C3D30  @ =0x000016C4
	add r0, r5, r1
	ldrb r3, [r0]
	ldr r2, _080C3D34  @ =0x000016C5
	add r0, r5, r2
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080C3D38  @ =gUnknown_08171E92
	add r0, r4, r0
	orr r3, r3, r1
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r0, _080C3D3C  @ =gUnknown_08171E96
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r3, r3, r0
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080C3D40  @ =gUnknown_08171E9A
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080C3D44  @ =gUnknown_08171E8E
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	strb r3, [r0]
	lsr r3, r3, #8
	add r1, r1, #16
	add r0, r5, r1
	strb r3, [r0]
	ldr r3, _080C3D48  @ =0x00000961
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	add r1, r1, #1
	add r0, r5, r1
	strb r2, [r0]
	ldr r2, _080C3D4C  @ =0x00000964
	add r0, r5, r2
	mov r1, #16
	strb r1, [r0]
	b _080C3E9E
	.byte 0x00
	.byte 0x00
_080C3D24:
	.4byte gRam
_080C3D28:
	.4byte 0x00001804
_080C3D2C:
	.4byte 0x000016D5
_080C3D30:
	.4byte 0x000016C4
_080C3D34:
	.4byte 0x000016C5
_080C3D38:
	.4byte gUnknown_08171E92
_080C3D3C:
	.4byte gUnknown_08171E96
_080C3D40:
	.4byte gUnknown_08171E9A
_080C3D44:
	.4byte gUnknown_08171E8E
_080C3D48:
	.4byte 0x00000961
_080C3D4C:
	.4byte 0x00000964
_080C3D50:
	mov r4, #0
	ldr r1, _080C3DD8  @ =0x0000178A
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	bne _080C3E1C
	ldr r2, _080C3DDC  @ =0x0000180C
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080C3E1C
	ldr r3, _080C3DE0  @ =0x000016EA
	add r1, r5, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080C3DF0
	ldr r1, _080C3DE4  @ =0x000016C4
	add r0, r5, r1
	ldrb r2, [r0]
	sub r3, r3, #37
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #14
	sub r1, r1, #4
	add r0, r5, r1
	ldrb r1, [r0]
	sub r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #15
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	add r3, r3, #16
	add r0, r5, r3
	strb r2, [r0]
	ldr r2, _080C3DE8  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080C3DEC  @ =0x00000964
	add r1, r5, r0
	mov r0, #44
	strb r0, [r1]
	add r2, r2, #4
	add r1, r5, r2
	mov r0, #45
	strb r0, [r1]
	b _080C3EA4
	.byte 0x00
	.byte 0x00
_080C3DD8:
	.4byte 0x0000178A
_080C3DDC:
	.4byte 0x0000180C
_080C3DE0:
	.4byte 0x000016EA
_080C3DE4:
	.4byte 0x000016C4
_080C3DE8:
	.4byte 0x00000961
_080C3DEC:
	.4byte 0x00000964
_080C3DF0:
	ldr r0, _080C3E08  @ =gUnknown_08171E9E
	ldrb r1, [r1]
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C3E0C
	mov r3, #151
	lsl r3, r3, #4
	add r1, r5, r3
	mov r0, #128
	strb r0, [r1]
	b _080C3EA4
_080C3E08:
	.4byte gUnknown_08171E9E
_080C3E0C:
	ldr r2, _080C3EAC  @ =0x000016D5
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r0, r1, r0
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_080C3E1C:
	ldr r3, _080C3EB0  @ =0x000016C4
	add r0, r5, r3
	ldrb r2, [r0]
	ldr r1, _080C3EB4  @ =0x000016C5
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	add r3, r3, #51
	add r0, r5, r3
	mov r1, #0
	ldrsb r1, [r0, r1]
	add r1, r1, r2
	ldr r0, _080C3EB8  @ =gUnknown_08171EAB
	add r0, r4, r0
	mov r3, #0
	ldrsb r3, [r0, r3]
	add r3, r3, r1
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, #53
	add r0, r5, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	add r1, r1, r2
	ldr r0, _080C3EBC  @ =gUnknown_08171F2D
	add r0, r4, r0
	mov r2, #0
	ldrsb r2, [r0, r2]
	add r2, r2, r1
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	strb r3, [r0]
	lsr r3, r3, #8
	add r1, r1, #16
	add r0, r5, r1
	strb r3, [r0]
	ldr r3, _080C3EC0  @ =0x00000961
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	add r1, r1, #1
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _080C3EC4  @ =gUnknown_08171EEC
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080C3EC8  @ =0x00000964
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080C3ECC  @ =gUnknown_08171F6E
	add r0, r4, r0
	ldrb r1, [r0]
_080C3E9E:
	add r3, r3, #4
	add r0, r5, r3
	strb r1, [r0]
_080C3EA4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C3EAC:
	.4byte 0x000016D5
_080C3EB0:
	.4byte 0x000016C4
_080C3EB4:
	.4byte 0x000016C5
_080C3EB8:
	.4byte gUnknown_08171EAB
_080C3EBC:
	.4byte gUnknown_08171F2D
_080C3EC0:
	.4byte 0x00000961
_080C3EC4:
	.4byte gUnknown_08171EEC
_080C3EC8:
	.4byte 0x00000964
_080C3ECC:
	.4byte gUnknown_08171F6E
	THUMB_FUNC_END sub_080C3C98

